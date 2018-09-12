#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sucessiva(int result, int num1, int num2, int cont)
{
    if(cont != num2)
    {
        result += num1;
        cont++;
        return sucessiva(result, num1, num2, cont);
    }
    else
    {
        return result;
    }
}

int main()
{
	int num1 = 0, num2 = 0;
	int total = 0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d", sucessiva(total, num1, num2, 0));
	return 0;
}
