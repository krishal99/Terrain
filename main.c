#include <stdio.h>
#include <stdlib.h>
#include "rlutil.h"
#include "terrain.h"
#include "travel.h"

void terrainDraw(int terrain[9]);
void terrainGenerate(int terrain[9]);

void main()
{
    printf("Choose Terrain.\n\n", saveDefaultColor());//will be intro maybe, for now just to get colour
    
    time_t t;
    srand(time(NULL));//initialise the pathetic generator, I'll make something better maybe some time

    int terrain[9];
    terrainGenerate(terrain);//generates the type of terrain in an array
    terrainDraw(terrain);//draws the terrain on a 3x3 grid
    int choice;
    printf("\n\n");
    scanf("\n%i", &choice);
    travel(terrain[choice-1]);//to the identifier function
}
