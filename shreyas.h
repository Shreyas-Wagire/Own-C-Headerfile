
#include <stdlib.h>
#define MAX_ACCOUNTS 100
typedef struct {
    int accountNumber;
    float balance;
} Account;

Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

void createAccount() {
    if (accountCount < MAX_ACCOUNTS) {
        accounts[accountCount].accountNumber = ++accountCount;
        accounts[accountCount].balance = 0.0;
        printf("Account created successfully. \n Your account number is: %d\n", accountCount);
    } else {
        printf("Cannot create more accounts. \n Maximum accounts reached.\n");
    }
}

void deposit() {
    int accountNumber;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Invalid account number.\n");
    } else {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        accounts[accountNumber].balance += amount;
        printf("Deposit successful. \n Current balance: %.2f\n", accounts[accountNumber].balance);
    }
}

void withdraw() {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Invalid account number.\n");
    } else {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount <= accounts[accountNumber].balance) {
            accounts[accountNumber].balance -= amount;
            printf("Withdrawal successful. \nCurrent balance: %.2f\n", accounts[accountNumber].balance);
        } else {
            printf("Insufficient funds.\n Current balance: %.2f\n", accounts[accountNumber].balance);
        }
    }
}

void checkBalance() {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Invalid account number.\n");
    } else {
        printf("Your current balance: %.2f\n", accounts[accountNumber].balance);
    }
}

void displayMenu() {
    printf("\n1. Create Account\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Check balance\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}
