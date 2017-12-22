using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePlayer : MonoBehaviour {
    public bool renAnim = false;
    private int _x;
    private int _y;
	// Update is called once per frame
	void Update () {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        _x = (int)player.transform.position.x;
        if (Input.GetKeyDown(KeyCode.A)){
            _x -= 1;
            this.transform.localPosition = new Vector3(_x, _y);
            renAnim = true;
        }
        if (Input.GetKeyDown(KeyCode.D)){
            _x += 1;
            this.transform.localPosition = new Vector3(_x, _y);
            renAnim = true;
        }
        if (Input.GetKeyDown(KeyCode.W)){
            _y += 1;
            this.transform.localPosition = new Vector3(_x, _y);
        }
        if (Input.GetKeyDown(KeyCode.S)){
            _y -= 1;
            this.transform.localPosition = new Vector3(_x, _y);

        }
        if (!Input.GetKeyDown(KeyCode.D) && !Input.GetKeyDown(KeyCode.A))
        {
            renAnim = false;
        }
    }    
}
