using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunController : MonoBehaviour {

	public BulletController bullet;
	public PlayerMovement playermove;
	public float bulletSpd;
	public float bulletCD;
	public Transform bulletOrigin;

	private float _shotCount;

	private BulletController _newBullet;

	void Update () {
		if (Input.GetButtonDown("Fire1")) {
			isFiring ();
		}
	}

	public void isFiring(){ 
		_shotCount -= Time.deltaTime;
		if (_shotCount <= 0) {
			_shotCount = bulletCD;
			if (playermove.moveDir == "right") {
				_newBullet = Instantiate (bullet, bulletOrigin.position, bulletOrigin.rotation) as BulletController;
				_newBullet.speed = bulletSpd;
			}else{	
				_newBullet = Instantiate (bullet, bulletOrigin.position, bulletOrigin.rotation) as BulletController;
				_newBullet.speed = -bulletSpd;
			}

			Physics2D.IgnoreCollision(bullet.GetComponent<Collider2D>(), this.GetComponent<Collider2D>()); 
		} else { 
			_shotCount = 0;
		}
	}
}
