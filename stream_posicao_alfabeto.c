#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, pos = 0;


    FILE *alfabeto;
    alfabeto = fopen("alfabeto.txt", "w");
    char string[] = "abcdefghijklmonpqrstuvwxyz";
    fprintf(alfabeto, "%s", string);
    fclose(alfabeto);

    alfabeto = fopen("alfabeto.txt", "r");
    char letra_escolhida;
    printf("Digite a posicao desejada:\n");
    scanf("%d", &pos);

    for(i=0;i<26;i++)
    {
        letra_escolhida = fgetc(alfabeto);
        if(letra_escolhida == EOF)
        {
            printf("Caractere nao encontrado");
        }
        else if(pos-1 == i)
        {
            printf("%c", letra_escolhida);
        }
    }


    fclose(alfabeto);
    return 0;
}
