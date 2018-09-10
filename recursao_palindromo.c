#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int palindromo(char *p, int inicio, int fim)
{
    int tam = (fim - inicio) + 1;
    if(tam <= 1)
    {
        return 1;
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
    string[strlen(string)-1] = 0;
    tam = strlen(string);
    printf("%d", palindromo(string, 0, tam-1));
    return 0;
}
