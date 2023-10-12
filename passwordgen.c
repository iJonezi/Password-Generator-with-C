#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

bool letter = false;

int main(void)
{
    // greet user and prompt first question
    printf("Let's Make a Password!\n");
    // establish memory for responses
    char word[4];
    // ask user if they want letters
    printf("Would you like to use Letters? (y/n): ");
    scanf("%s", &word);

    if (strcmp(word, "y") == 0 || strcmp(word, "yes") == 0)
    {
        printf("Letters will be used!");
        letter = true; // yes
        return 0;
    }
    else if (strcmp(word, "n") == 0 || strcmp(word, "no") == 0)
    {
        printf("Letters will not be used!");
        letter = false; // no
        return 0;
    }
    else
    {
        printf("Error, try again, please reply with either a Yes or No\n");
        return 1; // did not say yes or no
    }
    return 0;
}