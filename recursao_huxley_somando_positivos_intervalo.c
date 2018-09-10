#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma(int numero, int inicio, int fim)
{
    if(inicio <= fim)
    {
        if(inicio > 0)
        {
            numero += inicio;
            return soma(numero, inicio + 1, fim);
        }
    }
    else
    {
        return numero;
    }
}


int main()
{
	int inicio = 0, fim = 0, temp = 0;
	int result = 0;
	scanf("%d", &inicio);
	scanf("%d", &fim);
	if(inicio > fim)
    {
        temp = fim;
        fim = inicio;
        inicio = temp;
    }
    printf("%d", soma(result, inicio, fim));
	return 0;
}
