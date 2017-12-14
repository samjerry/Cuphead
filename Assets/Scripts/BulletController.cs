﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController: MonoBehaviour {

	public float speed;
	public float lifeTime = 2.0f;

	void  Awake ()
	{
		Destroy(gameObject, lifeTime);
	}

	void Update(){

		transform.Translate (Vector3.right * speed * Time.deltaTime);
	}

	void OnCollision2DEnter(Collider2D other)
	{
		if (other.gameObject.CompareTag ("world")){
			Destroy (gameObject);
		}

		if (other.gameObject.CompareTag ("enemy")){
			Destroy (gameObject);
		}
	}

}
