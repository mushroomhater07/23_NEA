using System;
using UnityEngine;
using UnityEngine.UI;

public class CharacterDataBase : MonoBehaviour
{
     public characterSpecification[] characters;

     public GameObject GetGameObject(int index)
     {
          return characters[index].actualObject;
     }


}