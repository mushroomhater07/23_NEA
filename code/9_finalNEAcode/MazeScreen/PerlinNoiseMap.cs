using UnityEngine;

namespace MazeScreen
{
   public class PerlinNoiseMap : MonoBehaviour
        {
            public int width;
            public int height;
            public float scale;
            public float persistence;
            public float lacunarity;
            public int octaves;

            public float[,] noiseMap;

            void Start()
            {
                noiseMap = new float[width, height];
                generatePerlinNoiseMap();
            }

            void generatePerlinNoiseMap()
            {
                for (int x = 0; x < width; x++)
                {
                    for (int y = 0; y < height; y++)
                    {
                        float amplitude = 1;
                        float frequency = 1;
                        float noiseHeight = 0;

                        for (int i = 0; i < octaves; i++)
                        {
                            float xCoord = (float)x / scale * frequency;
                            float yCoord = (float)y / scale * frequency;

                            float perlinValue = Mathf.PerlinNoise(xCoord, yCoord);
                            noiseHeight += perlinValue * amplitude;

                            amplitude *= persistence;
                            frequency *= lacunarity;
                        }

                        noiseMap[x, y] = noiseHeight;
                    }
                }
                
            }
        }
    }
