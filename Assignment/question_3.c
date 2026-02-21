#include <stdio.h>

int main(){
    double monthlySaving;
    printf("Enter monthly saving amount:$");
    scanf("%lf", &monthlySaving);

    double monthlyRate = 0.05/12;
    double accountValue     = 0;

    for (int month =1; month<=6; month++){
        accountValue = (accountValue + monthlySaving) * (1 + monthlyRate);
        printf("After month %d: $%.2f\n", month, accountValue);
    }

    return 0;
}