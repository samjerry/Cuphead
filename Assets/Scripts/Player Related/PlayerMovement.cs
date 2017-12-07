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
	public float dashSpeed = 5f;
	public float dashDuration = 0.5f;

	public float groundCheckRad;

	public LayerMask groundLayer;

	public Transform groundCheck;

	private string _moveDir;

	private bool _isGrounded;
	private bool _dJumpPossible;

	private Rigidbody2D _rb;

	private bool isDashing;

	void Awake(){
		_rb = GetComponent<Rigidbody2D>();
		_isGrounded = true;
	}

	void Update(){
		if (Input.GetKeyDown(KeyCode.E) && !isDashing)
			OnDashState ();
		else
			OnWalkState ();
	}
	private void OnDashState(){
		StartCoroutine (Dash());
	}

	private void OnWalkState(){
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
			transform.position += Vector3.left * walkSpeed * Time.deltaTime;
			_moveDir = "left";
		}

		if (Input.GetKey (KeyCode.D)) {
			transform.position += Vector3.right * walkSpeed * Time.deltaTime;
			_moveDir = "right";
		}
	}

	IEnumerator Dash(){
		isDashing = true;
		float startTime = Time.time;
		while (Time.time < (startTime + dashDuration))
		{
			if (_moveDir == "left") {
//			if (Input.GetAxis("Horizontal") < 0) {
				transform.position += Vector3.left * dashSpeed * Time.deltaTime;
			} else {
				transform.position += Vector3.right * dashSpeed * Time.deltaTime;
			}
			yield return null;
		}
		isDashing = false;
	}
}