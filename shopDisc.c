#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <string.h>

void main()
{
    float price, disc, nPay;
    system("cls");
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Disc: ");
    scanf("%f", &disc);

    nPay = price - (price * (disc / 100));
    printf("Net Payable Amount:%.2f", nPay);
}