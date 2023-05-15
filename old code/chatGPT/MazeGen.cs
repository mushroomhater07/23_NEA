using UnityEngine;

public class MazeGenerator : MonoBehaviour {
    // grid size
    public int sizeX, sizeZ;
    // prefab of the cube
    public GameObject cube;
    // 2D array to represent the state of each cell
    private int[,] grid;

    void Start() {
        grid = new int[sizeX, sizeZ];
        // initialize all cells as unvisited
        for (int x = 0; x < sizeX; x++) {
            for (int z = 0; z < sizeZ; z++) {
                grid[x, z] = 0;
            }
        }
        // choose a random starting point
        int startX = Random.Range(0, sizeX);
        int startZ = Random.Range(0, sizeZ);
        DFS(startX, startZ);
        // instantiate the cubes
        for (int x = 0; x < sizeX; x++) {
            for (int z = 0; z < sizeZ; z++) {
                if (grid[x, z] == 0) {
                    Instantiate(cube, new Vector3(x, 0, z), Quaternion.identity);
                }
            }
        }
    }

    void DFS(int x, int z) {
        // mark the current cell as visited
        grid[x, z] = 1;
        // create a list of neighboring cells
        int[] neighborsX = { 1, -1, 0, 0 };
        int[] neighborsZ = { 0, 0, 1, -1 };
        // shuffle the order of the neighboring cells
        Shuffle(neighborsX);
        Shuffle(neighborsZ);
        // visit each unvisited neighboring cell
        for (int i = 0; i < 4; i++) {
            int nextX = x + neighborsX[i];
            int nextZ = z + neighborsZ[i];
            if (nextX >= 0 && nextX < sizeX && nextZ >= 0 && nextZ < sizeZ && grid[nextX, nextZ] == 0) {
                DFS(nextX, nextZ);
            }
        }
    }

    // function to shuffle the array
    void Shuffle(int[] array) {
        for (int i = 0; i <
