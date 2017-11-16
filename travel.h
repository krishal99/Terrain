void travel(int choice)
{
    switch (choice)
    {
        case 1:
        printf("\nYou choose to travel to ");
        setColor(11);
        printf("Island.\n\n");
        resetColor();
        break;
        
        case 2:
        printf("\nYou choose to travel to ");
        setColor(12);
        printf("Mountain.\n\n");
        resetColor();
        break;
        
        case 3:
        printf("\nYou choose to travel to ");
        setColor(10);
        printf("Forest.\n\n");
        resetColor();
        break;
        
        case 4:
        printf("\nYou choose to travel to ");
        setColor(14);
        printf("Plains\n\n");
        resetColor();  
        break;
        
        case 5:
        printf("\nYou choose to travel to ");
        setColor(6);
        printf("Swamp.\n\n");
        resetColor();
        break;
        
        case 6:
        printf("\nYou choose to travel to ");
        setColor(8);
        printf("Something.\n\n");
        resetColor();        break;
        
        default:
        printf("\n Not recognised");
        break;
    }
    getch();
    main();
}
