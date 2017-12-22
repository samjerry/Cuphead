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
    private float _maxVelocity = 10;

    void Start()
    {
        _rb = GetComponent<Rigidbody2D>();
        _targetPosition = GameObject.FindGameObjectWithTag("Player").transform.position;
        _velocity = new Vector3(0, 20, 0);
        
    }


    void Update()
    {
        _desiredVelocity = (_targetPosition - transform.position).normalized * _maxVelocity;
        _steering = _desiredVelocity - _velocity;

        _velocity += _steering * Time.deltaTime;
      
        transform.position += _velocity * Time.deltaTime;
        transform.Rotate(0, 0, -20);
        
    }

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.tag != "Player" && coll.gameObject.tag != "Enemy")
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
