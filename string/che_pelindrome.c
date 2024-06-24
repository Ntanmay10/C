// check if the inputted string is pelindrome or not

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    char str[50], rev[50];
    int j = 0, i = 0, len = 0;
    int flag;
    system("cls");

    printf("Enter the string to be checked: ");
    gets(str);
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    puts(str);
    puts(rev);

    for (i = 0; i < len; i++)
    {
        if (str[i] == rev[i])
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("The string is pelindrome");
    }
    else
    {
        printf("The string isn't pelindrome");
    }
}