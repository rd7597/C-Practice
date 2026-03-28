#include <stdio.h>

int main() {
    float c,f; //F=(9/5)*C+32

    printf("Enter the temperature in Celsius:\n");
    scanf("%f",&c);

    f=(9.0/5)*c+32;
    printf("The temperature in Fahrenheit is: %.2f\n",f);


    return 0;
}