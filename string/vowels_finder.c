// Find vowels from the given string
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int i = 0, vo = 0;
    char name[50], vow[50];
    system("cls");

    printf("Enter your name: ");
    gets(name);

    while (name[i] != '\0')
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            vow[vo] = name[i];
            vo++;
        }
        i++;
    }
    vow[vo] = '\0';
    if (vo > 0)
    {
        printf("The total number of vowels in the string are: %d\n", vo);
        printf("The vowels in the string are: %s", vow);
    }
    else
    {
        printf("No vowels found in the string");
    }
}