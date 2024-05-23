// If with else statement is used when there are 2 options.
// If the first condition becomes true than the internal block is executed and then terminated to next line after the entire if condition.
// If the condition becomes false than the else part is executed and then terminated to next line after the entire if condition.

// Syntax 1:Traditional syntax
/*
if(condition)
{
    single/multiple statement(s) to be executed
}
else
{
     single/multiple statement(s) to be executed
}
*/

// Syntax 2: Single statement without {}
/*
if(condition)
    single statement to be executed
else
    single statement to be executed
*/

// Syntax 3: Single if statement but multiple else statements
/*
if(condition)
    single statement to be executed
else
{
    statements to be executed
    statements to be executed
    statements to be executed
}
*/

// Syntax 4:Multiple if statements but single else statement
/*
if(condition)
{
    statements to be executed
    statements to be executed
    statements to be executed
}
else
    single statement to be executed
*/

// Note:
/*
If there is only one single statement then there is no compulsion to use {}
But if there are more than one statement than {} are mandatory or else it will generate error
*/

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <string.h>

void main()
{
    // streaks formatter
    /*
    int streaks;
    system("cls");
    printf("Enter your streaks:");
    scanf("%d", &streaks);

    if ((streaks % 100) == 0)
    {
        printf("Happy %d", streaks);
    }
    else
    {
        printf("Long way to go");
    }
    */

    // Odd or Even number
    /*
    int num;
    system("cls");
    printf("Enter your number:");
    scanf("%d", &num);

    if ((num % 2) == 0)
    {
        printf("%d is an Even number", num);
    }
    else
    {
        printf("%d is Odd number", num);
    }
    */

    // Positive or Negative number
    /*
    int num;
    system("cls");
    printf("Enter your number:");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d is positive", num);
    }
    else
    {
        printf("%d is negative");
    }
    */

    // Leap year or not
    /*
    int year;
    system("cls");
    printf("Enter your year:");
    scanf("%d",&year);

    if((year%4)==0){
     printf("%d is a leap year",year);
    }
    else{
     printf("%d is a non-leap year",year);
    }
    */

    // If Positive display Negative and vice-verse
    /*
    int num;
    system("cls");
    printf("Enter your number:");
    scanf("%d", &num);

    num = num * -1;
    // num = -num;
    printf("The inverse number is %d", num);
    */

    // If price>=2000 discount = 25%;
    // Else discount = 5%
    /*
    float price, disc, nPay;
    system("cls");
    printf("Enter the price:");
    scanf("%f", &price);

    if (price >= 2000)
    {
        disc = 25;
        nPay = price - (price * (disc / 100));
        printf("Total payable amount is %.2f", nPay);
    }
    else
    {
        disc = 5;
        nPay = price - (price * (disc / 100));
        printf("Total payable amount is %.2f", nPay);
    }
    */

    // If experience >= 5 year bonus = 20%;
    // Else no bonus
    /*
    float sal,bonus,nSal;
    int exp;
    system("cls");

    printf("Enter your Salary and Experience:");
    scanf("%f %d",&sal,&exp);

    if (exp>=5)
    {
        bonus=20;
        nSal=sal+(sal*(bonus/100));
        printf("The net payable salary is %.2f",nSal);
    }
    else
    {
        printf("The net payable salary is %.2f",sal);
    }
    */

    // Display the greatest of two inputted numbers
    /*
    int a, b;
    system("cls");
    printf("Enter the values of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A is greater than B");
    }
    else
    {
        printf("B is greater than A");
    }
    */

    // Display if profit or loss
    /*
    int sales, purchase;
    system("cls");
    printf("Enter Purchse Amount:");
    scanf("%d", &purchase);
    printf("Enter Sales Amount:");
    scanf("%d", &sales);

    if (sales > purchase)
    {
        printf("The profit is %d", sales - purchase);
    }
    else
    {
        printf("The loss is %d", sales - purchase);
    }
    */

    // If grade = A salary = double;
    // Else no bonus
    /*
    char grade;
    float sal, nSal;
    system("cls");
    printf("Enter your Grade And Salary:");
    scanf(" %c %f", &grade, &sal);

    if (grade == 'A' || grade == 'a')
    {
        // nSal=sal*2;
        // printf("The Net Payable salary to the Grade-A Employee is %.2f",nSal);
        printf("The Net Payable salary to the Grade-A Employee is %.2f", sal * 2);
    }
    else
    {
        printf("The Net Payable salary is %.2f", sal);
    }
    */
}