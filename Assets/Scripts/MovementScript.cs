using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementScript : MonoBehaviour {

    private Rigidbody rb;
    Vector2 origin;

    public float cooldownTimer;
    public float coolDown = 2f;

    void Start () {
        rb = GetComponent<Rigidbody>();

	}

    void FixedUpdate() {
        if (cooldownTimer > 0)
        {
            cooldownTimer -= Time.deltaTime;
        }
        if (cooldownTimer < 0)
        {
            cooldownTimer = 0;
        }
        if (cooldownTimer == 0)
        {
            Force();
            cooldownTimer = coolDown;
        }
     }

    void OnTriggerEnter(Collider coll)
    {
        if (coll.gameObject.tag == "Stop")
        {
            rb.velocity = Vector3.zero;
        }
    }
	
	void Force () {
        rb.AddForce(transform.up * 600);
	}
}
