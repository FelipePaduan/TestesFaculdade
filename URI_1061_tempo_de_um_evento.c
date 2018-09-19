#include <stdio.h>

int main()
{
    char dia1[10], horario1[20];
    char dia2[10], horario2[20];
    char anula;
    int dia_inicio = 0, dia_fim = 0, dia_total = 0;
    int hora_inicio = 0, minuto_inicio = 0, segundo_inicio = 0;
    int hora_fim = 0, minuto_fim = 0, segundo_fim = 0;
    int hora_total = 0, minuto_total = 0, segundo_total = 0;
    scanf("%s", &dia1);
    scanf("%s", &dia2);
    dia_inicio = (int) dia1[5];
    dia_fim = (int) dia2[5];
    scanf("%d %s %d %s %d", &hora_inicio, &anula, &minuto_inicio, &anula, &segundo_inicio);
    scanf("%d %s %d %s %d", &hora_fim, &anula, &minuto_fim, &anula, &segundo_fim);
    dia_total = dia_fim - dia_inicio;
    if(dia_inicio != dia_fim)
    {
        hora_total = 24 - (hora_fim - hora_inicio);
    }
    printf("%d dia(s)\n %d hora(s)\n %d minuto(s)\n %d segundo(s)", );
    return 0;
}
