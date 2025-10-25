#include <stdio.h>

int main() {
    
    int units;
    double totalBill = 0.0;

    
    printf("Enter units consumed: ");
    scanf("%d", &units);

    
    if (units <= 100) {
        
        totalBill = units * 1.5;
    } else if (units <= 200) {
        
        totalBill = (100 * 1.5) + (units - 100) * 2.0;
    } else if (units <= 300) {
       
        totalBill = (100 * 1.5) + (100 * 2.0) + (units - 200) * 3.0;
    } else {
        
        totalBill = (100 * 1.5) + (100 * 2.0) + (100 * 3.0) + (units - 300) * 5.0;
    }


    printf("Total Bill = ?%.2f\n", totalBill);

    return 0;
}
