using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunController : MonoBehaviour {

	public bool isFiring;

	public BulletController bullet;
	public float bulletSpd;
	public float bulletCD;
	public Transform bulletOrigin;

	private float _shotCount;

	private BulletController _newBullet;

	void Update () {

		if (isFiring) {

			_shotCount -= Time.deltaTime;
			if (_shotCount <= 0) {
				_shotCount = bulletCD;
				_newBullet = Instantiate (bullet, bulletOrigin.position, bulletOrigin.rotation) as BulletController;
				_newBullet.speed = bulletSpd;
			}
		}else{
			_shotCount = 0;
		}
	}
}
