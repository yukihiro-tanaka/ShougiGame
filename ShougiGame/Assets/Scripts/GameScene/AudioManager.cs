using System.Collections;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    [SerializeField] private AudioSource m_select;
    [SerializeField] private AudioSource m_promote;

    public void playSelect()
    {
        m_select.Play();
    }

    public void playPromote()
    {
        m_promote.Play();
    }
}
