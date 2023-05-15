using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;

public class Maze : MonoBehaviour
{
	private int _sizeX;
	private int _sizeZ;
	private Mazecell _cellPrefab;
	private Mazecell[,] cells; //need to access by others
    private List<String> walls;
	private WallCell _wallPrefab;
	// public float generationStepDelay = 0;
	public int sizeX
    {
        get => _sizeX;
        set => _sizeX = value;
    }
	public int sizeZ
    {
        get => _sizeZ;
        set => _sizeZ = value;
    }
    public Mazecell cellPrefab
    {
	    get => _cellPrefab;
	    set => _cellPrefab = value;
    }
	public WallCell wallPrefab
    {
	    get => _wallPrefab;
	    set => _wallPrefab = value;
    }
	
	public void Generate () {
		// WaitForSeconds delay = new WaitForSeconds(generationStepDelay);
		walls = new List<String>();
		cells = new Mazecell[_sizeX, _sizeZ];
		for (int x = 0; x < _sizeX; x++) {
			for (int z = 0; z < _sizeZ; z++) {
				// yield return delay;
				CreateCell(x, z);
			}
		}
		MazeGeneration gen = new MazeGeneration(cells, walls);
	}

	private void CreateCell (int x, int z) {
		Mazecell newCell = Instantiate(_cellPrefab) as Mazecell;
		cells[x, z] = newCell;
		newCell.name = String.Format("Cell {0}-{1}" ,x,z);
		newCell.transform.parent = transform;
		Vector3 scale =  newCell.transform.localScale;
		// newCell.transform.localPosition = new Vector3(x*scale.x - _sizeX * 0.5f *scale.x + scale.x/2, 0f, z*scale.z - _sizeZ * 0.5f*scale.z + scale.z/2);
		newCell.transform.localPosition = new Vector3(x*scale.x + 0.5f *scale.x , 0f, z*scale.z + 0.5f*scale.z);
		if(z==0)newCell.dir.Remove("left");
		if(x==0)newCell.dir.Remove("up");
		if(z==_sizeX-1)newCell.dir.Remove("right");
		if(x==_sizeZ-1)newCell.dir.Remove("down");

		if(x != _sizeX -1){
		WallCell newWall = Instantiate(_wallPrefab) as WallCell;
		newWall.name = String.Format("Wall {0}-{1}-H" ,x,z);
		newWall.transform.parent = transform;
		newWall.transform.localPosition = new Vector3(x*scale.x+ scale.x, 0.5f,z*scale.z  + scale.z/2);
		walls.Add(newWall.name);
		}
		if(z != _sizeZ -1){
		WallCell newWall1 = Instantiate(_wallPrefab) as WallCell;
		newWall1.name = String.Format("Wall {0}-{1}-V" ,x,z);
		newWall1.transform.parent = transform;
		newWall1.transform.localRotation = Quaternion.Euler( new Vector3(90,0,0));
		newWall1.transform.localPosition = new Vector3(x*scale.x + scale.x/2, 0.5f, z*scale.z + scale.z);
		walls.Add(newWall1.name);
		}
	}
}
