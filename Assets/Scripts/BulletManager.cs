using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletManager : MonoBehaviour {


	public float bulSpeed = 2;

	private float _bulDecay = 2;
	private float _bulDir;

	private Rigidbody2D _rb;

	private Transform bulOrigin;

	void Awake () {
		_rb = GetComponent<Rigidbody2D>();
	}
	
	void Update () {
		
	}
}
