using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectPromotionCanvas : MonoBehaviour
{
    public void initialize(GameManager gameManager)
    {
        YesButton yesButton = transform.Find("YesButton").GetComponent<YesButton>();
        NoButton noButton = transform.Find("NoButton").GetComponent<NoButton>();
        yesButton.initialize(gameManager);
        noButton.initialize(gameManager);
    }
}
