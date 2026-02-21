#include <stdio.h>

int main(){
    float foodExpenses = 250.0;
    float leisureExpenses = 80.0;
    float clothesExpenses = 70.0;
    float totalSpent;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was £%.2f\n\n", totalSpent);

    return 0;
}