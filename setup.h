struct playerStats player1;
void setup()
{
    char choice;
    printf("Would you like to load a previous save (y or n)?\n", saveDefaultColor());//saves default color white
    scanf(" %c", &choice);
    if (choice== 'y')
    {
        load();
        init();
    }
    cls();
    printf("Choose a name:\n");
    scanf("%s", &player1.name);
    setup2();
}
void setup2()
{
    int atk, def, hp;
    player1.lvl = 1;
    char choice;
    cls();
    printf("Okay, %s, you are granted ", player1.name);
    setColor(14);
    printf("10");
    resetColor();
    printf(" points to divide between Attack, \nDefence and Health.");
    printf("\n\nLet's start with the Attack stat. How many points into Attack?\n");
    scanf("%i", &atk);
    player1.atk = 10 + (2*atk);
    player1.spts = 10 - atk;
    printf("\nYou have ");
    setColor(14);
    printf("%i",player1.spts);
    resetColor();
    printf(" points left.\n\nNow for the Defence stat:\n");
    scanf("%i", &def);
    player1.def = 5 + (2*def);
    player1.spts = player1.spts - def;
    printf("\nYou have ");
    setColor(14);
    printf("%i", player1.spts);
    resetColor();
    printf(" points left. \nLastly, the HP stat:\n");
    scanf("%i", &hp);
    player1.hp = 20 + (5*hp);
    player1.spts = player1.spts - hp;
    printf("\nYour stats are as follows:\nATK:\t%i\nDEF:\t%i\nHP:\t%i\n\n", player1.atk, player1.def, player1.hp);
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
