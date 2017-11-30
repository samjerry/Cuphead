using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePlayer : MonoBehaviour {
    private int x;
    private int y;


    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        try
        {
            GameObject player = GameObject.FindGameObjectWithTag("Player");
            x = (int)player.transform.position.x;
            if (Input.GetKeyDown(KeyCode.A))
            {
                x -= 1;
                this.transform.localPosition = new Vector3(x, y);
                
            }
            if (Input.GetKeyDown(KeyCode.D))
            {
                x += 1;
                this.transform.localPosition = new Vector3(x, y);
            }
            if (Input.GetKeyDown(KeyCode.W))
            {
                y += 1;
                this.transform.localPosition = new Vector3(x, y);

            }
            if (Input.GetKeyDown(KeyCode.S))
            {
                y -= 1;
                this.transform.localPosition = new Vector3(x, y);

            }
        }
        catch(Exception ex)
        {
            ex.ToString();
        }
    }
}
