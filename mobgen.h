struct enemyStats mob1;

void mobtype(int terrain)
{
    
    switch (terrain)
    {
        case 1:
        printf("\nNo island mobs!");
        break;
        
        case 2:
        mobgenmnt(terrain);
        break;
        
        case 3:
        printf("\nNo forest mobs!");
        break;
        
        case 4:
        printf("\nNo plains mobs!");
        break;
        
        case 5:
        printf("\nNo swamp mobs!");
        break;
        
        case 6:
        printf("\nNo desolated plains mobs!");
        break;        
    }
    

}
void mobgenmnt(int terrain)
{
char terraintype[7][50] = {"", "Island", "Mountain", "Forest", "Common", "Swamp", "Cursed"};
int randomize = (rand() % 2+1);
char typem[3][50] = {"Placeholder", "Goblin", "Bandit"};
    switch (terrain)
    {
        case 1:
        printf("\nYou were attacked by ");
        setColor(11);//island
        printf("%s %s", terraintype[terrain], typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        case 2:
        printf("\nYou were attacked by ");
        setColor(12);//mountain
        printf("%s %s", terraintype[terrain], typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        case 3:
        printf("\nYou were attacked by ");
        setColor(10);//forest
        printf("%s %s", terraintype[terrain], typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        case 4:
        printf("\nYou were attacked by ");
        setColor(14);//plains
        printf("%s %s", terraintype[terrain], typem[randomize]);
        resetColor();
        printf("!\n");
        break;        
        
        case 5:
        printf("\nYou were attacked by ");
        setColor(6);//swamp
        printf("%s %s", terraintype[terrain], typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        
        case 6:
        printf("\nYou were attacked by ");
        setColor(8);//desolated plains
        printf("%s %s", terraintype[terrain], typem[randomize]);
        resetColor();
        printf("!\n");
        break;
    }
    int chance = rand() % 100;

    switch (chance)
    {
    case 4:
    printf("Powerful mob!\n");
    getch();
    break;
    
    default:
    mob1.atk = player1.atk*(rand() % 2+1);
    mob1.def = player1.def/2;
    mob1.hp = player1.hp/2;
    }
    
    printf("\n\nAttack: %d\tDefence: %d\tHealth: %d", mob1.atk, mob1.def, mob1.hp);
}