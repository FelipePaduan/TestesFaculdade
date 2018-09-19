#include <string.h>
#include <stdio.h>

int main()
{
    char dia1[10];
    char dia2[10];
    char anula;
    int dia_inicio = 0, dia_fim = 0, dia_total = 0, total = 0;
    int hora_inicio = 0, minuto_inicio = 0, segundo_inicio = 0;
    int hora_fim = 0, minuto_fim = 0, segundo_fim = 0;
    int hora_total = 0, minuto_total = 0, segundo_total = 0;
    fgets(dia1, 10, stdin);
    getchar();
    scanf("%d %s %d %s %d", &hora_inicio, &anula, &minuto_inicio, &anula, &segundo_inicio);
    fgets(dia2, 10, stdin);
    getchar();
    scanf("%d %s %d %s %d", &hora_fim, &anula, &minuto_fim, &anula, &segundo_fim);
    dia_inicio = (int) dia1[5];
    dia_fim = (int) dia2[5];
    hora_total = hora_fim - hora_inicio;
    hora_total = (24 + hora_total) * 3600;
    if(hora_fim > hora_inicio)
    {
        dia_total = (dia_fim - dia_inicio) * 24 * 3600;
    }
    else
    {
        dia_total = (dia_fim - dia_inicio - 1) * 24 * 3600;
    }
    minuto_total = minuto_fim - minuto_inicio;
    if(minuto_total >= 0)
    {
        minuto_total = minuto_total * 60;
    }
    else if(minuto_total < 0)
    {
        minuto_total = (60 - minuto_total)*60;
    }
    segundo_total = segundo_fim - segundo_inicio;
    if(segundo_total < 0)
    {
        segundo_total = (60 - segundo_total);
    }
    total = dia_total + hora_total + minuto_total + segundo_total;
    dia_total = total / 86400;
    total = total % 86400;
    hora_total = total / 3600;
    total = total % 3600;
    minuto_total = total / 60;
    total = total % 60;
    segundo_total = total;
    printf("%d dia(s)\n %d hora(s)\n %d minuto(s)\n %d segundo(s)", dia_total, hora_total, minuto_total, segundo_total);
    return 0;
}
