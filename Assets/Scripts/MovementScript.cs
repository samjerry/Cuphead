using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementScript : MonoBehaviour {

    private Rigidbody2D _rb;
    private Animator _anim;

    void Start () {

        _anim = GetComponent<Animator>();
        _rb = GetComponent<Rigidbody2D>();
        StartCoroutine(FlyUp());
    }

    IEnumerator FlyUp()
    {
        while (true)
        {
            _anim.SetBool("PlayStop", true);
            Force();
            yield return new WaitForSeconds(5f);
        }
    }

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.tag == "Stop")
        {
            _anim.SetBool("PlayStop", false);
            _rb.velocity = Vector2.zero;
        }
    }

    
    void Force () {
        
        _rb.AddForce(transform.up * 650);
	}

    
}
