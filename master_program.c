#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct data
{
    int roll;
    char fname[10];
    char mname[10];
    char lname[10];
    char city[15];
    char course[10];
    char gen;
};

typedef struct data dta;

void header(char[]);
void line(int, char);
void title();
void centre(char[]);
void main()
{
    dta a[3] = {{01, "Tanmay", "Amar", "Naik", "Samrawadi", "BCA", "M"},
                {02, "Chirag", "Dilip", "Patel", "Vijalpor", "BBA", "M"},
                {03, "Mahek", "Niraj", "Naik", "Gandevi", "BCom", "F"}};
    char gen, cty[15], crs[10], name[50];
    int i, rno, op;
    system("cls");

    header("<<Students Data>>");
    title();

    for (i = 0; i < 3; i++)
    {
        printf("\n%3d %-10s %-10s %-10s %-5s %-2c", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
    }

    printf("\n\n Enter 1 For course wise detail \n Enter 2 for city wise detail");
    scanf("%d", &op);

    for (i = 0; i < 2; i++)
    {
        if (op == 1)
        {
            system("cls");
            header("<<Course Wise>>");
            printf("Enter the course: ");
            gets(crs);
            title();
            for (i = 0; i < 3; i++)
            {
                if (strcmpi(a[i].course, crs) == 0)
                {
                    printf("\n%3d %-10s %-10s %-10s %-5s %-2c", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
        }
        else if (op == 2)
        {
            system("cls");
            header("<<City Wise>>");
            printf("Enter the city: ");
            gets(cty);
            title();
            for (i = 0; i < 3; i++)
            {
                if (strcmpi(a[i].city, cty) == 0)
                {
                    printf("\n%8d %-10s %-10s %-10s %-6s %-3c", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
        }
    }
}

void line(int l, char ch)
{
    int i;
    printf("\n");
    for (i = 0; i < l; i++)
    {
        printf("%c", ch);
    }
}

void centre(char str[])
{
    int i;
    for (i = 0; i < 40 - strlen(str) / 2; i++)
    {
        printf(" ");
    }
    printf("%s\n", str);
}

void header(char str[])
{
    line(80, 241);
    centre(str);
    line(80, 241);
}

void title(){
    printf("%8s %-10s %-10s %-10s %-6s %-3s","Roll No","F Name","M Name","L Name","City","Course","Sex");
}