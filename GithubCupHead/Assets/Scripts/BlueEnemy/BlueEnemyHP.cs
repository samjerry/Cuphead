using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueEnemyHP : MonoBehaviour {
    /// <summary>
    /// BlueEnemyHP manager by Dave van Staden.
    /// </summary>
    public float Hp;
    private float _timeLeft = 4;
    public float nerfspeed;
	// Use this for initialization
	void Start () {
        Hp = 4;
        nerfspeed = GetComponent<BlueEnemyMovement>().speed;
	}
	
	// Update is called once per frame
	void Update () {
        if (Hp <= 0){
            _timeLeft -= Time.deltaTime;
            nerfspeed = 0;
            if (_timeLeft <= 0){
                nerfspeed = 0.1f;
                Hp = 3;
                _timeLeft = 4;
            }
        }
	}
    private void OnTriggerEnter2D(Collider2D other){
        if (other.gameObject.tag == "EnemyBullet"){
            Hp -= 1;
        }
    }
}
