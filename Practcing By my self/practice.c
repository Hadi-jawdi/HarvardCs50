


// write a program to get the name of the user and save it to an array
// then print out the names in the array if names are equal delete that element of an array



#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string user();
void iterate_array();
void print_love(string lover, int times);


// Array of the Users 
string Users[5];
int len_array = sizeof(Users) / sizeof(Users[0]);

int main(void)
{
    string lover = get_string("Lover_name: \n");
    int times = get_int("Times to repeat: \n");
    print_love(lover, times);
    // get the name of the user
    // string name = user();
    // printf("%s",name);
}
int counter = 0; 
string user()
{
    while (counter < len_array){
    string user_name = get_string("Name:");
    for (int x = 0, len = strlen(user_name); x < len; x++)
    {
        if (isdigit(user_name[x]))
        {
            printf("Invalid Username   %s\n",user_name);
            return user_name;
            break;
        }
    }
    for (int j = 0; j < len_array; j++)
    {
        Users[j] = user_name;

    }
     counter ++;
      return user_name;
    }
}
void iterate_array();

// get the length of an array iterate over array and check 
void iterate_array()
{
    for (int k = 0; k < len_array; k++)
    {
        printf("%s", Users[k]);
    }
}


void print_love(string lover, int times)
{
    int x = 0; 
    while (x < times)
    {
        printf("%i -: %s \n",x + 1,lover);
        x++;
    }
    
}