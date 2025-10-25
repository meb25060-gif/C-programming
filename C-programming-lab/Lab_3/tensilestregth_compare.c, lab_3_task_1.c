#include <stdio.h>

int main() {
    float strength1, strength2;

    printf("Enter tensile strength of Material 1 : ");
    scanf("%f", &strength1);

    printf("Enter tensile strength of Material 2 : ");
    scanf("%f", &strength2);

    if (strength1 > strength2) {
        printf("The larger tensile strength is: %.2f MPa\n", strength1);
    } else if (strength2 > strength1) {
        printf("The larger tensile strength is: %.2f MPa\n", strength2);
    } else {
        printf("Both materials have the same tensile strength: %.2f MPa\n", strength1);
    }

    return 0;
}

