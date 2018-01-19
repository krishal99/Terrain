void load()
    {
    FILE *fptr;
    fptr = fopen("stats.txt", "r");
    if (fptr == NULL)
    {
        setColor(12);
        printf("\nFile read failed!\n");
        resetColor();
        setup();
    }
    else (setColor(10));
    printf("\nFile load successful!");
    getch();
    resetColor();
    fscanf(fptr, "%s %i %i %i %i %i %i", &player1.name, &player1.atk, &player1.def, &player1.hp, &player1.lvl, &player1.spts, &player1.xp);
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
    //printf("\nFile save successful!");
    //getch();
    resetColor();
    fprintf(fps, "%s %i %i %i %i %i %i", player1.name, player1.atk, player1.def, player1.hp, player1.lvl, player1.spts, player1.xp);
    fclose(fps);
    }

void savedel()
{
    int ret;
    char filename[] = "stats.txt";
    
    ret = remove(filename);
    
    if (ret == 0)
    {
        printf("\nSave Deleted.\n\n");
        resetColor();
    }
    else
    {
        printf("\nDelete Failed.");
    }
    exit(0);
}


