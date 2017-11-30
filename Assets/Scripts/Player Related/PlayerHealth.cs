using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHealth : MonoBehaviour {

	/// <summary>
	/// Player health manager by Jerry Sam.
	/// </summary>

	public int playerHP;

	private bool _isDead;

	void Start () {
		playerHP = 3;
		_isDead = false;
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
	}

	void Dead () {
		Time.timeScale = 0;
	}
}