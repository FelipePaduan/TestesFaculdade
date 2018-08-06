#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criptografia(char * a, int tam, char b, char c)
{
    int i = 0;
    for(i=0;i<tam;i++)
    {
        if(a[i] == b)
        {
            a[i] = c;
        }
    }

}

int main()
{
    char string[20];
    char letra, cripto;
    int tam = 0;
    fgets(string, 20, stdin);
    scanf("%c %c", &letra, &cripto);
    tam = strlen(string);
    criptografia(&string, tam, letra, cripto);
    puts(string);
    return 0;
}
