using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {

	/// <summary>
	/// The player movement by Jerry Sam.
	/// </summary>

	[Range (1, 10)]
	public float jumpVelocity;
	public float fallMultiplier = 2.5f;
	public float lowJumpMultiplier = 2f;
	public float walkSpeed = 3f;

	public float groundCheckRad;

	public LayerMask groundLayer;

	public Transform groundCheck;

	private bool _isGrounded;
	private bool _dJumpPossible;

	private Rigidbody2D _rb;

	void Awake(){
		_rb = GetComponent<Rigidbody2D>();
		_isGrounded = true;
	}

	void Update(){
		_isGrounded = Physics2D.OverlapCircle (groundCheck.position,groundCheckRad,groundLayer);

		if (Input.GetKeyDown(KeyCode.Space)){
			if (_isGrounded && _rb.velocity.y == 0) {
				_rb.velocity = Vector2.up * jumpVelocity;
				_dJumpPossible = true;
			}
			else if (_dJumpPossible) {
				_dJumpPossible = false;
				_rb.velocity = Vector2.up * jumpVelocity;
			}
		}

		// this code causes the player to fall faster over time
		if (_rb.velocity.y < 0) {
			_rb.velocity += Vector2.up * Physics2D.gravity.y * (fallMultiplier - 1) * Time.deltaTime;
		}

		if (Input.GetKey(KeyCode.A)){
			transform.position += -Camera.main.transform.right * walkSpeed * Time.deltaTime;
		}
			
		if (Input.GetKey(KeyCode.D)){
			transform.position += Camera.main.transform.right * walkSpeed * Time.deltaTime;
		}
	}
}
