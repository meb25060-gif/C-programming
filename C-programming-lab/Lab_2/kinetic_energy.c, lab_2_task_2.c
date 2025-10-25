#include <stdio.h>

int main() {
    float mass, velocity, kineticEnergy;

    printf("Enter the mass (in kg): ");
    scanf("%f", &mass);

    printf("Enter the velocity (in m/s): ");
    scanf("%f", &velocity);

 
    kineticEnergy = 0.5 * mass * velocity * velocity;

    printf("The calculated kinetic energy is: %.2f Joules\n", kineticEnergy);

    return 0;
}


