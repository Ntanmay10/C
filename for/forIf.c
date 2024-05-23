#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    // loop 1 to 10 display only odd without i=i+2
    /*
        int i;
        system("cls");
        for(i=1;i<=10;i++){
         if(i%2!=0){
             printf("%d\n",i);
         }
        }
        */

    // 1 to n display only even
    /*
    int i, n;
    system("cls");
    printf("Enter the Limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    */

    // 1 to n display only odd
    /*
    int i,n;
    system("cls");
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     if(i%2!=0){
         printf("%d\n",i);
     }
    }
    */

    // Take 10 number as input and display sum of even numbers
    /*
    int i,n,even=0;
    system("cls");
    for(i=1;i<=10;i++){
        printf("Enter %d number: ",i);
        scanf("%d",&n);
        if(n%2==0){
            even=even+n;
        }
    }
    printf("The sum of even numbers is: %d",even);
    */

    // Take 10 number as input and display total sum and sum of odd & even numbers
    /*
    int i, n, odd, sum = 0, even = 0;
    system("cls");
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the %d number: ", i);
        scanf("%d", &n);
        sum = sum + n;
        if (n % 2 == 0)
        {
            even = even + n;
        }
    }
    printf("The total of 10 number is: %d\n", sum);
    printf("The total of even number is: %d\n", even);
    printf("The total of odd number is: %d", sum - even);
    */
}