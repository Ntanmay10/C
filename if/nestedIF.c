// Nested-IF as the name suggests is a bundle of if statement's which are nested within each other.
// The purpose of Nested IF is to perform more complex decision making by breaking down a single if condition into multiple conditions that work together to form a final conclusion.

// syntax of nested if
/*
if (condition1) {
    // Code block to execute if condition1 is true
    if (condition2) {
        // Code block to execute if both condition1 and condition2 are true
    }
    else {
        // Code block to execute if condition1 is true but condition2 is false
    }
}
else {
    // Code block to execute if condition1 is false
}
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    // Take n as input and print n if its >= 100 and <= 500, otherwise print "Invalid Input"
    /*
    int n;
    system("cls");
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Format 1 without using logical operators
    if (n >= 100)
    {
        if (n <= 500)
        {
            printf("%d lies between the range of 100 & 500", n);
        }
        else
        {
            printf("Invalid Input\n");
        }
    }
    else
    {
        printf("Invalid Input\n");
    }

    // Format 2  using logical operators
    if (n >= 100 && n <= 500)
    {
        printf("%d lies between the range of 100 & 500", n);
    }
    else
    {
        printf("Invalid Input\n");
    }
    */

    // take salary,grade,& exp as input
    // If exp >=5 & grade = A,
    // bonus = 100%
    /*
    float sal;
    char grd;
    int exp;
    system("cls");
    printf("Enter your salary: ");
    scanf("%f", &sal);
    printf("Enter your Grade: ");
    scanf(" %c", &grd);
    printf("Enter your experience: ");
    scanf("%d", &exp);
    // Format 1 without using logical operator
    if (exp >= 5)
    {
        if (grd == 'A')
        {
            printf("Revised Salary = %.2f",sal*2);
        }
        else
        {
            printf("Not eligible for bonus");
        }
    }
    else
    {
        printf("Not eligible for bonus");
    }

    // Format 2 using logical operators
    if (exp >=5 && grd == 'A')
    {
        printf("Revised Salary = %.2f", sal * 2);
    }
    else
    {
        printf("Not eligible for bonus");
    }
    */

    // Take marks of Eng, Maths,& science as input
    // If marks in all three subjects are >= 35, print "Pass"
    /*
    int eng, mat, sci;
    system("cls");
    printf("Enter your marks in English: ");
    scanf("%d", &eng);
    printf("Enter your marks in Maths: ");
    scanf("%d", &mat);
    printf("Enter your marks in Science: ");
    scanf("%d", &sci);
    //Format 1 without using logical operators
    if (eng >= 35)
    {
        if (mat >= 35)
        {
            if (sci >= 35)
            {
                printf("Congratulations you've cleared the exams");
            }
            else
            {
                printf("Better luck next time");
            }
        }
        else
        {
            printf("Better luck next time");
        }
    }
    else
    {
        printf("Better luck next time");
    }

    // Format 2 using logical operators
    if (eng >= 35 && mat >= 35 && sci >= 35)
    {
        printf("Congratulations you've cleared the exams");
    }
    else
    {
        printf("Better luck next time");
    }
    */

    // Take n as input
    // If n <=100 or n >= 500 print n
    // else print "Invalid Input"
    /*
    int n;
    system("cls");

    printf("\nEnter a number: ");
    scanf("%d", &n);
    // Format 1 withous using logical operators
    if (n <= 100)
    {
        printf("%d", n);
    }
    else if (n >= 500)
    {
        printf("%d", n);
    }
    else
    {
        printf("Invalid Number");
    }

    // Format 2 using logical operators
    if (n <= 100 || n >= 500)
    {
        printf("%d", n);
    }
    else
    {
        printf("Invalid Number");
    }

    // Format 3 using logical operators
    if (!(n >= 100 && n <= 500))
    {
        printf("%d", n);
    }
    else
    {
        printf("Invalid Number");
    }
    */

    // Take salary as input
    // Provide 50%
    // Min bonus 10000
    // Max bonus 25000
    /*
    float sal;
    system("cls");

    printf("Enter your salary: ");
    scanf("%f", &sal);

    if (sal < 20000)
    {
        sal = sal + 10000;
    }
    else if (sal >= 20000 && sal <= 50000)
    {
        sal = sal * 1.5;
    }
    else
    {
        sal = sal + 25000;
    }

    printf("Revised Salary = %.2f", sal);
    */

    // Find out greates of 3 inputted number
    /*
    int a, b, c;
    system("cls");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    // 1st format
    if (a > b)
    {
        if (a > c)
        {
            printf("A is greatest");
        }
        else
        {
            printf("C is greatest");
        }
    }
    else if (b > c)
    {
        printf("B is greatest");
    }
    else
    {
        printf("C is greatest");
    }

    // 2nd format
    if (a > b && a > c)
    {
        printf("A is greatest");
    }
    else if (b > c)
    {
        printf("B is greatest");
    }
    else
    {
        printf("C is greatest");
    }

    // 3rd format
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("%d is the maximum number", max);
    */

    // Find out greatest of 4 inputted number
    /*
    int a, b, c, d;
    system("cls");
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Enter the value of C: ");
    scanf("%d", &c);
    printf("Enter the value of D: ");
    scanf("%d", &d);
    // 1st format
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is greatest");
            }
            else
            {
                printf("D is greatest");
            }
        }
        else if (c > d)
        {
            printf("C is greatest");
        }
        else
        {
            printf("D is greatest");
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("B is greatest");
        }
        else
        {
            printf("D is greatest");
        }
    }
    else if (c > d)
    {
        printf("C is greatest");
    }
    else
    {
        printf("D is greatest");
    }

    // 2nd format
    if (a > b && a > c && a > d)
    {
        printf("A is greatest");
    }
    else if (b > c && b > d)
    {
        printf("B is greatest");
    }
    else if (c > d)
    {
        printf("C is greatest");
    }
    else
    {
        printf("D is greatest");
    }

    // 3rd format
    int max = a;
    if (b > a)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    printf("The greatest is %d", max);
    */

    // Find out greatest of 5 inputted number
    /*
    int a, b, c, d, e;
    system("cls");
    printf("Enter the values of A: ");
    scanf("%d", &a);
    printf("Enter the values of B: ");
    scanf("%d", &b);
    printf("Enter the values of C: ");
    scanf("%d", &c);
    printf("Enter the values of D: ");
    scanf("%d", &d);
    printf("Enter the values of E: ");
    scanf("%d", &e);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf("A is greatest");
                }
                else
                {
                    printf("E is greatest");
                }
            }
            else if (d > e)
            {
                printf("D is greatest");
            }
            else
            {
                printf("E is greatest");
            }
        }
        else if (c > d)
        {
            if (c > e)
            {
                printf("C is greatest");
            }
            else
            {
                printf("E is greatest");
            }
        }
        else if (d > e)
        {
            printf("D is greatest");
        }
        else
        {
            printf("E is greatest");
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            if (b > e)
            {
                printf("B is greatest");
            }
            else
            {
                printf("E is greatest");
            }
        }
        else if (d > e)
        {
            printf("D is greatest");
        }
        else
        {
            printf("E is greatest");
        }
    }
    else if (c > d)
    {
        if (c > e)
        {
            printf("C is greatest");
        }
        else
        {
            printf("E is greatest");
        }
    }
    else if (d > e)
    {
        printf("D is greatest");
    }
    else
    {
        printf("E is greatest");
    }
    */
}