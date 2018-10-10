#include <stdlib.h>
#include <stdio.h>

struct jogos
{
    char id;
    char nome[50];
    char tipo[50];
    char plataforma[50];
};

void cadastro(struct dados)
{
    FILE arquivo = fopen("arquivo.txt". "a");
    fprintf(arquivo, "%s", dados);
    fclose("arquivo.txt");
    system("cls");
}

int main()
{
struct jogos dados[];
int menu;
FILE *arquivo;
printf("1 - Cadastrar\n2 - Listar\n 3 - Sair\n");
scanf("%d", &menu);
do{
    switch(menu)
        {
            case 1:
                system("cls");
                printf("**CADASTRO**\n");
                printf("ID:")
                scanf("%c", &dados.id);
                printf("\nTítulo:")
                fgets(dados.nome, 50, stdin);
                printf("\nGênero:")
                fgets(dados.tipo, 50, stdin);
                printf("\nPlataforma:")
                fgets(dados.plataforma, 50, stdin);
                cadastro(dados);
                break;
            case 2:
                system("cls");
                listar();
                break;
        }
}while(menu!=3);
}
