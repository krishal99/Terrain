void eventgen(int choice)
{
    int event = rand() % 100;
    int twn = rand() % 10;
    char town[10][100] = {"Scream", "Tatter", "Terry", "Dumblin", "Tree", "Pigmen", "Woop", "Hippie", "AAAAAAAA", "Lavender"};
    char city[10][100] = {"Scream", "Tatter", "Terry", "Dumblin", "Tree", "Pigmen", "Woop", "Hippie", "AAAAAAAA", "Lavender"};
    
    switch (event)//switch which decides event
    {
        case 2:
        printf("\nYou find %s town!", town[twn]);
        break;
        
        case 12:
        printf("\nYou find %s town!", town[twn]);
        break;
        
        case 27:
        printf("\nYou find %s town!", town[twn]);
        break;
        
        case 43:
        printf("\nYou find %s town!", town[twn]);
        break;
        
        case 4:
        printf("\nYou find %s City!", city[twn]);
        break;
        
        default:
        mobtype(choice);
        break;

    }
    getch();
    init();
    
    
}
