#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    FILE *users = fopen("Users.csv", "a");
    int counter;
    printf("Counter :");
    scanf("%i",&counter);

    while (counter < 10)
    {
        char *user_name = get_string("UserName: ");
        char *user_password = get_string("Password: ");
        fprintf(users, "UserName is :%s \n   , UserPassword is  %s \n",user_name, user_password);
        counter++;
    }
    fclose(users);


}