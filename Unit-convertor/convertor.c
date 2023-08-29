#include <stdio.h>
#include <stdlib.h>

double metersToCentimeters(double meters)
{
    return meters * 100;
}

double centimetersToMeters(double centimeters)
{
    return centimeters / 100;
}

double kilometersToMeters(double kilometers)
{
    return kilometers * 1000;
}

double metersToKilometers(double meters)
{
    return meters / 1000;
}

double kilogramsToPoundal(double kilograms)
{
    return kilograms * 9.80665;
}

double kilogramsToGrams(double kilograms)
{
    return kilograms * 1000;
}

double gramsToKilograms(double grams)
{
    return grams / 1000;
}

void lengthConversion()
{
    int choice;
    double value;

    printf("Length Conversion Options:\n");
    printf("1. Kilometers to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Meters to Kilometers\n");
    printf("4. Centimeters to Meters\n");
    printf("5. Exit\n");
    printf("Enter your choice (1/2/3/4/5): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter value in kilometers: ");
        scanf("%lf", &value);
        printf("%.2lf kilometers = %.2lf meters\n", value, kilometersToMeters(value));
        break;
    case 2:
        printf("Enter value in meters: ");
        scanf("%lf", &value);
        printf("%.2lf meters = %.2lf centimeters\n", value, metersToCentimeters(value));
        break;
    case 3:
        printf("Enter value in meters: ");
        scanf("%lf", &value);
        printf("%.2lf meters = %.2lf kilometers\n", value, metersToKilometers(value));
        break;
    case 4:
        printf("Enter value in centimeters: ");
        scanf("%lf", &value);
        printf("%.2lf centimeters = %.2lf meters\n", value, centimetersToMeters(value));
        break;
    case 5:
        // Exit
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void massConversion()
{
    int choice;
    double value;

    printf("Mass Conversion Options:\n");
    printf("1. Kilograms to Poundal\n");
    printf("2. Kilograms to Grams\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Exit\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter value in kilograms: ");
        scanf("%lf", &value);
        printf("%.2lf kilograms = %.2lf poundal\n", value, kilogramsToPoundal(value));
        break;
    case 2:
        printf("Enter value in kilograms: ");
        scanf("%lf", &value);
        printf("%.2lf kilograms = %.2lf grams\n", value, kilogramsToGrams(value));
        break;
    case 3:
        printf("Enter value in grams: ");
        scanf("%lf", &value);
        printf("%.2lf grams = %.2lf kilograms\n", value, gramsToKilograms(value));
        break;
    case 4:
        // Exit
        break;
    default:
        printf("Invalid choice. Please enter a valid option.\n");
        break;
    }
}

void dashBoard()
{
    int press;
    while (1)
    {

        printf("\t\t\t\t 1. Length Converter\n");
        printf("\t\t\t\t 2. Mass Converter\n");
        printf("\t\t\t\t 3. Exit\n");
        printf("\t\t\t\t Press any key from 1, 2, or 3.....\n");
        scanf("%d", &press);
        system("cls");
        switch (press)
        {
        case 1:
            lengthConversion();
            break;
        case 2:
            massConversion();
            break;
        case 3:
            exit(0);
        default:
            printf("\t\t\t\t Invalid choice. Please try again.\n");
            break;
        }
    }
}

int main()
{
    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t WELCOME CONVERTER APP \n");
    printf("\n\n\n\t\t\t\t\t\tPress Enter to proceed");
    while (getchar() != '\n')
        ;

    system("CLS");
    dashBoard();
    return 0;
}