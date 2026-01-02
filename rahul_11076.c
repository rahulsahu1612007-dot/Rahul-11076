#include <stdio.h>

int main() {
    int balance = 10000;  
    int amount;

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount); 

    if (amount > 0) {
        if (amount <= balance) {
            balance = balance - amount;  
            printf("Withdrawal successful!\n");
            printf("Updated balance: %d\n", balance);  
        } else {
            printf("Insufficient balance!\n");
        }
    } else {
        printf("Invalid amount entered!\n");
    }

    return 0;
}