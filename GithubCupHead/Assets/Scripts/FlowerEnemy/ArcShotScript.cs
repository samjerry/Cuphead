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
        yield return new WaitForSeconds(0.8f);

        Instantiate(Bullet, new Vector2(transform.position.x, transform.position.y + 1.5f), transform.rotation);

        yield return new WaitForSeconds(0);
        _anim.SetBool("InFieldOfVision", false);
    }

    IEnumerator waitAnim()
    {
        yield return new WaitForSeconds(3f);
        _anim.SetBool("InFieldOfVision", false);
    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        CoroutinePlay = true;

        if (coll.CompareTag("Player") && CoroutinePlay == true)
        {
            _anim.SetBool("InFieldOfVision", true);
            StartCoroutine(SimulateProjectile());
            CoroutinePlay = false;
        }

    }

    void OnTriggerExit2D(Collider2D coll)
    {
        if (coll.CompareTag("Player"))
        {
            waitAnim();
        }
    }
}

