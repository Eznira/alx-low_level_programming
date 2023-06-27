#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    int i;

    /* Generate a random password */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33;  /* ASCII characters between '!' (33) and '~' (126) */
    }
    password[i] = '\0';

    printf("%s", password);

    return 0;
}
