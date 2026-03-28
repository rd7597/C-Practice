#include <stdio.h>

float avg(int a, int b, int c);

float avg(int a, int b, int c){
    return (a + b + c) / 3.0;
}

int main(){
    int a=5,b=4,c=10;
    printf("Avrage of Three Numbers:%f", avg(a, b, c));

    return 0; 
}