// Atividade 2

#include <stdio.h>

#define MAX_lOOP 3

int main()
{
    int i = 1;
    int j = 1;
    int k = 1;

    char *alfabeto = "xbdc";

    for (i; i <= MAX_lOOP; i++)
    {
        printf("\nLoop i: %d", i);

        for (j; j <= MAX_lOOP; j++)
        {
            printf("\n  Loop j: %d", j);
            for (k; k <= MAX_lOOP; k++)
            {
                printf("\n      Loop k: %d", k);
            };
        };
    }
}