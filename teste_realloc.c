#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * p;
    int i = 0;
    p = (int *) malloc(5 * sizeof(int));
    printf("Primeira alloc\n");
    for(i = 0;i < 5;i++)
    {
        printf("%d\n", &p[i]);
    }
    p = (int *) realloc(p,10 * sizeof(int));
    printf("Segunda alloc\n");
    for(i = 0;i < 10;i++)
    {
        printf("%d\n", &p[i]);
    }
}
