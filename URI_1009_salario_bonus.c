#include <stdio.h>

int main()
{
    char nome[50];
    double salario = 0, fixo = 0, vendas = 0;
    scanf("%s", &nome);
    scanf("%lf", &fixo);
    scanf("%lf", &vendas);
    salario = fixo + (vendas*15)/100;
    printf("TOTAL = R$ %.2lf\n", salario);
    return 0;
}
