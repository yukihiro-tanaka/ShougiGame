using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ToTitleButton : MonoBehaviour
{
    public void onClick() {
        SceneManager.LoadScene("TitleScene");
    }
}
