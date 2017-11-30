using UnityEngine;
using System.Collections;

public class CameraManager : MonoBehaviour {

	/// <summary>
	/// The camera controller by Jerry Sam.
	/// </summary>

	public GameObject player;

	private Vector3 _offset;

	void Start (){
		_offset = transform.position - player.transform.position;
	}

	void LateUpdate (){
		transform.position = player.transform.position + _offset;
	}
}