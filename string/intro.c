// Group of characters is known as string
// String is always represented in double quotes ""
// "Tanmay Naik"
// Each string is terminated by a special character called null character
// Null character => '\0'
// Ascii value => Zero
// Its an invisible non prontable character

// "Tanmay" => "Tanmay\0"
// "A" => "A\0"

// Note: 'A' != "A"

// To display string %s type specifire is used
//  print("%s","Tanmay");
//  print("%s","Naik");

// To store a string variable a charcter array is to be declared
// Always allocate one extra place for terminator

// String can only be assigned once and that is at the time of decleration

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    // Example 1: Declaration, initialization & printing
    /*
    char str1 = "Tanmay";     // False
    char str2[2] = "Tanmay";  // False
    char str3[7];
    str3 = "Tanmay"  // False
    str3[7] = "Tanmay"  // False
    char str4[20] = "Tanmay"; // True
    system("cls");

    printf("%s", str4);
    */

    // Example 2: Scanning input from the user and welcoming the user
    /*
    char str[10];
    system("cls");

    printf("Enter your name: ");
    scanf("%s", str);
    //If we write our full name then only the first word will be taken as input as scanf() is terminated if a space is entered
    // If we write Tanmay A Naik, only Tanmay will be stored
    printf("Hello %s", str);
    */
}
