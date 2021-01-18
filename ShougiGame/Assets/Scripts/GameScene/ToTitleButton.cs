using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon.Realtime;

public class ToTitleButton : MonoBehaviourPunCallbacks
{
    public void onClick() {
        PhotonNetwork.LeaveRoom();
    }

    public override void OnLeftRoom() {
        PhotonNetwork.Disconnect();
    }

    public override void OnDisconnected(DisconnectCause cause) {
        SceneManager.LoadScene("TitleScene");
    }
}
