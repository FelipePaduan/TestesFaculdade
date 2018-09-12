#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int soma_recursiva(int * p, int tam, int pos)
{
    int soma_massa = 0;
    soma_massa = p[pos]+soma_recursiva(p,tam,pos+1);
}

int main()
{
    int tam = 0, i = 0, result = 0;
    int *p;
    int array[tam];
    for(i=0;i<tam;i++)
    {
        array[i] = i;
    }
    p = array;
    result = soma_recursiva(p,tam,0);
    printf("%d", result);
    return 0;
}
