#include <stdio.h>

int main() {
    int balance = 5000;
    int withdrawAmount;
    int continueTransaction = 1;

    printf("Welcome to the National Bank of Bharat ATM\n");
    printf("Your initial balance is: %d\n", balance);
    printf("----------------------------------------\n");

    do {
        printf("\nEnter amount to withdraw: ");
        scanf("%d", &withdrawAmount);

        if (withdrawAmount > balance) {
            printf("Insufficient balance. Cannot withdraw %d.\n", withdrawAmount);
            printf("Your available balance is: %d\n", balance);
        } else if (withdrawAmount < 0) {
            printf("Invalid amount. Please enter a positive value.\n");
        } else {
            balance -= withdrawAmount;
            printf("Transaction successful. Please collect your cash.\n");
            printf("Remaining balance: %d\n", balance);
        }

        printf("\nDo you want to perform another transaction? (1 for Yes / 0 for No): ");
        scanf("%d", &continueTransaction);
        printf("----------------------------------------\n");

    } while (continueTransaction == 1);

    printf("Thank you for using the ATM. Goodbye!\n");

    return 0;
}
