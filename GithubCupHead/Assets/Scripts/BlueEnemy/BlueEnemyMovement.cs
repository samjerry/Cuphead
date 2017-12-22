using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueEnemyMovement : MonoBehaviour{
    /// <summary>
    /// BlueEnemyMovement manager by Dave van Staden.
    /// </summary>
    public float speed = 1f;
    private int _direction = -1;
    private bool _moveDirect = true;
    private SpriteRenderer _sr;
    private void Start(){
        _sr = GetComponent<SpriteRenderer>();
    }
    void Update(){
        speed = GetComponent<BlueEnemyHP>().nerfspeed;
        if (speed < 0){
            speed = Mathf.Abs(speed);
        }
        transform.Translate(-Vector3.right * (_direction * speed));
        if (_moveDirect == true){
            _direction = 1;
            _sr.flipX = true;
        }

        if (_moveDirect == false){
            _direction = -1;
            _sr.flipX = false;
        }

    }
    void OnTriggerEnter2D(Collider2D other){
        if (other.tag == "wall1"){
            _moveDirect = false;
        }
        if (other.tag == "wall2"){
            _moveDirect = true;
        }
    }
}
