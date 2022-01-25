// Program to calculate BMI

#include<stdio.h>

void main()
{
    float height, weight, BMI;

    // Scanning the height from the user
    printf("Enter your height in metre: ");
    scanf("%f",&height);

    // Scanning the weight from the user
    printf("Enter your weight in kilogram: ");
    scanf("%f",&weight);

    // Calculating BMI
    BMI = weight / (height * height);

    // Printing BMI
    printf("\nYor BMI: %f",BMI);

    // Printing Conclusion of BMI
    if(BMI < 18.5)
    {
        printf("\nConclusion: UNDERWEIGHT\n");
    }
    else if(BMI > 18.5 && BMI < 24.9)
    {
        printf("\nConclusion: HEALTHY\n");
    }
    else if(BMI > 25.0 && BMI < 29.9)
    {
        printf("\nConclusion: OVERWEIGHT\n");
    }
    else
    {
        printf("\nConclusion: OBESE\n");
    }
}
