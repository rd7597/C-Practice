#include <stdio.h>

int main()
{
    char input;
   
    float kmsToMiles = 0.621371;
    float inchesToFeet = 0.0833333;
    float cmsToInches = 0.393701;
    float poundsToKgs = 0.453592;
    float inchesToMeters = 0.0254;

    while(1)
    {
        printf("\nEnter the unit you want to convert\n K for kilometers to miles\n I for inches to feet\n C for centimeters to inches\n P for pounds to kilograms\n M for inches to meters\n Q to quit:\n ");
        scanf(" %c", &input);

        switch(input)
        {
            case 'K':
            case 'k':
            {
                float kms;
                printf("Enter distance in kilometers: ");
                scanf("%f", &kms);
                printf("%.2f kilometers is equal to %.2f miles.\n", kms, kms * kmsToMiles);
                break;
            }
            case 'I':
            case 'i':
            {
                float inches;
                printf("Enter length in inches: ");
                scanf("%f", &inches);
                printf("%.2f inches is equal to %.2f feet.\n", inches, inches * inchesToFeet);
                break;
            }
            case 'C':
            case 'c':
            {
                float cms;
                printf("Enter length in centimeters: ");
                scanf("%f", &cms);
                printf("%.2f centimeters is equal to %.2f inches.\n", cms, cms * cmsToInches);
                break;
            }
            case 'P':
            case 'p':
            {
                float pounds;
                printf("Enter weight in pounds: ");
                scanf("%f", &pounds);
                printf("%.2f pounds is equal to %.2f kilograms.\n", pounds, pounds * poundsToKgs);
                break;
            }
            case 'M':
            case 'm':
            {
                float inches;
                printf("Enter length in inches: ");
                scanf("%f", &inches);
                printf("%.2f inches is equal to %.2f meters.\n", inches, inches * inchesToMeters);
                break;
            }
            case 'Q':
            case 'q':
                printf("Quitting the Program...\n");
                break;
            default:
                printf("Invalid input. Please try again.\n");
                continue;
        }
    return 0;
    }    
}