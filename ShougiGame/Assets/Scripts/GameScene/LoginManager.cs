
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class LoginManager : MonoBehaviourPunCallbacks {

    
    public GameObject m_player;
    public Vector3 m_playerInitPosition;
    public Vector3 m_playerInitRotation;

    private void Start() {
        Login();
    }

    public void Login() {
        PhotonNetwork.GameVersion = "1.0";
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster() {
        PhotonNetwork.JoinOrCreateRoom("MainRoom", new RoomOptions(), TypedLobby.Default);
    }

    public override void OnJoinedRoom() {
        PhotonNetwork.Instantiate(m_player.name, m_playerInitPosition, Quaternion.Euler(m_playerInitRotation));
    }
}