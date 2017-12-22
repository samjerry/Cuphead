using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueEnemyAnimation : MonoBehaviour {
    public float animHp;
    private Animator _anim;
    private int _death = Animator.StringToHash("IsDead");
    private int _alive = Animator.StringToHash("IsAlive");

    // Use this for initialization
    void Start () {
        _anim = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
        animHp = GetComponent<BlueEnemyHP>().Hp;
        if (animHp <= 0){
            _anim.SetTrigger(_death);
            _anim.ResetTrigger(_alive);
        }
        if (animHp >= 3){
            _anim.ResetTrigger(_death);
            _anim.SetTrigger(_alive);
            Debug.Log("leven");

        }
    }
}
