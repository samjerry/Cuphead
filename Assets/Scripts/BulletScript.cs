using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour
{
    private Rigidbody2D _rb;
    public GameObject Explosion;

    private Vector3 _targetPosition;
    private Vector3 _velocity;
    private Vector3 _desiredVelocity;
    private Vector3 _steering;
    private float _maxVelocity = 5;

    void Start()
    {
        _rb = GetComponent<Rigidbody2D>();
        _targetPosition = GameObject.FindGameObjectWithTag("Target").transform.position;
        _velocity = new Vector2(0, 7);
    }


    void Update()
    {
        _desiredVelocity = (_targetPosition - transform.position).normalized * _maxVelocity;
        _steering = _desiredVelocity - _velocity;
        _steering /= _rb.mass;
        _velocity += _steering;
        transform.position = transform.position + _velocity * Time.deltaTime;
        transform.Rotate(0, 0, -20);
    }

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.tag != "Target" && coll.gameObject.tag != "Flower")
        {
            Destroy(gameObject);
            Instantiate(Explosion, new Vector2(transform.position.x, transform.position.y + 1.7f), Quaternion.Euler(new Vector2(0,0)));
            
        }
        else
        {
            Destroy(gameObject);
        }
    }
}
