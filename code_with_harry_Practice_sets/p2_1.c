#include <stdio.h>

int main() {
    printf("The Size of int is:%lu bytes \n",sizeof(int));
    printf("The Size of char is:%lu bytes \n",sizeof(char));
    printf("The Size of float is:%lu bytes \n",sizeof(float));
    printf("The Size of double is:%lu bytes \n",sizeof(double));
    printf("The Size of long is:%lu bytes \n",sizeof(long));
    printf("The Size of short is:%lu bytes \n",sizeof(short));
    printf("The Size of long long is:%lu bytes \n",sizeof(long long));
    printf("The Size of long double is:%lu bytes \n",sizeof(long double));
    printf("The Size of void is:%lu bytes \n",sizeof(void));
    printf("The Size of size_t is:%lu bytes \n",sizeof(size_t));
    printf("The Size of wchar_t is:%lu bytes \n",sizeof(wchar_t));
    printf("The Size of bool is:%lu bytes \n",sizeof(_Bool));
    printf("The Size of int* is:%lu bytes \n",sizeof(int*));
    printf("The Size of char* is:%lu bytes \n",sizeof(char*));
    printf("The Size of float* is:%lu bytes \n",sizeof(float*));
    printf("The Size of double* is:%lu bytes \n",sizeof(double*));
    printf("The Size of long* is:%lu bytes \n",sizeof(long*));
    printf("The Size of short* is:%lu bytes \n",sizeof(short*));
    printf("The Size of long long* is:%lu bytes \n",sizeof(long long*));
    printf("The Size of long double* is:%lu bytes \n",sizeof(long double*));
    printf("The Size of void* is:%lu bytes \n",sizeof(void*));

    return 0;
}