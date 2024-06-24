// Types of function:
// 1. No arguments and no return type [clrscr(),getch()]
// 2. With arguments and no return type [strcpy(),strcat()]
// 3. With arguments and with return type [strcmp(),strlen()]

// Function syntax:
/*
  return-type function-name(parameters)
  {
    // code
  }
*/

// Function use:
// 1. Function decleration (logic)
// 2. Function calling
// 3. Function prototyping (Decleration)

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void wish(); // Thsi is function prototyping
int greatest(int a, int b, int c);
void main()
{
    system("cls");
    wish(); // This is function calling
    int grt = greatest(5, 9, 14);
    printf("The greatest is %d", grt);
}

void wish() // This is function decleration
{
    printf("Hello, Good Morning\n");
}

int greatest(int a, int b, int c)
{
    int max = a; // Assume a is the largest initially

    if (b > max)
    {
        max = b; // Update max if b is larger
    }
    if (c > max)
    {
        max = c; // Update max if c is larger
    }

    return max; // Return the largest number
}