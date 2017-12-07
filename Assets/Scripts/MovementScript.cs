using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementScript : MonoBehaviour {

    private Rigidbody rb;
    Vector2 origin;

    void Start () {
        rb = GetComponent<Rigidbody>();
        StartCoroutine(FlyUp());
    }

    IEnumerator FlyUp()
    {
        while (true)
        {
            Force();
            yield return new WaitForSeconds(5f);
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
