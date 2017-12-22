using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonRetry : MonoBehaviour {
    public GameObject buttonImage;
    private float _playerHP;
	// Use this for initialization
	void Start () {
    }
	
	// Update is called once per frame
	void Update () {
        _playerHP = GameObject.Find("Player").GetComponent<PlayerHealth>().playerHP;
        if (_playerHP <= 0)
        {
           buttonImage.SetActive(true);
        } else if (_playerHP >= 1)
        {
            buttonImage.SetActive(false);
        }
    }
}
