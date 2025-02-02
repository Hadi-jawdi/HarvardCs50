#include <stdio.h>
#include <string.h>
#include "cs50.h"


int main(void)
{ 
    
    //  
    string user_name = get_string("UserName: ");
    printf("%s\n",user_name);
    // print the location of this string in the meomory
    printf("%p\n", user_name);
    // printf the location of it's charctes 
    // & give me the location of .. 

    printf("%p\n",&user_name[0]);
    printf("%p\n",&user_name[1]);
}


