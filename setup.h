void setup()
{
    struct playerStats player1;
    system("cls");
    printf("Choose a name:\n", saveDefaultColor());
    scanf("%s", &player1.name);
    printf("\n\nOkay, %s, you are granted 20 points to divide between Attack, \nDefence and Health.", player1.name);
    getchar();
    printf("\nLet's start with the Attack stat. How many points into Attack?\n");
    scanf("%i", &player1.atk);
    player1.spts = 20 - player1.atk;
    printf("\nNow for the Defence stat:\n");
    scanf("%i", &player1.def);
    player1.spts = player1.spts - player1.def;
    printf("\nAnd finally, the Health stat:\n");
    scanf("%i", &player1.hp);
    player1.spts = player1.spts - player1.hp;
    if (player1.spts < 0)
    {
        setColor(12);
        printf("\nError! Too many points allocated! Start again!");
        resetColor();
        getch();
        setup();
    }
    if (player1.spts > 0)
    {
        setColor(12);
        printf("\nError! Not all points allocated! Start again!");
        getch();
        resetColor();
        setup();

    }
    
    init();
}
