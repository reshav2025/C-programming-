#include <stdio.h>

int main(){
    double celsius, fahrenheit;

    printf("Enter a degree in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (9.0 / 5)*celsius + 32;

    printf("%.1f Celsius is %.1f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}