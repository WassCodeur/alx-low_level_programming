#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int hachage(char *chaine){
    int i = 0, nombreHache = 0;

    for (i = 0 ; chaine[i] != '\0' ; i++)
    {
        nombreHache += chaine[i];
    }
    nombreHache %= 100;

    return nombreHache;
    }
int main(void)
{
printf("%d\n", hachage("Hel"));
printf("%d", hachage("Cau"));
 
}
