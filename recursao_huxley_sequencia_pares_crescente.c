#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sequencia_crescente(int num, int cont)
{
    if(cont != num)
    {
        if(cont % 2 == 0)
        {
            printf("%d\n", cont);
        }
        cont++;
        return sequencia_crescente(num, cont);
    }
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    sequencia_crescente(num, 0);
	return 0;
}
