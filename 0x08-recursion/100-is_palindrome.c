#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = strlen(s);
    int left = 0, right = len - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return 0;
        left++;
        right--;
    }

    return 1;
}
