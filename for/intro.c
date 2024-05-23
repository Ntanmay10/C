// Syntax
// The syntax of a for loop is simple where 3 paramaters are given which are: Starting/Initial point, End/Limit point, Incerement/ decrement.
// The syntax of a for loop is as follows: for (initialization; condition; increment) { statement(s); }

// There are two loop styles: incremental/Ascending loop, Decremental/Descending loop.
// Incremental/Ascending loop: for (initialization; condition; increment) { statement(s); }
// Decremental/Descending loop: for (initialization; condition; decrement) { statement(s); }

// The for loop works in the following manner:
// 1. The initialization is executed first, which is usually an assignment statement that sets a value for the loop control variable.
// 2. Next, the condition is evaluated. If the condition is true, the body of the loop is executed. If the condition is false, the loop terminates.
// 3. After the body of the loop is executed, the increment is executed. This may be an assignment statement that increments the loop control variable.
// 4. The condition is evaluated again. If it is true, the body of the loop is executed again. If it is false, the loop terminates.
// 5. The increment is executed again, and the condition is evaluated again. This process continues until the condition becomes false, at which point the loop terminates.
// 6. After the loop terminates, the program continues with the statement following the closing brace of the for loop.
// 7. The loop control variable is not accessible outside the loop.

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    // Print 1 to 10 number
    /*
    int i;
    system("cls");
    printf("Incremental/Ascending loop: \n"); // Incremental/Ascending loop
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i);
    }
    */

    // print 1 to n number taking n as input
    /*
        int i, n;
        system("cls");
        printf("Enter the limit number: ");
        scanf("%d", &n);
        printf("Incremental/Ascending loop: \n"); // Incremental/Ascending loop
        for (i = 1; i <= n; i++)
        {
            printf("\n%d", i);
        }
    */

    // print i to n number taking input from user
    /*
    int i, n;
    system("cls");
    printf("Enter the initial value: ");
    scanf("%d", &i);
    printf("Enter the limit value: ");
    scanf("%d", &n);

    for (i = i; i <= n; i++)
    {
        printf("\n%d", i);
    }
    */

    // Print 10 to 1 number
    /*
    int i;
    system("cls");
    printf("Decremental/Descending loop: \n"); // Decremental/Descending loop
    for (i = 10; i >= 1; i--) //
    {
        printf("\n%d", i);
    }
    */

    // print 10 to n number taking input from user
    /*
    int i, n;
    system("cls");
    printf("Enter the limit value: ");
    scanf("%d", &n);
    for (i = 10; i >= n; i--)
    {
        printf("\n%d", i);
    }
    */

    // print i to n number taking input from user
    /*
    int i, n;
    system("cls");
    printf("Enter the initial value: ");
    scanf("%d", &i);
    printf("Enter the limit value: ");
    scanf("%d", &n);
    for (i = i; i >= n; i--)
    {
        printf("\n%d", i);
    }
    */

    // Print (1,3,5,7,9) Range(1,15)
    /*
    int i;
    system("cls");
    for (i = 1; i <= 15; i += 2)
    {
        printf("\n%d", i);
    }
    */

    // Print (2,4,6,8,10) Range(1,15)
    /*
    int i;
    system("cls");
    for (i = 2; i <= 15; i += 2)
    {
        printf("\n%d", i);
    }
    */

    // Display Num is i and square is i*i from 1 to 10
    /*
    int i;
    system("cls");
    for (i = 1; i <= 10; i++)
    {
        printf("\nThe number is %d and the square is %d", i, i * i);
    }
    */

    // Display Number, square, cube range(1 to n)
    /*
    int i, n;
    system("cls");
    printf("Enter the limit value: ");
    scanf("%d", &n);
    printf("%-10s%-10s%-10s","Number","Square","Cube");
    for (i = 1; i <= n; i++)
    {
        printf("\n%-10d%-10d%-10d", i,i*i,i*i*i);
    }
    */

    // Display multiplication table of 6
    /*
    int i;
    system("cls");
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", 6, i, 6 * i);
    }
    */

    // takeing input from user display the multiplication table for the same
    /*
    int i, n;
    system("cls");
    printf("Enter the number: ");
    scanf("%d", &i);
    for (n = 1; n <= 10; n++)
    {
        printf("%d X %d = %d\n", i, n, n * i);
    }
    */

    // make the loop run 1 to 10 but print 10 to 1
    /*
    int i;
    system("cls");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", 11 - i);
    }
    */

    // make the loop run 10 to 1 but print 1 to 10
    /*
    int i;
    system("cls");
    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", 11 - i);
    }
    */

    // print 1 to 10 max loop run 5 times
    /*
    int i,n=0;
    system("cls");
    for(i=1;i<=10;i=i+2){
        printf("%d\n%d\n",i,i+1);
    }
    */

    // print 1 to 10 and display summation
    /*
    int i,sum=0;
    system("cls");
    for(i=1;i<=10;i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d",sum);
    */

    // Display factorial of n
    /*
    int i, n, fct = 1;
    system("cls");
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fct = fct * i;
    }
    printf("The factorial of the given number is: %d", fct);
    */

    // Take 10 number as input and display sum
    /*
    int i,n,sum=0;
    system("cls");
    for(i=1;i<=10;i++){
        printf("Enter the %d number: ",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("The sum of al 10 digit is: %d",sum);
    */

    
}
