void battlemenu()
{
    int php = player1.hp;
    int ehp = mob1.hp;

    int pchance = rand() % 10;
    int echance = rand() % 10;
    
    if (pchance >= echance)
    {
        patk(php, ehp);
        
    }
    if (echance > pchance)
    {
        matk(php, ehp);
    }
    
}
void patk(php, ehp)
{
    int damage = player1.atk - mob1.def;
    ehp = ehp - damage;
    
    printf("\n%s does %i damage to %s %s! Enemy has %i health left!\n", player1.name, damage, mob1.tname, mob1.ename, ehp);
    if (ehp > 0)
    {
        matk(php, ehp);
    }
    if (ehp <= 0)
    {
        setColor(10);
        printf("\n\nMob Defeated!");
        resetColor();
        int xpearn = mob1.atk+mob1.def+mob1.hp;
        playerlevel(xpearn);
        
        return;
    }
}

void matk(php, ehp)
{
    int damage = mob1.atk - player1.def;
    if (player1.def >= mob1.atk)
    {
        damage = 0;
    }
    php = php - damage;
    
    printf("\n%s %s does %i damage to %s! You have %i health left!\n", mob1.tname, mob1.ename, damage, player1.name, php);
    if (php > 0)
    {
        patk(php, ehp);
    }
    if (php <= 9)
    {
        setColor(12);
        printf("\n\nYou Died.");
        savedel();
        resetColor();
    }
}

void playerlevel(xpearn)
{
    player1.xp = player1.xp + xpearn;
    printf("\n%s earned %i XP!", player1.name, xpearn);
    printf("\nTotal XP is %i.", player1.xp);
    save();
    if (player1.xp >= 100)
    {
        player1.lvl++;
        printf("\nLevel Up! Player level is now %i.", player1.lvl);
        player1.xp = player1.xp - 100;
        statup();
    }
    
}
void statup()
{
    int stat = rand() % 3+1;
    switch (stat)
    {
        case 1:
        player1.atk++;
        printf("\nAttack Stat increased! Attack now %i!", player1.atk);
        break;
        
        case 2:
        player1.def++;
        printf("\nDefence Stat increased! Defence now %i!", player1.def);
        break;
        
        case 3:
        player1.hp = player1.hp +5;
        printf("\nHealth Stat increased! HP now %i!", player1.hp);
    }
    save();
}
