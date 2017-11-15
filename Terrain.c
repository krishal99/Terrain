#include <stdio.h>
#include <stdlib.h>
#include "rlutil.h"

void terrainDraw(int terrain[9]);
void terrainGenerate(int terrain[9]);

void main()
{
    system("cls");
    printf("This for the sake of saving the default colour.\n\n", saveDefaultColor());
    
    time_t t;
    srand((unsigned) time(&t));

    int terrain[9];
    terrainGenerate(terrain);
    terrainDraw(terrain);
    getchar();
    main();
}

void terrainGenerate(int terrain[9])
{    
    for (int i=0; i <= 9; i++)
    {
        terrain[i]= (rand() % 6)+1;
    }
}

void terrainDraw(int terrain[9])
{
    for (int i=0; i < 3; i++)
    {
        colorDecide(terrain[i]);
        printf("%i\t", i+1);
    }
    printf("\n\n");
    for (int i=3; i < 6; i++)
    {
        colorDecide(terrain[i]);
        printf("%i\t", i+1);
    }
    printf("\n\n");
    for (int i=6; i < 9; i++)
    {
        colorDecide(terrain[i]);
        printf("%i\t", i+1);
    }
    printf("\n\n");
    resetColor();
}

void colorDecide(colour)
{
    switch (colour)
    {
        case 1:
        setColor(1);//island
        break;
        
        case 2:
        setColor(4);//mountains
        break;
        
        case 3:
        setColor(2);//forest
        break;
        
        case 4:
        setColor(7);//plains
        break;
        
        case 5:
        setColor(6);//swamp
        break;
        
        case 6:
        setColor(8);//fuck knows
        break;
    }
}
