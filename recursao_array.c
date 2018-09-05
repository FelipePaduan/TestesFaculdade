#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int soma_recursiva(int *p, int i, int tam)
{
    if(i == tam - 1)
    {
        return p[i];
    }
    else
    {
        return p[i]+soma_recursiva(p, i + 1, tam);
    }
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tam = 10, pos = 0, result = 0, num = 0;
    result = soma_recursiva(array, pos, tam);
    printf("%d", result);
    return 0;
}
