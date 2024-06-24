// join 2 string
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str1[50], str2[50], str3[50];
    int i = 0, l = 0;
    system("cls");

    for (i = 0; i < 2; i++)
    {
        printf("Enter string %d: ", i + 1);
        if (i == 0)
            gets(str1);
        else if (i == 1)
        {
            gets(str2);
        }
    }

    i = 0;
    while (str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }
    l = i;
    i = 0;
    while (str2[i] != '\0')
    {
        str3[l + i] = str2[i];
        i++;
    }
    str3[l + i] = '\0';

    printf("The new string is: %s", str3);
}