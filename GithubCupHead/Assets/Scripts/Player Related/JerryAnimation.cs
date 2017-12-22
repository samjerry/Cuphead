using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JerryAnimation : MonoBehaviour {
    public PlayerMovement move;
    public PlayerShoot shoot;

    private Animator _anim;

    void Start()
    {
        _anim = GetComponent<Animator>();
        move = GetComponent<PlayerMovement>();
        shoot = GetComponent<PlayerShoot>();
    }

    void Update()
    {
        if (move.renAnim && move.isGrounded)
        {
            OnRunState();
        }
        else if (!move.renAnim && move.isGrounded)
        {
            OnIdleState();
        }
        else if (move.jump)
        {
            OnJumpState();
        }
    }

    private void OnIdleState()
    {

        if (Input.GetKeyDown(null))
        {
            _anim.Play("IDLE");
        }
        else if (shoot.isShooting)
        {
            if (shoot.bulDir == ("up"))
            {
                _anim.Play("IdleShootUp");
            }
            else if (shoot.bulDir == ("right"))
            {
                _anim.Play("IdleShoot");
            }
            else
            {
                _anim.Play("IdleShoot");
            }
        }
    }

    private void OnRunState()
    {
        if (move.moveDir == ("right"))
        {
            if (shoot.isShooting && shoot.bulDir == ("up"))
            {
                _anim.Play("RunShoot");
            }
            else if (shoot.isShooting)
            {
                _anim.Play("RunShoot");
            }
        }
        else if (move.moveDir == ("left"))
        {

        }
    }

    private void OnJumpState()
    {
        _anim.Play("Jump");
    }
}
