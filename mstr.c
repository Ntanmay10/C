#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct data
{
    int roll;
    char fname[20];
    char mname[20];
    char lname[20];
    char city[20];
    char course[10];
    char gen;
};

typedef struct data dta;

void toLowerCase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    dta a[3] = {{1, "Tanmay", "Amar", "Naik", "Samrawadi", "BCA", 'M'},
                {2, "Chirag", "Dilip", "Patel", "Vijalpor", "BBA", 'M'},
                {3, "Mahek", "Niraj", "Naik", "Gandevi", "BCom", 'F'}};
    int op, roll;
    char input[20];

    // Initial display
    printf("<< Students Data >>\n");
    printf("---------------------------------------------------------------\n");
    printf("Roll | First Name | Middle Name | Last Name | City | Course | Sex\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%3d | %-10s | %-10s | %-10s | %-10s | %-5s | %-1c\n",
               a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
    }

    do
    {
        printf("\n\nChoose an option: \n");
        printf("1. View all records\n");
        printf("2. Search by name\n");
        printf("3. Search by gender\n");
        printf("4. Search by course\n");
        printf("5. Search by city\n");
        printf("6. Search by roll number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        getchar(); // Consume the newline character left in the input buffer

        switch (op)
        {
        case 1:
            printf("<< All Students >>\n");
            printf("---------------------------------------------------------------\n");
            printf("Roll | First Name | Middle Name | Last Name | City | Course | Sex\n");
            printf("---------------------------------------------------------------\n");
            for (int i = 0; i < 3; i++)
            {
                printf("%3d | %-10s | %-10s | %-10s | %-10s | %-5s | %-1c\n",
                       a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
            }
            break;
        case 2:
            printf("Enter the name to search (first, middle, or last): ");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = '\0';
            toLowerCase(input);
            printf("<< Search by Name >>\n");
            printf("---------------------------------------------------------------\n");
            printf("Roll | First Name | Middle Name | Last Name | City | Course | Sex\n");
            printf("---------------------------------------------------------------\n");
            for (int i = 0; i < 3; i++)
            {
                char fname[20], mname[20], lname[20];
                strcpy(fname, a[i].fname);
                strcpy(mname, a[i].mname);
                strcpy(lname, a[i].lname);
                toLowerCase(fname);
                toLowerCase(mname);
                toLowerCase(lname);
                if (strstr(fname, input) || strstr(mname, input) || strstr(lname, input))
                {
                    printf("%3d | %-10s | %-10s | %-10s | %-10s | %-5s | %-1c\n",
                           a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
            break;
        case 3:
            printf("Enter the gender to search (M/F): ");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = '\0';
            printf("<< Search by Gender >>\n");
            printf("---------------------------------------------------------------\n");
            printf("Roll | First Name | Middle Name | Last Name | City | Course | Sex\n");
            printf("---------------------------------------------------------------\n");
            for (int i = 0; i < 3; i++)
            {
                if (tolower(a[i].gen) == tolower(input[0]))
                {
                    printf("%3d | %-10s | %-10s | %-10s | %-10s | %-5s | %-1c\n",
                           a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
            break;
        case 4:
            printf("Enter the course to search: ");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = '\0';
            toLowerCase(input);
            printf("<< Search by Course >>\n");
            printf("---------------------------------------------------------------\n");
            printf("Roll | First Name | Middle Name | Last Name | City | Course | Sex\n");
            printf("---------------------------------------------------------------\n");
            for (int i = 0; i < 3; i++)
            {
                char course[10];
                strcpy(course, a[i].course);
                toLowerCase(course);
                if (strcmp(course, input) == 0)
                {
                    printf("%3d | %-10s | %-10s | %-10s | %-10s | %-5s | %-1c\n",
                           a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
            break;
        case 5:
            printf("Enter the city to search: ");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = '\0';
            toLowerCase(input);
            printf("<< Search by City >>\n");
            printf("---------------------------------------------------------------\n");
            printf("Roll | First Name | Middle Name | Last Name | City | Course | Sex\n");
            printf("---------------------------------------------------------------\n");
            for (int i = 0; i < 3; i++)
            {
                char city[20];
                strcpy(city, a[i].city);
                toLowerCase(city);
                if (strcmp(city, input) == 0)
                {
                    printf("%3d | %-10s | %-10s | %-10s | %-10s | %-5s | %-1c\n",
                           a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
            break;
        case 6:
            printf("Enter the roll number to search: ");
            scanf("%d", &roll);
            getchar(); // Consume the newline character left in the input buffer
            printf("<< Search by Roll Number >>\n");
            printf("---------------------------------------------------------------\n");
            printf("Roll | First Name | Middle Name | Last Name | City | Course | Sex\n");
            printf("---------------------------------------------------------------\n");
            for (int i = 0; i < 3; i++)
            {
                if (a[i].roll == roll)
                {
                    printf("%3d | %-10s | %-10s | %-10s | %-10s | %-5s | %-1c\n",
                           a[i].roll, a[i].fname, a[i].mname, a[i].lname, a[i].city, a[i].course, a[i].gen);
                }
            }
            break;
        case 7:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (op != 7);

    return 0;
}