using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlowerHP : MonoBehaviour {
    public int flowerHP;

    void Start(){
        flowerHP = 5;
    }
    void Update(){

        if (flowerHP <= 0){
            Dead();
        }
    }
    void OnCollisionEnter2D(Collision2D other){
        if (other.gameObject.tag == "Bullet"){
            flowerHP -= 1;
        }
    }

    void Dead(){
        Destroy(gameObject);
    }
}
