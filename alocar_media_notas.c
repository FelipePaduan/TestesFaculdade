#include <stdio.h>
#include <stdlib.h>

float media_calc(float * notas)
{
    int i = 0;
    float media;
    for(i = 0;i < 5;i++)
    {
        media = media + notas[i];
    }
    media = media/5;
    return media;
}

int main()
{
    float * p;
    float media;
    int i = 0;
    p = (float *) malloc(5 * sizeof(float));
    for(i=0;i<5;i++)
    {
        scanf("%f", &p[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%f\n", p[i]);
    }
    media = media_calc(p);
    printf("%.2f", media);
    return 0;
}
