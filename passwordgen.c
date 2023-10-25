#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// initializing values
bool letter;
bool number;
bool directory;

char letters[] = "abcdefghijklmnopqrstuvwxyz";
char numbers[] = "0123456789";
char letnum[] = "abcdefghijklmnopqrstuvwxyz01234567890123456789";

// initialize functions
int lettergen(int desired);
int numbergen(int desired);
int letternumbergen(int desired);
void savepath(char *path);

char password[10];

int main(void)
{
    srand((unsigned int)(time(NULL)));

    int desired = 0;
    // greet user and prompt first question
    printf("Let's Make a Password!\n");
    // establish memory for responses
    char word[4];
    int len[20];

    // variable for length
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

    printf("How long would you like this password to be? (0 - 20): ");
    scanf("%i", &len);

    desired = *len;

    if (desired >= 0 && desired <= 20)
    {
        printf("Creating a password with %i characters...\n", desired);
    }
    else
    {
        printf("Error, try again, please include a number from 0 to 20\n");
        return 1; // did not supply a number
    }

    if (letter && number)
    {
        letternumbergen(desired);
    }
    if (letter && !number)
    {
        lettergen(desired);
    }
    if (number && !letter)
    {
        numbergen(desired);
    }

    return 0;
}

// generate if letter + number combination
int letternumbergen(int desired)
{
    int i = 0;
    for (i = 0; i < desired; i++)
    {
        password[i] = letnum[rand() % 46];
        printf("%c", password[i]);
    }
}
// generate if letter only
int lettergen(int desired)
{
    int i = 0;
    for (i = 0; i < desired; i++)
    {
        password[i] = letters[rand() % 26];
        printf("%c", password[i]);
    }
}
// generate if number only
int numbergen(int desired)
{
    int i = 0;
    for (i = 0; i < desired; i++)
    {
        password[i] = numbers[rand() % 10];
        printf("%c", password[i]);
    }
}

void savepath(char *path)
{
    // char *dir = malloc(path);
    // free(dir);
}