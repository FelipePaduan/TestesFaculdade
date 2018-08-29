#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct monstrao
{
    char nome[21];
    int id, lvl, hp, atk, def;
};

int main()
{
    int i = 0, qtd = 0;
    scanf("%d", &qtd);
    getchar();
    struct monstrao monstro[qtd];
    for(i=0;i<qtd;i++)
    {
        fgets(monstro[i].nome, 21, stdin);
        scanf("%d", &monstro[i].id);
        scanf("%d", &monstro[i].lvl);
        scanf("%d", &monstro[i].hp);
        scanf("%d", &monstro[i].atk);
        scanf("%d", &monstro[i].def);
        getchar();
    }
    for(i=0;i<qtd;i++)
    {
        printf("Nome: %s", monstro[i].nome);
        printf("ID: %d\n", monstro[i].id);
        printf("Level: %d\n", monstro[i].lvl);
        printf("Vida: %d\n", monstro[i].hp);
        printf("Ataque: %d\n", monstro[i].atk);
        printf("Defesa: %d\n", monstro[i].def);
    }
}
