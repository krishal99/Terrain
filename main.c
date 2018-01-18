#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rlutil.h"
#include "terrain.h"
#include "travel.h"
#include "stats.h"
#include "setup.h"
#include "eventgen.h"
#include "saveload.h"
#include "mobgen.h"
#include "combat.h"      
void init();
void save();
void load();
void setup();
void setup2();
void terrainDraw(int terrain[9]);
void terrainGenerate(int terrain[9]);
void eventgen(int choice);
void mobtype(int terrain);
void mobgenmnt(int terrain);

void main()
{
    setup();
}
void init()
{
    printf("Choose Terrain.\n\n");//will be intro maybe, for now just to get colour
    
    time_t t;
    srand(time(NULL));//initialise the pathetic generator, I'll make something better maybe some time

    int terrain[9];
    terrainGenerate(terrain);//generates the type of terrain in an array
    terrainDraw(terrain);//draws the terrain on a 3x3 grid
    int choice;
    printf("\n\n");
    scanf("\n%i", &choice);
    //mobgenhere
    //mobtype(terrain[choice-1]);
    travel(terrain[choice-1]);//to the identifier function
}

