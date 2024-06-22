// Array is a group of element having same name but different index number
// Syntax: datatype arrayname[no of element]
// int a[5];
// char name[15];
// The array index starts from 0

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    // Decleartion of array and initialization
    /*
    int a[5];
    system("cls");
    a[0]=15;
    a[1]=20;
    a[2]=30;
    a[3]=a[2]+a[1];
    a[4]=50;
    printf("The value of a[0] is %d\n",a[0]);
    printf("The value of a[1] is %d\n",a[1]);
    printf("The value of a[2] is %d\n",a[2]);
    printf("The value of a[3] is %d\n",a[3]);
    printf("The value of a[4] is %d\n",a[4]);

    OR

    int a[5] = {1,2,3,4,5};
    char name[6] = {'T','A','N','M','A','Y'};
    */

    // Taking input from used and displaying the same
    /*
    int i, a[5];
    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("The value of a[%d] is %d\n", i, a[i]);
    }
    */

    // Taking input and displaying the sum of them
    /*
    int i, sum = 0, a[3];
    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The sum of the array is %d", sum);
    */

    // Disply the total and average of the array
    /*
    int i, sum = 0, avg = 0, a[3];
    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum / 3.0;
    printf("the total of array is %d and the average is %d", sum, avg);
    */

    // Display the total of even values of the array
    /*
    int i, even = 0, a[3];
    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even += a[i];
        }
    }
    printf("The total of even values of the array is %d", even);
    */

    // Display the following:
    // 1.overall sum and average
    // 2.odd sum and average
    // 3.even sum and average
    /*
        int i, sum = 0, even = 0, evnct = 0, odd = 0, oddct = 0, a[5];
        system("cls");

        // Input phase
        printf("Enter 5 integer values:\n");
        for (i = 0; i < 5; i++)
        {
            printf("Enter the value of a[%d]: ", i);
            scanf("%d", &a[i]);
            sum += a[i];
            if (a[i] % 2 != 0)
            {
                odd += a[i];
                oddct++;
            }
            else
            {
                even += a[i];
                evnct++;
            }
        }

        // Output phase
        printf("\nThe overall sum is %d and the average is %d\n", sum, sum / 5);

        if (oddct > 0)
        {
            printf("The overall odd sum is %d and the average is %d\n", odd, odd / oddct);
        }
        else
        {
            printf("No odd numbers entered.\n");
        }

        if (evnct > 0)
        {
            printf("The overall even sum is %d and the average is %d\n", even, even / evnct);
        }
        else
        {
            printf("No even numbers entered.\n");
        }
    */

    // Take input in array and display the lowest of all and its location
    /*
    int i, n, low, lc = 0, a[5];
    system("cls");

    // Input values into array
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Initialize low with the first element
    low = a[0];

    // Find the lowest value and its location
    for (i = 1; i < 5; i++)
    {
        if (a[i] < low)
        {
            low = a[i];
            lc = i;
        }
    }

    // Output the lowest value and its location
    printf("The lowest of all inputted numbers is %d and its location is a[%d]\n", low, lc);
    */

    // Take an array input and also print the reverse of the array
    /*
    int i, a[3], b[3];
    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("Enter the value of a[%d] :", i);
        scanf("%d", &a[i]);
        b[2 - i] = a[i];
    }

    for (i = 0; i < 3; i++)
        printf("The value of a[%d] & b[%d] is \n", a[i], b[i]);
    */

    // Take 2 array as input and display thier sum
    /*
    int i, a[3], b[3], sum[3];
    system("Cls");

    for (i = 0; i < 3; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Enter the value of b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 3; i++)
    {
        sum[i] = a[i] + b[i];
    }

    for (i = 0; i < 3; i++)
        printf("The sum of a[%d] + b[%d] is sum[%d] \n", a[i], b[i], sum[i]);
    */

    // Take array as input and display the difference between the greates and lowest number
    /*
    int i, low = 0, grt = 0, a[5];
    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    low = a[0];

    for (i = 0; i < 5; i++)
    {
        if (a[i] < low)
        {
            low = a[i];
        }
        if (a[i] > grt)
        {
            grt = a[i];
        }
    }
    printf("The greatest is %d and the lowest is %d and the difference is %d ", grt, low, grt - low);
    */

    // Reversing the original array
    /*
    int i, b, a[5];
    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5 / 2; i++)
    {
        b = a[i];
        a[i] = a[4 - i];
        a[4 - i] = b;
    }

    for (i = 0; i < 5; i++)
        printf("The reversed array is %d\n", a[i]);
    */
}