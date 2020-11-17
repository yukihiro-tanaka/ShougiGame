
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using Hashtable = ExitGames.Client.Photon.Hashtable;

public class LoginManager : MonoBehaviourPunCallbacks {
    [SerializeField] private GameObject m_gameManagerPrefab;
    [SerializeField] private GameObject m_playerPrefab;

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
        Player player = Instantiate(m_playerPrefab, new Vector3(0,0,0), Quaternion.identity).GetComponent<Player>();
        if (PhotonNetwork.IsMasterClient) {
            PhotonNetwork.Instantiate(m_gameManagerPrefab.name, new Vector3(0,0,0), Quaternion.identity);
            var hashtable = new Hashtable();
            hashtable["PlayerOne"] = player;
            PhotonNetwork.LocalPlayer.SetCustomProperties(hashtable);
        } else {
            
        }
    }
}