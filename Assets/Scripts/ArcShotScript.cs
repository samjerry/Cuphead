using UnityEngine;
using System.Collections;

public class ArcShotScript : MonoBehaviour
{
    private Animator _anim;
    public GameObject Bullet;
    bool CoroutinePlay = true;
    

    void Start()
    {
        _anim = GetComponent<Animator>();
    }


    IEnumerator SimulateProjectile()
    {
        yield return new WaitForSeconds(1f);

        Instantiate(Bullet, transform.position, transform.rotation);

        yield return new WaitForSeconds(0);
        _anim.SetBool("InFieldOfVision", false);

    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        CoroutinePlay = true;

        if (coll.CompareTag("Target") && CoroutinePlay == true)
        {
            _anim.SetBool("InFieldOfVision", true);
            print("in");
            StartCoroutine(SimulateProjectile());
            CoroutinePlay = false;
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
 
