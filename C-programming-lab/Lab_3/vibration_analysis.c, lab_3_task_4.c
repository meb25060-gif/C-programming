#include <stdio.h>

int main() {
    float amplitude, frequency;

    printf("Enter vibration amplitude (in mm): ");
    scanf("%f", &amplitude);

    printf("Enter frequency (in Hz): ");
    scanf("%f", &frequency);

    
    if ((amplitude > 0.5) && (frequency >= 20 && frequency <= 50)) {
        printf("Risk Level: High risk\n");
    }
        else if ((amplitude > 0.5) || (frequency > 60)) {
        printf("Risk Level: Medium risk\n");
    }
        else {
        printf("Risk Level: Low risk\n");
    }

    return 0;
}
