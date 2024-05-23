#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

void main()
{
    float sal, bonus, netSal;
    system("cls");

    printf("Enter Salary:");
    scanf("%f", &sal);
    printf("Enter Bonus:");
    scanf("%f", &bonus);

    netSal = sal + (sal * (bonus / 100));
    printf("Net Payable Salary=%.2f", netSal);
}