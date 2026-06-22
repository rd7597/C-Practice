#include <stdio.h>

int main()
{
    int n;
    printf("Enter No. of rows:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int p=i;
        for (int j = 1; j <=i; j++)
        {
            printf("%d ", p++);
        }
        p=p-2;
        for(int j=1;j<=i-1;j++){
            printf("%d ",p--);
        }
        printf("\n");
    }

    return 0;
}