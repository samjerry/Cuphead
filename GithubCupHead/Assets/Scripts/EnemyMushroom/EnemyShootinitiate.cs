using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShootinitiate : MonoBehaviour {
    /// <summary>
    /// EnemyShootInitiate By Dave van Staden
    /// </summary>
    private SpriteRenderer _sr;
    public GameObject mushroomBall;
    private GameObject _player;
    private float _timeLeft = 2;
    public float range = 4.5f;
    public bool inRange = false;
    public bool isShooting = false;

    private void Start(){
        _player = GameObject.Find("Player");
        _sr = GetComponent<SpriteRenderer>();
    }
    void Update(){
        if (
            _player.transform.position.x >= this.transform.position.x - range &&
            _player.transform.position.x <= this.transform.position.x + range &&
            _player.transform.position.y >= this.transform.position.y - range &&
            _player.transform.position.y <= this.transform.position.y + range
        ){
            _timeLeft -= Time.deltaTime;
            inRange = true;
        }
        else{
            inRange = false;
        }

        if (_timeLeft <= 0){
            isShooting = true;
            Invoke("ShootInitiate", 0.5f);
            _timeLeft = 4.5f;         
        }
        if (_player.transform.position.x >= this.transform.position.x){
            _sr.flipX = true;
            Debug.Log("doet het");
        }
        else if (_player.transform.position.x <= this.transform.position.x){
            _sr.flipX = false;
        }
    }
    public void ShootInitiate(){
        if (_player != null){

            GameObject bullet = Instantiate(mushroomBall);
            bullet.transform.position = transform.position;

            Vector2 direction = _player.transform.position - bullet.transform.position;
            bullet.GetComponent<ProjectileMovement>().SetDirection(direction);
            isShooting = false;
        }
    }
}
