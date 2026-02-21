#include <stdio.h>

int main(){
    float foodExpenses, leisureExpenses, clothesExpenses;
    float accommodationExpenses, travelExpenses;
    float totalSpent;

    printf("\nEnter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter accommodation expenses: ");
    scanf("%f", &accommodationExpenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses + travelExpenses;

    printf("\nThe total expenditure this month was £%.2f\n\n", totalSpent);

    return 0;
}