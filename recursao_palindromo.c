#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int palindromo(char *p, int inicio, int fim)
{
    if(inicio == fim)
    {
        if(p[inicio] == p[fim])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(inicio == fim - 1)
    {
        if(p[inicio] == p[fim])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(p[inicio] == p[fim])
        {
            return palindromo(p, inicio + 1, fim - 1);
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    char string[25], retorno = 0;
    int tam = 0;
    fgets(string, 100, stdin);
    tam = strlen(string);
    printf("%d", palindromo(string, 0, tam - 1));
}
