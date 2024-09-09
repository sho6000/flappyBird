// flappy bird game made by Abdulrehman BEIS-03.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void structure()
{                                                                                    // function for basic structure and runing of pillers
    int i, j, k = 1, a = 30, b = 40, c = 50, tv = 1, cobx = 11, coby = 7, score = 0; // iand j variable for moving curser
                                                                                     //  across all points in screen by using nested for loops, a,b,c
                                                                                     // variables are starting points of three pillers,cobx and y are
                                                                                     // coordinates of birdand score for calculation of score
    int level = score / 10 + 1; // calculate level based on score
    while (tv == 1)                                                                  // tv is not used in whole code and this will make this infinite loop
                                                                                     //  which can only exit with break statement
    {
        Sleep(80 - (score / 10)); // decrease sleep time as score increases     // for adding time delay after iteration
        system("cls"); // for erasing screen for next frame
        if (kbhit())   // for detecting commands from user
        {
            char ch = getch(); // for changing bird position after command
            if (ch == 'w' || ch == ' ')
                coby = coby - 2;
            if (ch == 'a')
                cobx = cobx - 1;
            if (ch == 'd')
                cobx = cobx + 1;
            if (ch == 's')
                coby = coby + 1;
            if (ch == 'p') {
                printf("\nGame Paused. Press 'r' to resume.");
                while (1) {
                    if (kbhit()) {
                        char resume = getch();
                        if (resume == 'r') {
                            printf("\nGame Resumed!\n");
                            break; // exit the pause loop
                        }
                    }
                }
            }

        }
        for (i = 0; i <= 15; i++) // loop for moving in column
        {
            printf("\n");
            for (j = 0; j <= 25; j++) // loop for moving in row
            {                         // conditions for printing pillers aur frame and bird
                if (i == 0 || i == 15 || j == 0 || j == 25)
                    printf("!!");
                else if ((j == a && ((i >= 0 && i <= 2) || (i >= 9 && i <= 15)) || j == b && ((i >= 0 && i <= 5) || (i >= 12 && i <= 15)) || j == c && ((i >= 0 && i <= 7) || (i >= 14 && i <= 15))))
                    printf("||");
                else if (j == cobx && i == coby)
                    printf("O>");
                else
                    printf("  ");
            }
        } // condition when bird clashes with wall or frame
        if (((cobx == a) && ((coby >= 0 && coby <= 2) || (coby >= 9 && coby <= 15))) || ((cobx == b) && ((coby >= 0 && coby <= 5) || (coby >= 12 && coby <= 15))) || ((cobx == c) && ((coby >= 0 && coby <= 7) || (coby >= 14 && coby <= 15))) || coby == 0 || coby == 15)
            break;
        if (k % 2 == 0)
            coby++;
        k++;
        a--;
        b--;
        c--;
        if (a == cobx - 1 || b == cobx - 1 || c == cobx - 1) // if statement for calculating score
            score++;
        if (a == 1) // rearranging the walls after moving to first row
            a = 30; // and repeating the process for illusion of consistantly coming pillers
        if (b == 1)
            b = 30;
        if (c == 1)
            c = 30;
        printf("\n\nScore is %d | Level: %d", score, level);
    }
    printf("\n\nFinal score is %d & level is %d\n", score, level);
    printf("run flappybird.exe to play again");

}
void main()
{
    printf("Hi! \n This is the flappy bird game.\n you have to pass through the spaces \n between the tunnels\n\n Press space for flying\n GOOD LUCK!!!");
    system("pause");
    structure();
}