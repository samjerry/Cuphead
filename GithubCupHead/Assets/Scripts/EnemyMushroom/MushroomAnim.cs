using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MushroomAnim : MonoBehaviour {
    /// <summary>
    /// MushroomAnim manager by Dave van Staden.
    /// </summary>
    public bool radius;
    public bool shooting;
    public float animTime;
    private Animator _anim;
    private int _inRadius= Animator.StringToHash("IsInRadius");
    private int _outRadius = Animator.StringToHash("IsOutRadius");
    private int _isAttacking = Animator.StringToHash("IsAttacking");
    private int _isNotAttacking = Animator.StringToHash("IsNotAttacking");
    // Use this for initialization
    void Start () {
        _anim = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
        radius = GetComponent<EnemyShootinitiate>().inRange;
        shooting = GetComponent<EnemyShootinitiate>().isShooting;
        if (radius == true){
            _anim.SetTrigger(_inRadius);
            _anim.ResetTrigger(_outRadius);
        }
        else if (radius == false){
            _anim.SetTrigger(_outRadius);
            _anim.ResetTrigger(_inRadius);
        }
        if (shooting == true){
            _anim.SetTrigger(_isAttacking);
        }
        else if (shooting == false){
            _anim.ResetTrigger(_isAttacking);
        }
    }
}
