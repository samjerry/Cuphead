using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileMovement : MonoBehaviour {
    /// <summary>
    /// ProjectileMovement By Dave van Staden
    /// </summary>
    private float _speed;
    private Vector2 _myDirection;
    private bool _isReady;
    private float _timeLeft = 7;
    void Awake(){
        _speed = 1.2f;
        _isReady = false;
    }

    public void SetDirection(Vector2 direction){
        _myDirection = direction;
        _isReady = true;
    }

    void Update(){
        if (_isReady){
            Vector2 position = transform.position;
            position += _myDirection * _speed * Time.deltaTime;
            transform.position = position;
        }
        _timeLeft -= Time.deltaTime;

        if (_timeLeft <= 0){
            Destroy(gameObject);
        }
    }
    private void OnCollisionEnter2D(Collision2D other){
        if (other.gameObject.tag == "Player"){
            Destroy(gameObject);
        }
    }
}


