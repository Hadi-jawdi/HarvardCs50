#include <stdio.h>
#include <string.h>
#include "cs50.h"
int main(void)
{
    FILE *books = fopen("books.txt","w");
    string text = get_string("Enter your text to be saved in the file");
    int len = strlen(text);
    int counter  = 0;
    while (counter < len)
        {
            fputc(text[counter],books);
            counter++;
        }

}
