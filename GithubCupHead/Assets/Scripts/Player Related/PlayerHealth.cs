using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHealth : MonoBehaviour {

	/// <summary>
	/// Player health manager by Jerry Sam.
	/// </summary>

	public int playerHP;

	void Start () {
		playerHP = 3;
	}

	void Update () {

		if (playerHP <= 0) {
			Dead ();
		}
	}
	void OnCollisionEnter2D(Collision2D other) {
		if (other.gameObject.tag == "Enemy") {
			playerHP -= 1;
		}
        if (other.gameObject.tag == "Stop")
        {
            playerHP -= 3;
        }
	}

	void Dead () {
        Destroy(gameObject);
	}
}