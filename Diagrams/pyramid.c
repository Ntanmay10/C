#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    // Example 1: Form a ascending ladder
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    */
    /*
    Example 1 : output
    *
    * *
    * * *
    * * * *
    * * * * *
    */

    // Example 2: Form a descending ladder
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    */
    /*
   Example 2 : output
   * * * * *
   * * * *
   * * *
   * *
   *
   */

    // Example 3: form a numeric ascending ladder
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    */
    /*
   Example 3 : output
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
   */

    // Example 4: form a numeric descending ladder
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
    /*
    Example 4 : output
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */

    // Example 5: form a numeric ascending ladder each row with same number
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    */
    /*
    Example 5 : output
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
   */

    // Example 6: form a numeric ascending ladder each row with same number in descending manner
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    */
    /*
    Example 6 : output
    5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1
    */

    // Example 7: form a numeric ascending ladder each row with descending number
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
    /*
    Example 7 : output
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1

     // Example 8: form a descending loop with descending numbers
     /*
     int i, j;
     system("cls");

     for (i = 1; i <= 5; i++)
     {
         for (j = 5; j >= i; j--)
         {
             printf("%d ", j);
         }
         printf("\n");
     }
     */
    /*
    Example 8 : output
    5 4 3 2 1
    5 4 3 2
    5 4 3
    5 4
    5
    */

    // Example 9: Descending ladder
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
    /*
    Example 9 : output
    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
    5
    */

    // Example 10: Descending ladder reverse
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
    /*
    Example 10 : Output
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1
    */

    // Example 11: Ascending ladder
    /*
    int i, j;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
    /*
    Example 11 : Output
    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5
    */

    // Example 12: 1 to 15 in descending pyramid
    /*
    int i, j, k = 1;
    system("cls");

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    */
    /*
    Example 12 : Output
    1 2 3 4 5
    6 7 8 9
    10 11 12
    13 14
    15
    */

    // Example 13: 1 to 15 in ascending pyramid
    /*
    int i, j, k = 1;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    */
    /*
    Example 13 : Output
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */

    // Example 14: 5*5 matrix with _ & * in diagnoal manner
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("_ ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    */
    /*
    Example 14 : Output
    _ _ _ _ *
    _ _ _ * *
    _ _ * * *
    _ * * * *
    * * * * *
    */

    // Example 15: ascending ladder on mirror side
    /*
    int i, j;
    system("cls");

    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */
    /*
    Example 15 : Output
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
    */
}