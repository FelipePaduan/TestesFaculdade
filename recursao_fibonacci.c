#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int fibonacci(int pos)
{
    int i=0, fib=0, n=2;
    if(pos==0)
    {
        return 0;
    }
    else if(pos==1)
    {
        return 1;
    }
    else if(pos>1)
    {
        fib=fibonacci(pos-1)+fibonacci(pos-2);
        return fib;
    }
}

int main()
{
    int pos = 0, result = 0;
    scanf("%d", &pos);
    result = fibonacci(pos);
    printf("%d", result);
    return main(  );
    printf("\n-------------");
}
