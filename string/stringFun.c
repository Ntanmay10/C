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
    // The folowing are the exampe of the above mentioned function
    char str1[50] = "Hello";
    char str2[] = "World";
    char temp[50]; // Temporary buffer for operations
    system("cls");

    // 1. strlen(): Calculate length of a string
    printf("Length of str1: %d\n", strlen(str1));

    // 2. strcat(): Concatenate str2 to str1
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // 3. strcpy(): Copy str1 to temp
    strcpy(temp, str1);
    printf("Copied string (temp): %s\n", temp);

    // 4. strcmp(): Compare str1 and str2
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else
    {
        printf("str1 and str2 are not equal\n");
    }

    // 5. strcmpi(): Compare str1 and str2
    int result2 = strcmpi("HELLO", "hello");
    if (result2 == 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else
    {
        printf("str1 and str2 are not equal\n");
    }

    // 6. strrev(): Reverse str1
    strcpy(temp, str1); // Copy str1 to temp before reversing
    strrev(temp);
    printf("Reversed string of str1: %s\n", temp);

    // 7. strlwr(): Convert str1 to lowercase
    strcpy(temp, str1); // Copy str1 to temp before converting
    strlwr(temp);
    printf("Lowercase version of str1: %s\n", temp);

    // 8. strupr(): Convert str1 to uppercase
    strcpy(temp, str1); // Copy str1 to temp before converting
    strupr(temp);
    printf("Uppercase version of str1: %s\n", temp);

    // Example To check if the entered string is pelindrome or not
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
}