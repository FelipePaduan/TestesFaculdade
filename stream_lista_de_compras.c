#include <stdio.h>
#include <stdlib.h>

void cadastro(char *str)
{
    char *p;
    FILE *compras = fopen("compras.txt", "a");
    fprintf(p, "%s", str);
    fclose("compras,txt");
}

void visualizar()
{
    char *p;
    FIEL *compras = fopen("compras.txt", "r");
    printf("%s", p);
    fclose("compras.txt");
}

int main()
{
    FILE *compras;
    int menu = 0;
    printf("1 - Cadastrar item\n 2 - Visualizar lista\n");
    scanf("%d", menu);
    system("cls");
    switch(menu)
    {
        case 1:
            char item[100];
            fgets(item, 100, stdin);
            system("cls");
            cadastro(item);
            break;
        case 2:
            system("cls");
            visualizar();
            break;
    }
    return 0;
}
