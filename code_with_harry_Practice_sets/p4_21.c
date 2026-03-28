#include <stdio.h>

int main() {
    float radius,pi=3.14;
    printf("Enter radius of circle:\n");
    scanf("%f",&radius);

    printf("The perimeter of the circle is:%.2f\n",2*pi*radius);
    printf("The Area of the circle is:%.2f\n",pi*radius*radius);
    

    return 0;
}