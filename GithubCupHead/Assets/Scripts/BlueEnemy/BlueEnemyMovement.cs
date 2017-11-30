using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueEnemyMovement : MonoBehaviour
{
    public float speed = 1f;
    int direction = -1;
    bool moveDirect = true;
    void Update()
    {
        if (speed < 0)
        {
            speed = Mathf.Abs(speed);
        }
        transform.Translate(-Vector3.right * (direction * speed));
        if (moveDirect == true)
        {
            direction = 1;
        }

        if (moveDirect == false)
        {
            direction = -1;
        }

    }
    void OnTriggerEnter2D(Collider2D other){
        if (other.tag == "wall1"){
            moveDirect = false;
        }
        if (other.tag == "wall2"){
            moveDirect = true;
        }
    }
}
