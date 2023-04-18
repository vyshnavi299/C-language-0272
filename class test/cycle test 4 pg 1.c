#include <stdio.h>

struct bankAccount 
{
    int accountNumber;
    float balance;
};

void deposit(struct bankAccount *acct, float amount) {
    acct->balance += amount;
}

void withdraw(struct bankAccount *acct, float amount) {
    if (acct->balance < amount) {
        printf("Insufficient balance\n");
    } else {
        acct->balance -= amount;
    }
}

void checkBalance(struct bankAccount *acct) {
    printf("Account Number: %d\n", acct->accountNumber);
    printf("Balance: $%.2f\n", acct->balance);
}

int main() {
    struct bankAccount acct = {12345, 100.0};
    int choice;
    float amount;
    
    while (1) {
        printf("\nEnter your choice:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check balance\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                deposit(&acct, amount);
                checkBalance(&acct);
                break;
            case 2:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                withdraw(&acct, amount);
                checkBalance(&acct);
                break;
            case 3:
                checkBalance(&acct);
                break;
            case 4:
                return 0;
            default:
                printf("\nInvalid choice\n");
        }
    }
}




