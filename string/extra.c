#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    // Some work on string
    /*
    char name[50] = "Tanmay";
    system("cls");

    printf("%s\n", name);    // Tanmay
    printf("%s", name[0]);   // Error
    printf("%c\n", name[0]); // T
    printf("%c\n", name[1]); // a
    printf("%c\n", name[2]); // n
    printf("%c\n", name[3]); // m
    printf("%c\n", name[4]); // a
    printf("%c\n", name[5]); // y
    printf("%c", name);      // Error
    printf("%c", name[20]);  // Null
    */

    // Displaying string character wise using for loop
    /*
    char name[50] = {'T', 'a', 'n', 'm', 'a', 'y'};
    int i;
    system("cls");

    for (i = 0; i < 6; i++)
    {
        printf("%c\n", name[i]);
    }
    */

    // Displaying string character wise using while loop
    /*
    char name[50] = "Tanmay";
    int i = 0;
    system("cls");

    while (name[i] != '\0')
    {
        printf("%c\n", name[i]);
        i++;
    }
    */

    // Find vowels from the given string
    /*
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
    */

    // convert the given sentence to sentence case if not
    /*
    char sent[50];
    system("cls");

    printf("Enter your sentence: ");
    gets(sent);

    if(sent[0]>=97 && sent[0]<=122)
    sent[0]-=32;

    puts(sent);
    */

    // search and replace characters in the inputted string
    /*
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
    */

    // Disply the actual and the reversed string inputted by the user

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