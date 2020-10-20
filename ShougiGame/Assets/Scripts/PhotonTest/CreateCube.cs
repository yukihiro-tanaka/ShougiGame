using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class CreateCube : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Vector3 temp = new Vector3(0, 0, 0);
        GameObject cardCopy = (GameObject)PhotonNetwork.Instantiate("Cube", temp, Quaternion.identity, 0);
    }
}
