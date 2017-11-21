void load()
    {
    FILE *fptr;
    fptr = fopen("stats.txt", "r");
    if (fptr == NULL)
    {
        setColor(12);
        printf("\nFile read failed!");
        setup();
    }
    else (setColor(10));
    printf("\nFile load successful!");
    getch();
    resetColor();
    fscanf(fptr, "%s %i %i %i %i %i", &player1.atk, &player1.def, &player1.hp, &player1.lvl, &player1.spts);
    fclose(fptr);
    }
    
void save()
    {
    FILE *fps;
    fps = fopen("stats.txt", "wb");
    if (fps == NULL)
    {
        setColor(12);
        printf("\nFile save failed!");
        exit(-1);
    }
    else (setColor(10));
    printf("\nFile save successful!");
    getch();
    resetColor();
    fprintf(fps, "%s %i %i %i %i %i", player1.name, player1.atk, player1.def, player1.hp, player1.lvl, player1.spts);
    fclose(fps);
    }
