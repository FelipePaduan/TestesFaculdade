#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertido(char * p, int tam)
{
    int i =0;
    for(i=tam-1;i>=0;i--)
    {
        if(p[i] != '\0')
        {
            printf("%c", p[i]);
        }
    }
}

int main()
{
    char * p;
    int tam = 0;
    p = (char*) calloc(50, sizeof(char));
    fgets(p, 50, stdin);
    tam = strlen(p);
    invertido(p,tam);
    return 0;
}

