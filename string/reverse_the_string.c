// Disply the actual and the reversed string inputted by the user
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int i = 0, j = 0, len = 0;
    char str[50], rev[50];
    system("cls");

    printf("Enter the string: ");
    gets(str);

    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    for (i = 1; i <= len; i++)
    {
        rev[j] = str[len - i];
        j++;
    }
    rev[j] = '\0';
    printf("The string is %s\n", str);
    printf("The reversed string is %s", rev);
}