#include <stdio.h>

int main() {
    int i,j;
    int r,c;

    printf("Enter No of Rows:\n");
    scanf("%d",&r);
    printf("Enter No of coloums:\n");
    scanf("%d",&c);

    int arr[r][c];
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}