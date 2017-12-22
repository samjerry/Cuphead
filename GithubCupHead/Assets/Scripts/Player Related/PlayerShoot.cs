using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShoot : MonoBehaviour
{

    /// <summary>
    /// Player shooting by Jerry Sam.
    /// </summary>

    public string bulDir;
    public bool isShooting;
    private bool renAnim;

    public Rigidbody2D bullet;

    private float _maxSpd;

    private Transform _bulDir;
    [SerializeField]
    private Transform _bulOrigin;
    private Rigidbody2D _bulInstance;

    private GunController gun;
    void Awake(){
        _maxSpd = 15;
        bulDir = "right";
    }

    void Update()
    {
        renAnim = GetComponent<PlayerMovement>().renAnim;
        if (Input.GetMouseButtonDown(0) && renAnim == true){
            Debug.Log("renShooting");
        }
        if (Input.GetMouseButtonDown(0)){
            Debug.Log("IsShooting");
            Shoot();
            isShooting = true;
        }
        else{
            isShooting = false;
        }
        ChangeAimDir();
    }

    private void Shoot(){
        _bulInstance = Instantiate(bullet, _bulOrigin.transform.position, Quaternion.Euler(new Vector3(0, 0, 1))) as Rigidbody2D;
        if (bulDir == "right"){
            _bulInstance.velocity = transform.right * _maxSpd;

        }
        else if (bulDir == "left"){
            _bulInstance.velocity = -transform.right * _maxSpd;
        }
        else{
            _bulInstance.velocity = transform.up * _maxSpd;
        }
        Physics2D.IgnoreCollision(_bulInstance.GetComponent<Collider2D>(), GetComponent<Collider2D>());
    }

    private void ChangeAimDir(){
        if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W) || Input.GetKeyDown(KeyCode.W)){
            _bulOrigin = this.gameObject.transform.GetChild(2);
            bulDir = "up";
        }
        else if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A) || Input.GetKeyDown(KeyCode.A))
        {
            _bulOrigin = this.gameObject.transform.GetChild(1);
            bulDir = "left";
        }
        else if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D) || Input.GetKeyDown(KeyCode.D))
        {
            _bulOrigin = this.gameObject.transform.GetChild(0);
            bulDir = "right";
        }
    }
}
