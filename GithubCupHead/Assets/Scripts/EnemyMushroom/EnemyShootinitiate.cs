using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShootinitiate : MonoBehaviour {
    public GameObject mushroomBall;
    public float coolDownTimer = 4;
    public float coolDown = 0.5f;
    private GameObject _player;
    float timeLeft = 2;

    private void Start()
    {
        _player = GameObject.Find("Player");
    }
    void Update()
    {
       
        try
        {
            float range = 4.5f;
            if (
                _player.transform.position.x >= this.transform.position.x - range &&
                _player.transform.position.x <= this.transform.position.x + range &&
                _player.transform.position.y >= this.transform.position.y - range &&
                _player.transform.position.y <= this.transform.position.y + range
            )
            timeLeft -= Time.deltaTime;

            if (timeLeft <= 0)
            {
                ShootInitiate();
                timeLeft = 4.5f;
            }
        }
        catch (Exception ex)
        {
        }
    }
    public void ShootInitiate(){
            if (_player != null){

                GameObject bullet = Instantiate(mushroomBall);
                bullet.transform.position = transform.position;

                Vector2 direction = _player.transform.position - bullet.transform.position;
                bullet.GetComponent<ProjectileMovement>().SetDirection(direction);
            }
    }
}
