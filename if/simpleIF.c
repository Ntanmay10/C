// The if statements are used for conditional programing
// The if statement is executed only once.
// If the condition is false then the work is terminated and passed on the the very next statement following the conditional block.
// Syntax:
/*
if()
{
    statement(s) to be executed
}
*/
#include<stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int n;
    system("cls");
    printf("Enter the value for N: ");
    scanf("%d", &n);
    printf("%d", n);
    // Checking the range of n
    /*
    if (n >= 5)
    {
        // Here if the above statement becomes false then the loop will break and will exit.
        // If the condition is true than the below print statement will be executed and the message will be shown on the display.
        printf("%d is greater or equal to 5", n);
    }
    */

    // If n is positive then display double and cube of n
    /*
    if (n > 0)
    {
        int dbl = n * 2, cub = n * n * n;
        printf("Double of n=%d\nCube of n=%d", dbl, cub);
    }
    */

    // If n>=100 n=n-10.
    /*
    if (n >= 100)
    {
        n = n - 10;
        printf("The new value of n=%d", n);
    }
    */

    // Display if leap year
    /*
    if(n%4==0){
        printf("%d is a leap year",n);
    }
    */

    // Display if the number is odd
    /*
    if (n % 2 != 0)
    {
        printf("%d is odd\n", n);
    }
    */

    // Display if the number is even
    /*
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    */

    // printf("Condition Checked");
}