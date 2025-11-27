#include <stdio.h>
#include <math.h>

void print_menu();
double maincode(int, double, double);

int main()
{
    int choice;
    double firstterm, secondterm, result;
    while (1)
    {
        print_menu();
        if (scanf("%d", &choice) != 1)
            return 0;
        if (choice == 7)
        {
            printf("\nThank You for Simple Calculator by KCPR\n");
            break;
        }
        else if (choice > 7 || choice <= 0)
        {
            fprintf(stderr, "Invalid choice so please enter a approiate choice\n");
            continue;
        }
        else
        {
            printf("Enter the value of first term\n");
            if (scanf("%lf", &firstterm) != 1)
                return 0;
            printf("Enter the value of second term\n");
            if (scanf("%lf", &secondterm) != 1)
                return 0;
            result = maincode(choice, firstterm, secondterm);
            if (!isnan(result))
                printf("The result of that operation choosen is %.2lf\n", result);
        }
    }
    return 0;
}
void print_menu()
{
    printf("\n____________________________________________\n");
    printf("\nWelcome to the Simple Calculator\n");
    printf("Choose one of the following options for the task to be performed\n");
    printf("1 -> Addition + \n");
    printf("2 -> Subtraction - \n");
    printf("3 -> Multiplication * \n");
    printf("4 -> Division / \n");
    printf("5 -> Modulus %% \n");
    printf("6 -> power ^ \n");
    printf("7 -> EXIT\n");
    printf("Enter a choice\n");
}
double maincode(int c, double a, double b)
{
    switch (c)
    {
    case 1: // Add
        return a + b;
    case 2: // Sub
        return a - b;
    case 3: // mul
        return a * b;
    case 4: // div
        if (b == 0.0)
        {
            fprintf(stderr, "We can't divide with zero so Invalid!\n");
            return NAN;
        }
        return a / b;
    case 5: // Modulus
        if (b == 0.0)
        {
            fprintf(stderr, "We can't divide with zero so Invalid!\n");
            return NAN;
        }
        return (int)a % (int)b;
    case 6: // Power
        return pow(a, b);
    default:
        return NAN;
    }
}
