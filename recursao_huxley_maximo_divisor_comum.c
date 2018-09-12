#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int MDC(int num1, int num2, int cont, int cont_mdc, int *mdcv, int maior)
{


        if(num1 % cont == 0 && num2 % cont == 0)
        {
            mdcv[cont/-mdc] = cont;
            cont++;
            cont_mdc++;
            return MDC(num1, num2 , cont, cont_mdc, mdcv)
        }
        else
        {
            return MDC(num1, num2 , cont, cont_mdc, mdcv)
        }
}

int main()
{
    int num1 = 0, num2 = 0;
    int mdcv[100];
    scanf("%d", &num1);
    scanf("%d", &num2);
    if(num1 > num2)
    {
        maior = num1;
    }
    else
    {
        maior = num2;
    }
    MDC(num1, num2, 0, 0, mdcv);
	return 0;
}
