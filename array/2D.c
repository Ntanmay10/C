// Decleration
// int num a[r][c];
// int num a[5][5];

// initialization
// num [0][0]=10;

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

    // Row by row scanning and displaying
    /*
    int i, j, a[3][3];
    system("cls");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("value of a[%d][%d] = %d \n", i, j, a[i][j]);
        }
    }
    */

    // column by column scanning and displaying
    /*
    int i, j, a[3][3];
    system("cls");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value for a[%d][%d]: ", j, i);
            scanf("%d", &a[j][i]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("value of a[%d][%d] = %d \n", j, i, a[j][i]);
        }
    }
    */

    // Summation of 2d matrix
    /*
    int i, j, sum = 0, a[2][2];
    system("cls");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("The total of matrix is: %d", sum);
    */

    // Take input in matrix and display the sum of even numbers and their average
    /*
    int i, j, ct = 0, even = 0, a[2][2];
    system("cls");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] % 2 == 0)
            {
                even += a[i][j];
                ct++;
            }
        }
    }
    if (even > 0)
        printf("The sum of even number is: %d and the average is %d", even, even / ct);
    else
        printf("There are no even number in the matrix");
    */

    // take input from user and display the sum and average of odd numbers in the matrix
    /*
    int i, j, ct = 0, odd = 0, a[2][2];
    system("cls");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] % 2 != 0)
            {
                odd += a[i][j];
                ct++;
            }
        }
    }
    if (odd > 0)
        printf("The sum of odd numbers is %d and their average is %d", odd, odd / ct);
    else
        printf("There are no odd numbers in the matrix");
    */

    // Take input from the user and display:
    // 1. The sum and average of all numbers in the matrix
    // 2. The sum and average of all odd numbers in the matrix
    // 2. The sum and average of all even numbers in the matrix
    /*
    int i, j, oddct = 0, odd = 0, evenct = 0, even = 0, ct = 0, sum = 0, a[2][2];
    system("cls");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            ct++;
            sum += a[i][j];
            if (a[i][j] % 2 == 0)
            {
                even += a[i][j];
                evenct++;
            }
            if (a[i][j] % 2 != 0)
            {
                odd += a[i][j];
                oddct++;
            }
        }
    }

    printf("The sum of all numbers of matrix is %d and its average is %d \n", sum, sum / ct);

    if (even > 0)
        printf("The sum of even number is %d and its average is %d\n", even, even / evenct);
    else
        printf("There are no even numbers in the matrix\n");

    if (odd > 0)
        printf("The sum of odd number is %d and its average is %d\n", odd, odd / oddct);
    else
        printf("There are no odd numbers in the matrix\n");
    */

    // Take input from user and find the greatest digit and its location in a 2*2 array
    /*
    int i, j, grt = 0, loc[1][2], a[2][2];
    loc[0][0] = 0;
    loc[0][1] = 0;
    system("cls");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] > grt)
            {
                grt = a[i][j];
                loc[0][0] = i;
                loc[0][1] = j;
            }
        }
    }
    printf("The greatest digit is %d and its location is [%d][%d]\n", grt, loc[0][0], loc[0][1]);
    */

    // Take input from user and find the lowest digit and its location in a 2*2 array
    /*
    int i, j, low = 0, loc[1][2], a[2][2];
    loc[0][0] = 0;
    loc[0][1] = 0;
    system("cls");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            low = a[0][0];
            if (a[i][j] < low)
            {
                low = a[i][j];
                loc[0][0] = i;
                loc[0][1] = j;
            }
        }
    }
    printf("The lowest digit is %d and its location is [%d][%d]\n", low, loc[0][0], loc[0][1]);
    */
}