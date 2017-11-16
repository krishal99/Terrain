void terrainGenerate(int terrain[9])
{    
    for (int i=0; i <= 9; i++)
    {
        terrain[i]= (rand() % 6)+1;
    }//generates a number between 1-6 for every element of the array
}

void terrainDraw(int terrain[9])
{
    system("cls");
    printf("Choose Terrain.\n\n", saveDefaultColor());//will be intro maybe, for now just to get colour
    for (int i=0; i < 3; i++)   
    {
        colorDecide(terrain[i]);
        printf("%i\t", i+1);
    }//doing printing row by row
    printf("\n\n");
    for (int i=3; i < 6; i++)
    {
        colorDecide(terrain[i]);
        printf("%i\t", i+1);
    }//doing printing row by row
    printf("\n\n");
    for (int i=6; i < 9; i++)
    {
        colorDecide(terrain[i]);
        printf("%i\t", i+1);
    }//doing printing row by row
    printf("\n\n");
    resetColor();//resets the colour
}

void colorDecide(colour)//pretty self explanatory
{
    switch (colour)
    {
        case 1:
        setColor(11);//island
        break;
        
        case 2:
        setColor(12);//mountains
        break;
        
        case 3:
        setColor(10);//forest
        break;
        
        case 4:
        setColor(14);//plains
        break;
        
        case 5:
        setColor(6);//swamp
        break;
        
        case 6:
        setColor(8);//fuck knows
        break;
    }
}
