// String's can't be compared, copied, reversed, or manipulated easily just like the integers
// To overcome this certain function's are available:
// 1.strlen () => returns the length of the string
// 2.strcat () => concatenates two strings
// 3.strcpy () => copies one string to another
// 4.strcmp () => compares two strings
// 5.strcmpi () => compares two strings (case insensitive)
// 6.strrev () => Reverses the string
// 7.strlwr () => converts the string to lower case
// 8.strupr () => converts the string to upper case

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{   
    //Example 1: To check if the entered string is pelindrome or not
    /*
    char str[30], rev[30];
    int l;
    system("cls");

    printf("Enter the string to be checked: ");
    gets(str);

    strcpy(rev, str);
    strrev(rev);
    l = strcmp(str, rev);

    if (l == 0)
    {
        printf("The entered string is pelindrome");
    }
    else
    {
        printf("The entered string isn't prlindrome");
    }
    */

    //Example 2: To convert entire string into upper case
    char str[30];
    system("cls");

    printf("Enter your string: ");
    gets(str);

    strupr(str);
    puts(str);
}