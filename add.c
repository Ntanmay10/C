#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

void main()
{
    // method 1: Calculating while printing
    /*
    int a,b;
    system("cls");
    printf("Enter A and B :");
    scanf("%d %d",&a,&b);
    printf("Addition is:%d",a+b);
    */

    // method 2: Variable overriding
    /*
    int a, b;
    system("cls");
    printf("Enter A and B :");
    scanf("%d %d", &a, &b);
    a = a + b;
    printf("Addition is:%d", a);
    */

    // method 3: Declaring additional variable
    /*
    int a, b, add;
    system("cls");
    printf("Enter A and B :");
    scanf("%d %d", &a, &b);
    add = a + b;
    printf("Addition is:%d", add);
    */
}