#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contador_de_pares(char *num, int tam, int cont, int pares)
{
    int cast = 0;
    cast = (int) num[cont];
    if(cont != tam)
    {
        if(cast % 2 == 0)
        {
            pares++;
            cont++;
            return contador_de_pares(num, tam, cont, pares);
        }
        else
        {
            cont++;
            return contador_de_pares(num, tam, cont, pares);
        }
    }
    else
    {
        return pares;
    }

}
int main()
{
    char num[100];
    int tam = 0;
    scanf("%s", &num);
    tam = strlen(num);
    printf("%d", contador_de_pares(num, tam, 0, 0));
    return 0;
}
