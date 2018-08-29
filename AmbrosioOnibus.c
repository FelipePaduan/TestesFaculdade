#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

struct onibus
{
    char nome[100], origem[100], destino[100], data[20], hora[15];
    int passagem, poltrona, idade;
};

int main()
{
    int i = 0, qtd = 0;
    float media_idade = 0;
    float media_ceil = 0;
    struct onibus lista[44];
    while(1)
    {
        scanf("%d", &lista[i].passagem);
        getchar();
        if(lista[i].passagem != -1)
        {
            fgets(lista[i].data, 100, stdin);
            fgets(lista[i].origem, 100, stdin);
            fgets(lista[i].destino, 100, stdin);
            fgets(lista[i].hora, 100, stdin);
            scanf("%d", &lista[i].poltrona);
            scanf("%d", &lista[i].idade);
            getchar();
            fgets(lista[i].nome, 100, stdin);
            i++;
            qtd++;
        }
        else
        {
            break;
        }
    }
    for(i=0;i<qtd;i++)
    {
        media_idade = media_idade + lista[i].idade;
    }
    media_idade = media_idade/qtd;
    media_ceil = ceil(media_idade);
    printf("%f", media_idade);
    for(i=0;i<qtd;i++)
    {
        if(lista[i].idade > media_ceil)
        {
            if(lista[i].poltrona % 2 == 0)
            {
                printf("%s", lista[i].nome);
            }

        }
    }
    return 0;
}

