#include <stdio.h>

int main()
{
    int a=2,b=1,c,d;
    c= a<b;
    d =(a>b) && (c<b);
    printf("%d %d %d %d\n", a,b,c,d);
    return 0;
}