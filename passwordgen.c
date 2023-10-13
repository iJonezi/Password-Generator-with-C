#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// initializing values
bool letter;
bool number;
bool special;
bool directory;

// initialize functions
int letternumbspecgen(void);
int letternumbergen(void);
int lettergen(void);
int numbergen(void);
void directory(char *path);

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
        printf("Letters will be used!\n");
        letter = true; // yes
        word[0] = '\0';
    }
    else if (strcmp(word, "n") == 0 || strcmp(word, "no") == 0)
    {
        printf("Letters will not be used!\n");
        letter = false; // no
        word[0] = '\0';
    }
    else
    {
        printf("Error, try again, please reply with either a Yes or No\n");
        return 1; // did not say yes or no
    }

    printf("Would you like to use Numbers? (y/n): ");
    scanf("%s", &word);

    if (strcmp(word, "y") == 0 || strcmp(word, "yes") == 0)
    {
        printf("Numbers will be used!\n");
        number = true; // yes
        word[0] = '\0';
    }
    else if (strcmp(word, "n") == 0 || strcmp(word, "no") == 0)
    {
        printf("Numbers will not be used!\n");
        number = false; // no
        word[0] = '\0';
    }
    else
    {
        printf("Error, try again, please reply with either a Yes or No\n");
        return 1; // did not say yes or no
    }

    printf("Would you like to use Special Characters? (@, #, $, etc) (y/n): ");
    scanf("%s", &word);

    if (strcmp(word, "y") == 0 || strcmp(word, "yes") == 0)
    {
        printf("Special Characters will be used!\n");
        special = true; // yes
        word[0] = '\0';
    }
    else if (strcmp(word, "n") == 0 || strcmp(word, "no") == 0)
    {
        printf("Special Characters will not be used!\n");
        special = false; // no
        word[0] = '\0';
    }
    else
    {
        printf("Error, try again, please reply with either a Yes or No\n");
        return 1; // did not say yes or no
    }

    if (letter && number)
    {
        letternumbgen();
    }
    if (letter && !number)
    {
        lettergen();
    }
    if (!letter && number)
    {
        numbergen();
    }

    return 0;
}
// generate if letter + number + special combiniation
int letternumbspecgen(void)
{
    return;
}

// generate if letter + number combination
int letternumbgen(void)
{
    return;
}
// generate if letter only
int lettergen(void)
{
    return;
}
// generate if number only
int numbergen(void)
{
    return;
}

void directory(char *path)
{
    // char *dir = malloc(path);
    // free(dir);
    return;
}