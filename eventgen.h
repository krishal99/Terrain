void eventgen()
{
    int event = rand() % 10;
    int twn = rand() % 10;
    char town[10][100] = {"Scream", "Tatter", "Terry", "Dumblin", "Tree", "Pigmen", "Woop", "Hippie", "AAAAAAAA", "Lavender"};
    
    switch (event)
    {
        case 2:
        printf("\nYou find %s town!", town[twn]);
        break;
        
        default:
        printf("\nYou find nothing.");
        break;

    }
    getch();
    init();
    
    
}
