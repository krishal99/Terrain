struct playerStats player1;
void setup()
{
    int choice;
    printf("Would you like to load a previous save (y or n)?\n", saveDefaultColor());
    scanf("%c", &choice);
    if (choice== 'y')
    {
        load();
        init();
    }
    system("cls");
    printf("Choose a name:\n");
    scanf("%s", &player1.name);
    setup2();
}
void setup2()
{
    int choice;
    system("cls");
    printf("Okay, %s, you are granted 20 points to divide between Attack, \nDefence and Health.", player1.name);
    printf("\n\nLet's start with the Attack stat. How many points into Attack?\n");
    scanf("%i", &player1.atk);
    player1.spts = 20 - player1.atk;
    printf("\nYou have ");
    setColor(14);
    printf("%i",player1.spts);
    resetColor();
    printf(" points left.\n\nNow for the Defence stat:\n");
    scanf("%i", &player1.def);
    player1.spts = player1.spts - player1.def;
    printf("\nYou have ");
    setColor(14);
    printf("%i", player1.spts);
    resetColor();
    printf(" points left. \nLastly, the HP stat:\n");
    scanf("%i", &player1.hp);
    player1.spts = player1.spts - player1.hp;
    if (player1.spts < 0)
    {
        setColor(12);
        printf("\nError! Too many points allocated! Start again!");
        resetColor();
        getch();
        setup2();
    }
    if (player1.spts > 0)
    {
        setColor(12);
        printf("\nError! Not all points allocated! Start again!");
        getch();
        resetColor();
        setup2();
    }
    setColor(12);
    printf("\nWould you like to save your stats?(y or n)?\n");
    resetColor();
    scanf(" %c", &choice);
    if (choice == 'y')
    {
        save();
        init();
    }
    init();
    
}
