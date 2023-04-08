using UnityEngine;

public class Quality : MonoBehaviour
{
    private Vector2 buttonSize = new Vector2(200f, 50f);

    private void OnGUI()
    {
        string[] names = QualitySettings.names;
        GUILayout.BeginVertical();
        for (int i = 0; i < names.Length; i++)
        {
            if (GUILayout.Button(names[i], GUILayout.Width(buttonSize.x), GUILayout.Height(buttonSize.y)))
            {
                QualitySettings.SetQualityLevel(i, true);
            }
        }
        GUILayout.EndVertical();
    }
}
