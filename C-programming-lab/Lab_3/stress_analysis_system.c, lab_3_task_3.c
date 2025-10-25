#include <stdio.h>

int main() {
    float appliedStress, yieldStrength, fos;
  
    printf("Enter applied stress (in MPa): ");
    scanf("%f", &appliedStress);

    printf("Enter material yield strength (in MPa): ");
    scanf("%f", &yieldStrength);

    if (appliedStress <= 0) {
        printf("Error: Applied stress must be a positive value.\n");
        return 1;
    }

    fos = yieldStrength / appliedStress;

    printf("Calculated Factor of Safety (FOS): %.2f\n", fos);

        if (fos >= 2.0) {
        printf("Result: Safe design\n");
    } else if (fos >= 1.5) {
        printf("Result: Acceptable with monitoring\n");
    } else {
        printf("Result: Danger - redesign needed\n");
    }

    return 0;
}


