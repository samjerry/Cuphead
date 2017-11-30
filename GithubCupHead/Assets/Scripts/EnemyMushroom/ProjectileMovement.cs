using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileMovement : MonoBehaviour {
    float speed;
    Vector2 myDirection;
    bool isReady;
    void Awake()
    {
        speed = 1f;
        isReady = false;
    }

    public void SetDirection(Vector2 direction)
    {
        myDirection = direction;
        isReady = true;
    }

    void Update()
    {
        if (isReady)
        {
            Vector2 position = transform.position;
            position += myDirection * speed * Time.deltaTime;
            transform.position = position;
        }
    }
}


