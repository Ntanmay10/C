// The while loop is also called the dynamic loop
// There are two types of while loop

// 1st the entry control whose syntax is as follows:
// Here the value is check at the entry time and there after the work is done
/*
    while ( condition )
    {
        code
    }
*/

// 2nd the exit control loop:
//  Here the initial task is done regardless the validation of it value
// Then at the exit time the value is checked and thenafter the 2nd loop is either run or terminated
/*
    do
    {
         code
    } while ( condition );
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    // print 1 to 10 using while loop
    /*
    int i = 1;
    system("cls");
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    */

    // print 1 to 10 using do while loop
    /*
    int i = 1;
    system("cls");
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    */

    // print 10 to 1 using while loop
    /*
    int i = 10;
    system("cls");
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    */

    // print 10 to 1 using do while loop
    /*
    int i = 10;
    system("cls");
    do
    {
        printf("%d\n", i);
        i--;
    } while (i >= 1);
    */

    // print 1,3,5,7,9 using while loop
    /*
    int i = 1;
    system("cls");
    while (i <= 10)
    {
        printf("%d\n", i);
        i += 2;
    }
    */

    // print 1,3,5,7,9 using do while loop
    /*
    int i = 1;
    system("cls");
    do
    {
        printf("%d\n", i);
        i += 2;
    } while (i <= 10);
    */

    // print 2,4,6,8,10 using while loop
    /*
    int i = 2;
    system("cls");
    while (i <= 10)
    {
        printf("%d\n", i);
        i += 2;
    }
    */

    // print 2,4,6,8,10 using do while loop
    /*
    int i = 2;
    system("cls");
    do
    {
        printf("%d\n", i);
        i += 2;
    } while (i <= 10);
    */

    // print 1 to n using while loop
    /*
    int i=1,n;
    system("cls");
    printf("Enter the limit: ");
    scanf("%d",&n);
    while (i<=n)
    {
     printf("%d\n",i);
     i++;
    }
    */

    // print 1 to 10 using do while loop
    /*
    int i = 1, n;
    system("cls");
    printf("Enter the limit: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    */

    // print n to 1 using while loop
    /*
    int i;
    system("cls");
    printf("Enter the number: ");
    scanf("%d", &i);
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    */

    // print n to 1 number using do while loop
    /*
    int i;
    system("cls");
    printf("Enter the number: ");
    scanf("%d", &i);
    do
    {
        printf("%d\n",i);
        i--;
    } while (i>=1);
    */

    // print /2 of the number untill it reaches 0 using while loop
    /*
    int i;
    system("cls");
    printf("Enter the value: ");
    scanf("%d", &i);
    while (i > 1)
    {
        printf("%d\n", i);
        i /= 2;
    }
    */

    // print /2 of the number untill it reaches 0 using do while loop
    /*
    int i;
    system("cls");
    printf("Enter the value: ");
    scanf("%d", &i);
    do
    {
        printf("%d\n", i);
        i /= 2;
    } while (i > 0);
    */

    // print sum of n/2 using while loop
    /*
    int i, sum = 0;
    system("cls");
    printf("Enter the value: ");
    scanf("%d", &i);
    while (i > 0)
    {
        printf("%d\n", i);
        sum += i;
        i /= 2;
    }
    printf("The sum is: %d",sum);
    */

    // print sum of n/2 using do while loop
    /*
    int i, sum = 0;
    system("cls");
    printf("Enter the value: ");
    scanf("%d", &i);
    do
    {
        printf("%d\n", i);
        sum += i;
        i /= 2;
    } while (i > 0);

    printf("The sum is: %d", sum);
    */

    // print n/2 and display the sum and average of even numbers using while loop
    /*
    int i, ct=0, sum = 0;
    system("cls");
    printf("Enter the value: ");
    scanf("%d",&i);
    while (i > 0)
    {
        printf("%d\n",i);
        if (i % 2 == 0)
        {
            sum += i;
            ct++;
        }
        i /= 2;
    }

    printf("The sum of even numbers is: %d\n", sum);
    printf("The total even numbers are: %d\n", ct);
    printf("The average of even numbers is: %d", sum / ct);
    */

    // print n/2 and display the sum and average of even numbers using do while loop
    /*
    int i, ct = 0, sum = 0;
    system("cls");
    printf("Enter the value: ");
    scanf("%d", &i);
    do
    {
        printf("%d\n", i);
        if (i % 2 == 0)
        {
            sum += i;
            ct++;
        }
        i /= 2;
    } while (i > 0);

    printf("The sum of even number is: %d\n", sum);
    printf("The total even number are: %d\n", ct);
    printf("The average of even number is: %d", sum / ct);
    */

    // print n/2 and display sum of odd numbers and their average using while loop
    /*
        int i, ct = 0, sum = 0;
        system("cls");
        printf("Enter the value: ");
        scanf("%d", &i);
        while (i > 0)
        {
            printf("%d\n", i);
            if (i % 2 != 0)
            {
                sum += i;
                ct++;
            }
            i /= 2;
        }
        printf("The sum of odd numbers is : %d\n", sum);
        printf("The total odd numbers are : %d\n", ct);
        printf("The average of odd numbers is : %d\n", sum / ct);
    */

    // print n/2 and display sum of odd numbers and their average using do while loop
    /*
    int i, ct = 0, sum = 0;
    system("cls");
    printf("Enter the value: ");
    scanf("%d", &i);
    do
    {
        printf("%d\n", i);
        if (i % 2 != 0)
        {
            sum += i;
            ct++;
        }
        i /= 2;
    } while (i > 0);

    printf("The sum of odd numbers is: %d\n", sum);
    printf("The total odd numbers are: %d\n", ct);
    printf("The average of odd numbers is: %d", sum / ct);
    */

    // Display the sum of inputed digit using while loop
    /*
    int i, rem, sum = 0;
    system("cls");
    printf("Enter the digit: ");
    scanf("%d", &i);
    while (i > 0)
    {
        rem = i % 10;
        sum += rem;
        i /= 10;
    }
    printf("The sum of digit is: %d", sum);
    */

    // Find the biigest digit of the given number
    /*
    int n, rem = 0, big = 0;
    system("cls"); // Clears the console screen (works on Windows, clears the console output)

    printf("Enter the digit: ");
    scanf("%d", &n); // Reads an integer input from the user

    while (n > 0)
    {
        rem = n % 10; // Extracts the last digit of n using the modulus operator
        if (rem > big)
        {
            big = rem; // Updates big if the current digit (rem) is larger than the current largest digit (big)
        }
        n /= 10; // Removes the last digit from n (integer division by 10)
    }

    printf("Big = %d", big); // Prints the largest digit found
    */

    // Reverse the inputted number
    /*
    int n, rev = 0, rem;
    system("cls");

    printf("Enter the digit: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reverse of the digit is: %d", rev);
    */

    // Check if the inputted digit is pelindrome or not
    /*
    int n, b, rem = 0, rev = 0;
    system("cls");

    printf("Enter the digit: ");
    scanf("%d", &n);
    b = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }

    if (b == rev)
    {
        printf("The digit is a palindrome.");
    }
    else
    {
        printf("The digit is not a palindrome.");
    }
    */

    // Check if the inputted digit id armstrong or not
    int n, b, sum = 0, rem = 0;
    system("cls");

    printf("Enter the digit: ");
    scanf("%d", &n);
    b = n;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n /= 10;
    }
    if (sum == b)
    {
        printf("The number is armstrong.");
    }
    else
    {
        printf("the number is not armstrong.");
    }
}
