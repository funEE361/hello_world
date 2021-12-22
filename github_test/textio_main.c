/***********************************************************
textio_main.c  - this program gets keyboard input from a user
and displays that info to the screen, both forward and backward. 
This program demonstrates standard input & output as well as the
use of user-defined functions.

Date        Author          Revision
12/18/21    D. McLaughlin   initial code creation
**************************************************************/

#include<stdio.h>
#include<string.h>

const char * getlastname(void); //function that gets user's last name
//void nameplay(char *); //function that prints name forward and backward

int main(void)
{
    char first_name[10], last_name[10], full_name[20];
    printf("Please enter your first name ");
    scanf("%s", first_name);
    printf("Your first name is %s \n",first_name);
   &last_name = *getlastname();
   printf("Your last name is %s", last_name);
   // full_name = strcat(first_name, last_name);
    //printf("Hello, %s", full_name);
   // printf("Hello, %s %s", first_name, last_name);

}


const char * getlastname(void)
{
   char last_name[10];
   printf("Please enter your last name ");
    scanf("%s", last_name);
    return (last_name);
}
