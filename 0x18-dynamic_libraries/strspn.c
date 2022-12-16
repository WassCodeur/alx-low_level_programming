#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
    int i, j, k;

    i = 0;
    k = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                k++;
                break;
            }
            j++;
        }
        if (accept[j] == '\0')
            break;
        i++;
    }
    return (k);
}