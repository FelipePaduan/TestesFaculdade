#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int procurar(int *p, int i, int tam, int num)
{
    if(p[i] == num)
    {
        return i;
    }
    else
    {
        return procurar(p, i + 1, tam, num);
    }
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tam = 10, pos = 0, result = 0, num = 0;
    scanf("%d", &num);
    if(num <= 10)
    {
        result = procurar(array, pos, tam, num);
        printf("%d", result);
    }
    else
    {
        printf("So sei contar ate 10");
    }
    return 0;
}
