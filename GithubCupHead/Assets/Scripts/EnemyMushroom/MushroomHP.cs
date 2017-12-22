using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MushroomHP : MonoBehaviour {
    /// <summary>
    /// MushroomHP manager by Dave van Staden.
    /// </summary>
    private int _IsDead = Animator.StringToHash("IsDeath");
    private Animator _anim;
    public int mushroomHP;
    void Start(){
        mushroomHP = 5;
        _anim = GetComponent<Animator>();
    }

    void Update(){

        if (mushroomHP <= 0){
            StartCoroutine(deathAnim());
            Debug.Log("isdying");
        }
    }
    void OnTriggerEnter2D(Collider2D other){
        if (other.gameObject.tag == "EnemyBullet"){
            mushroomHP -= 1;
        }
    }

    void Dead(){
        Destroy(gameObject);
    }
    IEnumerator deathAnim()
    {
            _anim.SetTrigger(_IsDead);
            yield return new WaitForSeconds(0.5f);
            Dead();
    }

}
