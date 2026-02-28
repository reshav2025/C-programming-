#include <stdio.h>

int main(){
    int correctPIN = 1234;
    int maxAttempts = 3;
    int attempts = 0;
    int pin;
    int result;

    while (attempts < maxAttempts) {
        printf("Enter PIN: ");
        result = scanf("%d", &pin);

        if (result != 1) {
            printf("Error: Invalid input, numbers only.\n");
            while (getchar() != '\n');
            continue;
        }

        if (pin == correctPIN) {
            printf("Access Granted!\n");
            return 0;
        }

        attempts++;

        if (attempts >= maxAttempts) {
            printf("Access Denied. Account Locked.\n");
        } else {
            printf("Wrong PIN. %d attempt(s) left.\n", maxAttempts - attempts);
        }
    }

    return 0;
}