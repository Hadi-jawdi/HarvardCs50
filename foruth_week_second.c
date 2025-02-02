
#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <stdlib.h>


int main(void)
{
    // using strings with out of the string leyword or variable 
    char *username = get_string("Enter UserName:");
    printf("%c \n",username[0]);
    // iterate over the username and print the position of it's characters
    int len = strlen(username);
    int counter = 0;
    while (counter < len)
    {
        printf("%i position    >>> :   %p \n",counter,&username[counter]);
        counter++;
    }
    // using malloc allocating space for string
    char *examp = get_string("Value:");
    char *allocated_m = malloc(strlen(examp)+1);  // +1 for \0 
    // i can use for loop to copy  or replace even
    for (int i = 0, len = strlen(examp); i < len; i++)
    {
        allocated_m[i] = examp[i];  
    }
    // using while for printign 
    int counter_m = 0;
    int len_m = strlen(allocated_m);
    while (counter_m < len_m)
    {
        printf("%c \n", allocated_m[counter_m]);
        counter_m ++;

    }
    //  the process of copying or assiging a variable finished. 
    // Don't forget to free the space as well 
    // free(allocated_m);
}
