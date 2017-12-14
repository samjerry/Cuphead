using UnityEngine;
using System.Collections;

public class ArcShotScript : MonoBehaviour
{
    private Animator _anim;

    void Start()
    {
        StartCoroutine(SimulateProjectile());
        _anim = GetComponent<Animator>();
    }


    IEnumerator SimulateProjectile()
    {
        while (true) {

                yield return new WaitForSeconds(5f);
        }
    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.CompareTag("Target"))
        {
            _anim.SetBool("InFieldOfVision", true);
            print("in");
        }
       
    }

    void OnTriggerExit2D(Collider2D coll)
    {
        if (coll.CompareTag("Target"))
        {
            _anim.SetBool("InFieldOfVision", false);
            print("out");
        }   
    }
}
 
