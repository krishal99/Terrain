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
        mobgenmnt(terrain);
        break;
        
        case 4:
        printf("\nNo plains mobs!");
        break;
        
        case 5:
        mobgenmnt(terrain);
        break;
        
        case 6:
        bossgen();
        break;        
    }
    

}
void mobgenmnt(int terrain)
{
char terraintype[7][50] = {"", "Island", "Mountain", "Forest", "Common", "Swamp", "Cursed"};
int randomize = (rand() % 4+1);
char typem[5][50] = {"", "Goblin", "Bandit", "Spider", "Marauder"};
    switch (terrain) 
    {
        case 1:
        printf("\nYou were attacked by ");
        setColor(11);//island
        printf("%s %s", terraintype[terrain], typem[randomize]);
        strcpy(mob1.tname, terraintype[terrain]);
        strcpy(mob1.ename, typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        case 2:
        printf("\nYou were attacked by ");
        setColor(12);//mountain
        printf("%s %s", terraintype[terrain], typem[randomize]);
        strcpy(mob1.tname, terraintype[terrain]);
        strcpy(mob1.ename, typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        case 3:
        printf("\nYou were attacked by ");
        setColor(10);//forest
        printf("%s %s", terraintype[terrain], typem[randomize]);
        strcpy(mob1.tname, terraintype[terrain]);
        strcpy(mob1.ename, typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        case 4:
        printf("\nYou were attacked by ");
        setColor(14);//plains
        printf("%s %s", terraintype[terrain], typem[randomize]);
        strcpy(mob1.tname, terraintype[terrain]);
        strcpy(mob1.ename, typem[randomize]);
        resetColor();
        printf("!\n");
        break;        
        
        case 5:
        printf("\nYou were attacked by ");
        setColor(6);//swamp
        printf("%s %s", terraintype[terrain], typem[randomize]);
        strcpy(mob1.tname, terraintype[terrain]);
        strcpy(mob1.ename, typem[randomize]);
        resetColor();
        printf("!\n");
        break;
        
        
        case 6:
        printf("\nYou were attacked by ");
        setColor(8);//desolated plains
        printf("%s %s", terraintype[terrain], typem[randomize]);
        strcpy(mob1.tname, terraintype[terrain]);
        strcpy(mob1.ename, typem[randomize]);
        resetColor();
        printf("!\n");
        break;
    }
    int chance = rand() % 10;

    switch (chance)
    {
    case 4:
    setColor(12);
    printf("Powerful mob!\n");
    resetColor();
    mob1.atk = player1.atk*(rand() % 2+1);
    mob1.def = player1.def/2;
    mob1.hp = player1.hp/2;
    getch();
    break;
    
    default:
    printf("Common mob!\n");
    mob1.atk = rand() % player1.atk+2;
    mob1.def = 0;
    mob1.hp = rand() % 20+5;
    getch();
    break;
    }
    
    printf("\nAttack: %d\tDefence: %d\tHealth: %d", mob1.atk, mob1.def, mob1.hp);
    printf("\nDo you engage (y or n) ");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y')
    {
        cls();
        getch();
        battlemenu();
        
    }
    
}
bossgen()
{
    char miniboss[4][100] = {"Shrek", "Jeff", "Rick", "Jason"};
    int random =rand() % 20;
    
    switch (random)
    {
        case 5:
        mob1.atk = 30;
        mob1.def = 7;
        strcpy(mob1.tname, "Boss");
        strcpy(mob1.ename, miniboss[random]);
        mob1.hp = 25;
        cls();
        printf("Boss %s appears! His stats are:\n", miniboss[1]);
        printf("Attack: %i\tDefence: %i\tHealth: %i", mob1.atk, mob1.def, mob1.hp);
        battlemenu();
        break;
        
        case 7:
        mob1.atk = 16;
        mob1.def = 10;
        strcpy(mob1.tname, "Boss");
        strcpy(mob1.ename, miniboss[2]);
        mob1.hp = 40;
        cls();
        printf("Boss %s appears! His stats are:\n\n", miniboss[2]);
        printf("Attack: %i\tDefence: %i\tHealth: %i\n", mob1.atk, mob1.def, mob1.hp);
        battlemenu();
        break;
        
        case 13:
        mob1.atk = 25;
        mob1.def = 0;
        strcpy(mob1.tname, "Boss");
        strcpy(mob1.ename, miniboss[3]);
        mob1.hp = 30;
        cls();
        printf("Boss %s appears! His stats are:\n\n", miniboss[3]);
        printf("Attack: %i\tDefence: %i\tHealth: %i\n", mob1.atk, mob1.def, mob1.hp);
        battlemenu();
        break;
        
        default:
        printf("\nYou travel the wasteland uninterruted.");
        break;
        
    }
}
