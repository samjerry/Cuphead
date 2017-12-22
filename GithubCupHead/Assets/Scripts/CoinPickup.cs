using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinPickup : MonoBehaviour {
    private int _score = 0;
    private Animator _anim;
    private float _timeLeft = 0.5f;
    private bool _isCollision = false;
    private int _coinPickup = Animator.StringToHash("IsPickup");
    void Start(){
        _anim = GetComponent<Animator>();
    }
    private void Update(){
        if (_isCollision == true){
            _timeLeft -= Time.deltaTime;
            if (_timeLeft <= 0){
                Destroy(gameObject);
            }
        }

    }
    private void OnTriggerEnter2D(Collider2D collision){
        if (collision.gameObject.tag == "Player"){
            _anim.SetTrigger(_coinPickup);
            _score += 1;
            _isCollision = true;
        }
    }
}
