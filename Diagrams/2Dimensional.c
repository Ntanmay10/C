#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    // Example 1: print a 5*5 matrix of * both the loop will be ascending loop
    /*
    int i, j; // Here i wil represent the rows and j will represent the columns
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    */

    // Example 2:print a 5*5 matrix of * the external loop will be ascending while the internal will be descending
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    */

    // Example 3: print a 5*5 matrix of * both of the loops will be descending loop
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    */

    // Example 4: Print 1 to 5 in a 5*5 matrix
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */

    // Example 5: Print 5 to 1 in a 5*5 matrix
    /*
        int i, j;
        system("cls");

        for (i = 1; i <= 5; i++)
        {
            for (j = 5; j >= 1; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    */

    // Example 5: Print 1 to 5 in a 5*5 matrix each row will have same number
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    */

    // Example 6: Print 5 to 1 in a 5*5 matrix each row will have same number
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    */
}