
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class LoginManager : MonoBehaviourPunCallbacks {
    [SerializeField] private GameObject m_gameManagerPrefab;

    private void Start() {
        Login();
    }

    public void Login() {
        PhotonNetwork.GameVersion = "1.0";
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster() {
        RoomOptions RoomOPS = new RoomOptions()
        {
            MaxPlayers = 2,
            IsOpen = true
        };
        PhotonNetwork.JoinOrCreateRoom("MainRoom", RoomOPS, TypedLobby.Default);
    }

    public override void OnJoinedRoom() {
        if (!PhotonNetwork.IsMasterClient) {
            var objGameManager = PhotonNetwork.Instantiate(m_gameManagerPrefab.name, new Vector3(0,0,0), Quaternion.identity);
            var gameManager = objGameManager.GetComponent<GameManager>();
            objGameManager.GetComponent<PhotonView>().RPC("GameStart", RpcTarget.All);
        }
    }
}