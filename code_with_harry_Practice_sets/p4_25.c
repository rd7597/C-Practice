#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5;
    float percentage;

    printf("Enter marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    percentage=(m1+m2+m3+m4+m5)/5.0;
    printf("The total percentage is: %.2f\n",percentage);
    return 0;
}