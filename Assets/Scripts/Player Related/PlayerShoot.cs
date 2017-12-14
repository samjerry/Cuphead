using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShoot : MonoBehaviour {

	/// <summary>
	/// Player shooting by Jerry Sam.
	/// </summary>


	private float _maxSpd;

	public Rigidbody2D bullet;

	private Transform _bulOrigin;
	private Rigidbody2D bulletInstance;


	void Awake () {
//		_bulOrigin = Transform.Find("bullet");

		_maxSpd = 2;
	}
	
	void Update () {
		if (Input.GetButtonDown("Fire1")) { 
			Shoot ();
		}
	}

	private void Shoot(){
		bulletInstance = Instantiate(bullet, _bulOrigin.transform.position, Quaternion.Euler(new Vector3(0, 0, 1))) as Rigidbody2D; 
		bulletInstance.velocity = transform.right * _maxSpd; 
		Physics2D.IgnoreCollision(bulletInstance.GetComponent<Collider2D>(), GetComponent<Collider2D>()); 
	}

	private void ChangeAimDir(){

	}
}
