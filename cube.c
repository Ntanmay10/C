#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

void main()
{
    // method 1: Calculating while printing
    /*
    int a;
    system("cls");
    printf("Enter A:");
    scanf("%d",&a);
    printf("Cube is:%d",a*a*a);
    */

    // method 2: Variable overriding
    /*
    int a;
    system("cls");
    printf("Enter A :");
    scanf("%d", &a);
    a = a*a*a;
    printf("cube is:%d", a);
    */

    // method 3: Declaring additional variable
    /*
    int a, cube;
    system("cls");
    printf("Enter A :");
    scanf("%d", &a);
    cube = a*a*a;
    printf("cube is:%d", cube);
    */
}