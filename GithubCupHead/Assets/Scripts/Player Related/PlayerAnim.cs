using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnim : MonoBehaviour {
    /// <summary>
    /// PlayerAnim made By Dave van Staden 21-12-2017 17:00;
    /// </summary>
    public bool running;
    public bool shoot;
    //public bool shootUp;
    public bool jump;
    private Animator _anim;
    private int _IsRun = Animator.StringToHash("Run");
    private int _IsNotRun = Animator.StringToHash("FalseRun");
    private int _Jump = Animator.StringToHash("Jump");
    private int _FalseJump = Animator.StringToHash("FalseJump");
    private int _RunJump = Animator.StringToHash("RunJump");
    // Use this for initialization
    void Start () {
        _anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update() {
        running = GetComponent<PlayerMovement>().renAnim;
        //shootUp = GetComponent<PlayerShoot>().shootUp;
        jump = GetComponent<PlayerMovement>().jump;

        if (running == true) {
            _anim.SetTrigger(_IsRun);
            _anim.ResetTrigger(_IsNotRun);
            shoot = false;
        } else if (running == false) {
            _anim.SetTrigger(_IsNotRun);
            _anim.ResetTrigger(_IsRun);
        }
        if (running == true && jump == true)
        {
            _anim.SetTrigger(_RunJump);
        } else if (jump == true){
            _anim.SetTrigger(_Jump);
            _anim.ResetTrigger(_FalseJump);
        }
        else if (jump == false){
            _anim.SetTrigger(_FalseJump);
            _anim.ResetTrigger(_Jump);
        }
        

    }
}
