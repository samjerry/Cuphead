using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraManager : MonoBehaviour {

    /// <summary>
    /// camera movement by Jerry Sam
    /// </summary>
    public Transform Player;


    void Update()
    {
        this.transform.position = new Vector3(Player.position.x, this.transform.position.y, this.transform.position.z);
    }
}
