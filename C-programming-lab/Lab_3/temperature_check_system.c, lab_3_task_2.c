#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the current machine temperature (in C): ");
    scanf("%f", &temperature);

    if (temperature > 60 && temperature <= 82) {
        printf("Temperature is safe\n");
    } else {
        printf("Temperature warning!\n");
    }

    return 0; 
}

