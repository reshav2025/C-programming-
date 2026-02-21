#include <stdio.h>

int main() {
    long population = 312032486;
    int secondsPerYear = 365 * 24 * 60 * 60; 

    for (int year = 1; year <= 5; year++) {
        long births    = secondsPerYear / 7;
        long deaths    = secondsPerYear / 13;
        long immigrants = secondsPerYear / 45;

        population += births + immigrants - deaths;

        printf("Year %d: %ld\n", year, population);
    }

    return 0;
}