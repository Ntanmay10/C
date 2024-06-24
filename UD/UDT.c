// structure syntax
/*
struct struct_name
{
    datatype element;
    datatype element;
    datatype element;
    datatype element;
};
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name[20];
    float height;
};

typedef struct student std;

void main()
{
    std x;
    system("cls");

    printf("Enter roll no: ");
    scanf("%d", &x.roll);
    fflush(stdin);
    printf("Enter name: ");
    gets(x.name);
    printf("Enter height: ");
    scanf("%f", &x.height);

    printf("Hello, %s your roll number is %d and your height is %.1f", x.name, x.roll, x.height);
}