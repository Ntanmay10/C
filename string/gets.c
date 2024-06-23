// The gets()
// The scanf() can only scan one single word and gets terminated when a space is given
// If we type Tanmay A Naik, it will only scan Tanmay.
// So we will use the gets() for string operations.
// gets() => get string

// gets() is a function which is used to scan multiple words including spaces

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    //takein user's name as input using gets() 
    char str[20];
    system("cls");

    printf("Enter Your Name: ");
    gets(str);

    printf("Hello, %s !", str);
}
