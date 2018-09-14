#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int MDC(int maior, int menor)
{
    int div = 0;
    if(maior % menor == 0)
    {
        return menor;
    }
    else
    {
        div = maior % menor;
        return MDC(menor, div);
    }
}

int main()
{
    int num1 = 0, num2 = 0;
    int maior = 0, menor = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if(num1 > num2)
    {
        maior = num1;
        menor = num2;
    }
    else
    {
        maior = num2;
        menor = num1;
    }
    printf("%d", MDC(maior, menor));
	return 0;
}
