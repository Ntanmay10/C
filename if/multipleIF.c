// Multiple If-else statement is used when there are mare than 2 options.
// If the first condition becomes true than the internal block is executed and then terminated to next line after the entire if condition.
// If the 1st condition becomes false than the else-if part is checked and if true then terminated to next line after the entire if condition.
// If the 2nd condition becomes false than the next else-if part is executed and if true then terminated to next line after the entire if condition.
// The sequence continues until the last else part.

// Syntax 1:Traditional syntax
/*
if(condition)
{
    single/multiple statement(s) to be executed
}
elseif(condition)
{
     single/multiple statement(s) to be executed
}
elseif(condition)
{
    single/multiple statement(s) to be executed
}
else
{
    single/multiple statement(s) to be executed if none of the above conditions is true
}
*/

// Syntax 2: Single statement without {}
/*
if(condition)
    single statement to be executed
elseif(condition)
    single statement to be executed
elseif(condition)
    single statement to be executed
else
    single statement to be executed if none of the above conditions is true
*/

// Syntax 3: Single if statement but multiple elseif statements
/*
if(condition)
    single statement to be executed
elseif(condition)
{
    statements to be executed
    statements to be executed
    statements to be executed
}
elseif(condition)
    statements to br executed
else
    statements to be executed if none of the above conditions is true
*/

// Syntax 4:Multiple if statements but single elseif statement
/*
if(condition)
{
    statements to be executed
    statements to be executed
    statements to be executed
}
elseif(conditon)
    single statement to be executed
elseif(another condition)
    another set of statements
else
    statements to be executed if none of the above conditions is true
*/

