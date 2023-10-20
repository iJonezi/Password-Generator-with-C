#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// initializing values
bool letter;
bool number;
bool special;
bool directory;

char letters[] = "abcdefghijklmnopqrstuvwxyz";
char numbers[] = "0123456789";
char specials[] = "!@#$^&*?";

// initialize functions
int letternumbspecgen(int count);
int letternumbergen(int count);
int lettergen(int count);
int numbergen(int count);
void savepath(char *path);

char password[10];

int main(void)
{
    srand((unsigned int)(time(NULL)));

    int count = 0;
    // greet user and prompt first question
    printf("Let's Make a Password!\n");
    // establish memory for responses
    char word[4];
    char len[2];
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

    printf("How long would you like this password to be? (0 - 10): ");
    scanf("%s", &len);

    if (strcmp(len, "0") == 0 || strcmp(len, "1") == 0 || strcmp(len, "2") == 0 ||
        strcmp(len, "3") == 0 || strcmp(len, "4") == 0 || strcmp(len, "5") == 0 ||
        strcmp(len, "6") == 0 || strcmp(len, "7") == 0 || strcmp(len, "8") == 0 ||
        strcmp(len, "9") == 0 || strcmp(len, "10") == 0)
    {
        printf("Creating a password with %s characters...\n", len);
        int number = atoi(len);
        printf("The number is %i\n", number);
        count = number;
        len[0] = '\0';
    }
    else
    {
        printf("Error, try again, please include a number from 0 to 10\n");
        return 1; // did not supply a number
    }

    if (letter && number)
    {
        letternumbergen(count);
    }
    if (letter && !number)
    {
        lettergen(count);
    }
    if (!letter && number)
    {
        numbergen(count);
    }

    return 0;
}

// generate if letter + number + special combiniation
int letternumbspecgen(int count)
{
    return 0;
}

// generate if letter + number combination
int letternumbergen(int count)
{
    return 0;
}
// generate if letter only
int lettergen(int count)
{
    int i = 0;
    for (i = 0; i < count; i++)
    {
        password[i] = letters[rand() % 26];
        printf("%c", password[i]);
    }
}
// generate if number only
int numbergen(int count)
{
    return 0;
}

void savepath(char *path)
{
    // char *dir = malloc(path);
    // free(dir);
}