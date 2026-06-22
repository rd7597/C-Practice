#include <stdio.h>

int main() {
    int arr[]={1,22,3,55,10,25,20,100,};
    int *p=arr;

    printf("%d\n",*arr); //1
    printf("%d\n",*(arr+1)); //22
    printf("%d\n",*p); //1
    printf("%d\n",*p+1); //2
    printf("%d\n",*(p+1)); //22
    printf("%d\n",*p++); //1
    printf("%d\n",*++p); //3
    printf("%d\n",((*p)+1)); //4
    printf("%d\n",(*p)++); //3
    printf("%d\n",*p+2);//6
    printf("%d\n",*(p+2));//10
    printf("%d\n",*p--);//4
    printf("%d\n",*p);//22
    return 0;
}