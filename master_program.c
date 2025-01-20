#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Define the structure and typedef
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

// Initializing the array of structures with data
dta a[3] = {
    {1, "Tanmay", "Amar", "Naik", "Samrawadi", "BCA", 'M'},
    {2, "Chirag", "Dilip", "Patel", "Vijalpor", "BBA", 'M'},
    {3, "Mahek", "Niraj", "Naik", "Gandevi", "BCom", 'F'}};

// Function prototypes for decorative parts
void displayMenu();
void printHeader();
void printFooter();
void printTableHeader();

int main()
{
    int choice, rno;
    char gend, cty[15], crs[10];

    do
    {
        printHeader();
        displayMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Display all records
            system("cls");
            printTableHeader();
            for (int i = 0; i < 3; i++)
            {
                printf("%-5d %-10s %-10s %-10s %-15s %-10s %-5c\n", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
            }
        }
        else if (choice == 2)
        {
            // Search by roll number
             system("cls");
            printf("Enter roll number: ");
            scanf("%d", &rno);
            printTableHeader();
            for (int i = 0; i < 3; i++)
            {
                if (a[i].roll == rno)
                {
                    printf("%-5d %-10s %-10s %-10s %-15s %-10s %-5c\n", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                    break;
                }
            }
        }
        else if (choice == 3)
        {
            // Search by gender
             system("cls");
            printf("Enter gender (M/F): ");
            scanf(" %c", &gend);  // Note the space before %c to consume any leftover newline character
            gend = toupper(gend); // Convert to uppercase for case-insensitive comparison
            printTableHeader();
            for (int i = 0; i < 3; i++)
            {
                if (toupper(a[i].gen) == gend)
                {
                    printf("%-5d %-10s %-10s %-10s %-15s %-10s %-5c\n", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
        }
        else if (choice == 4)
        {
            // Search by city
             system("cls");
            printf("Enter city: ");
            scanf("%s", cty);
            for (int i = 0; cty[i]; i++)
            {
                cty[i] = tolower(cty[i]);
            }
            printTableHeader();
            for (int i = 0; i < 3; i++)
            {
                char cityLower[15];
                strcpy(cityLower, a[i].city);
                for (int j = 0; cityLower[j]; j++)
                {
                    cityLower[j] = tolower(cityLower[j]);
                }
                if (strcmp(cityLower, cty) == 0)
                {
                    printf("%-5d %-10s %-10s %-10s %-15s %-10s %-5c\n", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
        }
        else if (choice == 5)
        {
            // Search by course
             system("cls");
            printf("Enter course: ");
            scanf("%s", crs);
            printTableHeader();
            for (int i = 0; i < 3; i++)
            {
                if (strcmpi(a[i].course, crs) == 0)
                {
                    printf("%-5d %-10s %-10s %-10s %-15s %-10s %-5c\n", a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
        }
        else if (choice == 0)
        {
            printf("Exiting the program.\n");
            printFooter();
            exit(0);
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }

        printFooter();
    } while (choice != 0);

    return 0;
}

void displayMenu()
{
    printf("\nMenu:\n");
    printf("1. Display all records\n");
    printf("2. Search by roll number\n");
    printf("3. Search by gender\n");
    printf("4. Search by city\n");
    printf("5. Search by course\n");
    printf("0. Exit\n");
}

void printHeader()
{
    printf("\n====================\n");
    printf("Welcome to the Menu\n");
    printf("====================\n");
}

void printFooter()
{
    printf("====================\n");
    printf("Thank you!\n");
    printf("====================\n");
}

void printTableHeader()
{
    printf("\n%-5s %-10s %-10s %-10s %-15s %-10s %-5s\n", "Roll", "First Name", "Middle Name", "Last Name", "City", "Course", "Gender");
    printf("-------------------------------------------------------------------------------------\n");
}