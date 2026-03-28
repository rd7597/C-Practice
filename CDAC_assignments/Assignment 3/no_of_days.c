#include <stdio.h>

int main() {
    int dd,mm,yyyy;
    printf("Enter the date in dd/mm/yyyy format:\n");
    scanf("%d/%d/%d", &dd, &mm, &yyyy); 

    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    for (int i = 0; i < mm - 1; i++) {
        total_days += days_in_month[i];
    }
    total_days += dd;
    if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0)) {
        if (mm > 2) {
            total_days += 1; // Add one day for leap year
        }
    }  
    printf("The number of days from the beginning of the year to %02d/%02d/%04d is: %d\n", dd, mm, yyyy, total_days);
    

    return 0; 
}