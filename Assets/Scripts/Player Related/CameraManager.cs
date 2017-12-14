﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraManager : MonoBehaviour {

	public GameObject target;

	private Vector3 offset;

	void Start ()
	{
		offset = transform.position - target.transform.position;
	}

	void LateUpdate ()
	{
        if(target)
		transform.position = target.transform.position + offset;
	}
}
