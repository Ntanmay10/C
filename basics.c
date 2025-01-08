#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    system("cls");
    printf("Hello, World!!!");
    // printf() is a function that is used to display value to the moniter
    /*
    printf("typrSpecifier","value/variableName")
    printf("value") Display the value as string by default
    printf("%d",variableName) used to display integer value
    printf("%f",variableName) used to display float value
    printf(" %c",variableName) used to display character value
    printf("%s",variableName) used to display string value
    */

    // scanf() is a function that is used to scan value from the keyboard
    /*
    scanf("typeSpecifier",&variableName)
    scanf("%d",&variableName) used to scan integer value
    scanf("%f",&variableName) used to scan float value
    scanf(" %c",&variableName) used to scan character value
    scanf("%s",&variableName) used to scan string value
    */

    //   "\n"(new line charactrer) & "\t"(5 blank spaces) backslash character can be use to decorate the output
    /*
    system("cls");
    printf("Hello\nTanmay\tnaik");
    The above code will display:
    Hello
    Tanmay  Naik
    */

    // Declaration of variable and initialization
    /*
    int n;
    n=100;
    */

    // decleration with initialization of variable
    /*
    int n=100;
    */

    // interger input and display
    /*
    int num;
    system("cls");
    printf("Enter your number:");
    scanf("%d", &num);
    printf("%d", num);
    */

    // float input and display
    /*
    float num;
    system("cls");
    printf("Enter your Float Value");
    scanf("%f", &num);
    // printf("%f", num);  By default shows 6 digit after decimal
    printf("%.2f", num); //writing the required number beside the point can help fetching the number in efficient way
    */

    // character input and display
    /*
        char chr;
        system("cls");
        printf("Enter your character:");
        scanf(" %c", &chr); //input: tanmay
        printf("%c", chr); //output: t
    */

    // string input and display
    /*
    char name[25];
    system("cls");
    printf("Enter your name:");
    scanf("%s", &name); //input: tanmay
    printf("%s", name); //output: tanmay
    */

    // Logical operators
    /*
     And = &&
     Or = ||
     Not = !
    */

    // comparision operators
    /*
    == equal to
    != not equal to
    > greater than
    < less than
    >= greater than or equal to
    <= less than or equal to
    */
}