// Note:
/*
If there is only one single statement then there is no compulsion to use {}
But if there are more than one statement than {} are mandatory or else it will generate error
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    // Find if the given number is +ve, -ve or zero
    /*
        int num;
        system("cls"); //To clear the screen before displaying output
        printf("\nEnter a number : ");
        scanf("%d", &num);
        if (num > 0)
            printf("\nThe number is positive.");
        else if (num == 0)
            printf("\nThe number is Zero.");
        else
            printf("\nThe number is negative.");
    */

    // Take salary and grade as input
    // grade=>bonus: A=>100% bonus, B=>75% bonus, C=>60% bonus, D=>50% bonus, Else=>25%
    // Display Net salary
    /*
    float salary;
    char grade;
    system( "cls" );
    printf("\nEnter your Salary & Grade :");
    printf("\nSalary = ");
    scanf("%f",&salary);
    printf("\nGrade = ");
    scanf(" %c",&grade);
    system( "cls" );

    // Displaying Output
    if(grade=='A')
        salary=salary+salary;
    else if(grade=='B')
        salary=salary+(salary*0.75);
    else if(grade=='C')
         salary=salary+(salary*0.60);
    else if(grade=='D')
         salary=salary+(salary*0.50);
    else
         salary=salary+(salary*0.25);

    printf("\nNet Salary = %.2f",salary);
    */

    // Design a calculator.
    /*
    float n1, n2, ans = 0;
    char sg;
    system("cls");
    printf("Enter N1:");
    scanf("%f", &n1);
    printf("Enter the operator:");
    scanf(" %c", &sg);
    printf("Enter N2:");
    scanf("%f", &n2);
    if (sg == '+')
    {
        ans = n1 + n2;
    }
    else if (sg == '-')
    {
        ans = n1 - n2;
    }
    else if (sg == '*')
    {
        ans = n1 * n2;
    }
    else if (sg == '/')
    {
        if (n2 != 0)
            ans = n1 / n2;
        else
            printf("Error! Division by zero is not allowed...\n");
    }
    else
    {
        printf("Invalid Operator!\n");
    }
    printf("%.2f %c %.2f = %.2f\n", n1, sg, n2, ans);
    */

    // Take X & Y as input print the greatest of them or if they are equal then print "The numbers are same"
    /*
        int x, y;
        system("CLS");
        printf("Enter First Number : ");
        scanf("%d", &x);
        printf("Enter Second Number : ");
        scanf("%d", &y);
        if (x > y)
            printf("\n The Greater Number Is : %d ", x);
        else if (y > x)
        {
            printf("\n The greater number Is : %d", y);
        }
        else
        {
            printf("Both the numbers are same");
        }
    */

    // Take the sales amount and purchase amount as input and determine whether its profit/loss/neither
    /*
    float pa, sa, diff;
    system("CLS");
    printf("Enter the purchase amount: ");
    scanf("%f", &pa);
    printf("Enter the sale amount: ");
    scanf("%f", &sa);
    diff = sa - pa;
    if (diff > 0)
        printf("Profit=%.2f", diff);
    else if (diff < 0)
        printf("Loss=%.2f", diff);
    else
        printf("No Profit/Loss");
    */

    // Take the marks of Eng, Maths, sci as input
    // If total of 3 subject >=200
    // Or Maths + Sci >= 150
    // Admission confirmed else no admission
    /*
    float e, m, s, tot;
    system("cls");
    printf("Enter Marks in English: ");
    scanf("%f", &e);
    printf("Enter Marks in Mathematics: ");
    scanf("%f", &m);
    printf("Enter Marks in Science: ");
    scanf("%f", &s);
    tot = e + m + s;
    if (tot >= 200)
        printf("Admission Confirmed");
    else if ((m + s) >= 150)
        printf("Admission  Confirmed");
    else
        printf("Sorry admission denied");
    */

    // Take salary and experience as input
    // If exp>=15 bonus = 100%
    // Else if exp<15 but >10 bonus = 75%
    // Else if exp <10 but >=7  bonus = 60%
    // else if exp <7 but >=5 bonus = 50%
    // else bonus = 25%
    /*
    float sal;
    int exp;
    system("cls");
    printf("Enter your Salary: ");
    scanf("%f", &sal);
    printf("Enter your Experience: ");
    scanf("%d", &exp);
    if (exp >= 15)
        sal = sal * 2;
    else if (exp >= 10)
        sal = sal + (sal * 0.75);
    else if (exp >= 7)
        sal = sal + (sal * 0.60);
    else if (exp >= 5)
        sal = sal + (sal * 0.50);
    else
        sal = sal + (sal * 0.25);

    printf("Net salary = %.2f", sal);
    */

    // Take marks of Eng, Maths, & sci as input
    // Calculate Average & Total
    // If avg>=75 Grade = Distinction
    // Else if avg>=60 Grade = First Class
    // Else if avg>=50 Grade = Second Class
    // Else if avg>=35  Grade = Pass Class
    // else Grade = Fail
    /*
        int e,m,s,tot;
        float avg;
        system( "cls" );
        printf("\tMark Sheet \n");
        printf("Enter Marks in English :");
        scanf("%d",&e);
        printf("Enter Marks in Mathematics :");
        scanf("%d",&m);
        printf("Enter Marks in Science :");
        scanf("%d",&s);
        tot=e+m+s;
        avg=tot/3.0;
        if(avg>=75)
           printf("\n\tDistinction!");
        else if(avg>=60)
           printf("\n\tFirst Class!");
        else if(avg>=50)
           printf("\n\tSecond Class!");
        else if(avg>=35)
           printf("\n\tPass Class!");
        else
           printf("\n\tFail!");
    */

    // Electricity Bill calculator
    // If unit 1-100 Amount = unit*0.50
    // Else if unit 101-200 Amount = 100 + (unit-100)*1
    // Else if unit 201-300 Amount = 200 + (unit-200)*2
    // Else if unit 301-400 Amount = 300 + (unit-300)*3
    // else Amount = 400 + (unit-400)*5
    /*
        int unit;
        float amt;
        system("cls");
        printf("Enter the units used: ");
        scanf("%d", &unit);
        if (unit <= 100)
            amt = unit * 0.50;
        else if (unit <= 200)
            amt = 100 + (unit - 100) * 1;
        else if (unit <= 300)
            amt = 200 + (unit - 200) * 2;
        else if (unit <= 400)
            amt = unit + (unit - 300) * 3;
        else
            amt = 400 + (unit - 400) * 5;

        printf("The amount is Rs. %.2f.", amt);
    */
}