// search and replace characters in the inputted string
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int i = 0;
    char str[50], sr, rp;
    system("cls");

    printf("Enter your string: ");
    gets(str);

    printf("Enter the character to be replaced: ");
    scanf(" %c", &sr);

    printf("Enter the character to be replaced with: ");
    scanf(" %c", &rp);

    while (str[i] != '\0')
    {
        if (str[i] == sr)
        {
            str[i] = rp;
        }
        i++;
    }
    printf("The modified string is: %s", str);
}