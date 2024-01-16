// Question :
/*
1. Create a menu driven program that will create a student profile using array, functions and recursion.

*/

// Answer :
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define IT 60
#define CS 120
#define ME 25
#define EC 120

int main()
{
    char dept_type[2];
    char student_name[80];
    int it_roll[IT][sizeof(student_name)];
    int ces_roll[CS];
    int me_roll[ME];
    int ece_roll[EC];

    printf("\t\t\t Available Student seat list\n");
    printf("\t\t\t[IT], \t\t[%d]\n", IT);
    printf("\t\t\t[CSE], \t\t[%d]\n", CS);
    printf("\t\t\t[ME], \t\t[%d]\n", ME);
    printf("\t\t\t[ECE], \t\t[%d]\n", EC);
    printf("max Name size <%zu Character\n", sizeof(student_name));
    printf("Chose your Department : ");
    gets(dept_type);
    printf("you have Enter : [%s]\n", dept_type);

    if (strcmp(dept_type, "it") == 0)
    {
        printf("max size of the Student Name : %zu\n", sizeof(student_name));
        printf("Enter Student Name : ");
        gets(student_name);
        it_roll[0][0] =  2301,student_name;        

    }
    else
    {
        printf("department type : %s", dept_type);
    }

    // printf("");
    // printf("");
    // printf("");
    // printf("");
    // free(dept_type);
    // free(student_name);

    return 0;
}
