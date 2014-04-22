#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    char zero[100]= "bogland";
    char one[100]= "field";
    char two[100]= "forest";
    char three[100]= "mountains";
    char four[100]= "boss room";
    int topleft= rand() % 4;
    int topmid= rand() % 4;
    int topright= rand() % 4;
    int midleft= rand() % 4;
    int midright= rand() % 4;
    int bottomleft= rand() % 4;
    int bottommid= rand() % 4;
    int bottomright= rand() % 4;
    int choice;
    char jdn[100]= "1";
    char dw[100]="2";
    char trzy[100]="3";
    char cztry[100]="4";
    char szsc[100]="6";
    char sdm[100]="7";
    char osm[100]="8";
    char dzwc[100]="9";

     HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  WORD wOldColorAttrs;
  CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
  GetConsoleScreenBufferInfo(h, &csbiInfo);
  wOldColorAttrs = csbiInfo.wAttributes;

  printf("\n///////////////////////////\n");

   if (topleft== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", jdn);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (topleft== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", jdn);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (topleft== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", jdn);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (topleft== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", jdn);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (topleft== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", jdn);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (topmid== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", dw);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (topmid== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", dw);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (topmid== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", dw);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (topmid== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", dw);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (topmid== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", dw);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

        if (topright== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", trzy);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (topright== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", trzy);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (topright== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", trzy);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (topright== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", trzy);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (topright== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", trzy);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }
    printf("\n\n");
            if (midleft== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("\n      %s", cztry);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (midleft== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", cztry);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (midleft== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", cztry);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (midleft== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", cztry);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (midleft== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", cztry);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }
    printf("      O");

                if (midright== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", szsc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (midright== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", szsc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (midright== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", szsc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (midright== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", szsc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (midright== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", szsc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    printf("\n\n");

                    if (bottomleft== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", sdm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (bottomleft== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", sdm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (bottomleft== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", sdm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (bottomleft== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", sdm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (bottomleft== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", sdm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

                        if (bottommid== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", osm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (bottommid== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", osm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (bottommid== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", osm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (bottommid== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", osm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (bottommid== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", osm);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

                            if (bottomright== 0)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", dzwc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (bottomright== 1)
    {
         SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", dzwc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (bottomright== 2)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", dzwc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);

    }

    if (bottomright== 3)
    {
        SetConsoleTextAttribute ( h,FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
         printf("      %s", dzwc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }

    if (bottomright== 4)
    {
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
         printf("      %s", dzwc);
         SetConsoleTextAttribute ( h, wOldColorAttrs);
    }
    printf("\n///////////////////////////");
    printf("\n\n");






    scanf("%d",&choice);

    if (choice== 1)
    {
        printf("\n" );


        if (topleft== 0)
    {
        printf("You went north-west. Your terrain is %s\n\n",zero);
    }
     if (topleft== 1)
    {
        printf("You went north-west. Your terrain is %s\n\n",one);
    }
     if (topleft== 2)
    {
        printf("You went north-west. Your terrain is %s\n\n",two);
    }
     if (topleft== 3)
    {
        printf("You went north-west. Your terrain is %s\n\n",three);
    }
     if (topleft== 4)
    {
        printf("You went north-west. Your terrain is %s\n\n",four);
    }
    }




    if (choice== 2)
    {
        printf("\n" );


        if (topmid== 0)
    {
        printf("You went north. Your terrain is %s\n\n",zero);
    }
     if (topmid== 1)
    {
        printf("You went north. Your terrain is %s\n\n",one);
    }
     if (topmid== 2)
    {
        printf("You went north. Your terrain is %s\n\n",two);
    }
     if (topmid== 3)
    {
        printf("You went north. Your terrain is %s\n\n",three);
    }
     if (topleft== 4)
    {
        printf("You went north. Your terrain is %s\n\n",four);
    }
    }



        if (choice== 3)
    {
        printf("\n" );


        if (topright== 0)
    {
        printf("You went north-east. Your terrain is %s\n\n",zero);
    }
     if (topright== 1)
    {
        printf("You went north-east. Your terrain is %s\n\n",one);
    }
     if (topright== 2)
    {
        printf("You went north-east. Your terrain is %s\n\n",two);
    }
     if (topright== 3)
    {
        printf("You went north-east. Your terrain is %s\n\n",three);
    }
     if (topright== 4)
    {
        printf("You went north-east. Your terrain is %s\n\n",four);
    }
    }



            if (choice== 4)
    {
        printf("\n" );


        if (midleft== 0)
    {
        printf("You went west. Your terrain is %s\n\n",zero);
    }
     if (midleft== 1)
    {
        printf("You went west. Your terrain is %s\n\n",one);
    }
     if (midleft== 2)
    {
        printf("You went west. Your terrain is %s\n\n",two);
    }
     if (midleft== 3)
    {
        printf("You went west. Your terrain is %s\n\n",three);
    }
     if (midleft== 4)
    {
        printf("You went west. Your terrain is %s\n\n",four);
    }
    }


                if (choice== 6)
    {
        printf("\n" );


        if (midright== 0)
    {
        printf("You went east. Your terrain is %s\n\n",zero);
    }
     if (midright== 1)
    {
        printf("You went east. Your terrain is %s\n\n",one);
    }
     if (midright== 2)
    {
        printf("You went east. Your terrain is %s\n\n",two);
    }
     if (midright== 3)
    {
        printf("You went east. Your terrain is %s\n\n",three);
    }
     if (midright== 4)
    {
        printf("You went east. Your terrain is %s\n\n",four);
    }
    }

                    if (choice== 7)
    {
        printf("\n" );


        if (bottomleft== 0)
    {
        printf("You went south-west. Your terrain is %s\n\n",zero);
    }
     if (bottomleft== 1)
    {
        printf("You went south-west. Your terrain is %s\n\n",one);
    }
     if (bottomleft== 2)
    {
        printf("You went south-west. Your terrain is %s\n\n",two);
    }
     if (bottomleft== 3)
    {
        printf("You went south-west. Your terrain is %s\n\n",three);
    }
     if (bottomleft== 4)
    {
        printf("You went south-west. Your terrain is %s\n\n",four);
    }
    }

                        if (choice== 8)
    {
        printf("\n" );


        if (bottommid== 0)
    {
        printf("You went south. Your terrain is %s\n\n",zero);
    }
     if (bottommid== 1)
    {
        printf("You went south. Your terrain is %s\n\n",one);
    }
     if (bottommid== 2)
    {
        printf("You went south. Your terrain is %s\n\n",two);
    }
     if (bottommid== 3)
    {
        printf("You went south. Your terrain is %s\n\n",three);
    }
     if (bottommid== 4)
    {
        printf("You went south. Your terrain is %s\n\n",four);
    }
    }


                        if (choice== 9)
    {
        printf("\n" );


        if (bottomright== 0)
    {
        printf("You went south-east. Your terrain is %s\n\n",zero);
    }
     if (bottomright== 1)
    {
        printf("You went south-east. Your terrain is %s\n\n",one);
    }
     if (bottomright== 2)
    {
        printf("You went south-east. Your terrain is %s\n\n",two);
    }
     if (bottomright== 3)
    {
        printf("You went south-east. Your terrain is %s\n\n",three);
    }
     if (bottomright== 4)
    {
        printf("You went south-east. Your terrain is %s\n\n",four);
    }
    }

    if (choice == 5)
    {
        printf("\nYou decide not to move.\n\n");
    }






main();

}
