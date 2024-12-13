#include <stdio.h>
// #include"D:\Project\C\shreyas.h"
#include<shreyas.h>

int main() {
    int choice;
    printf("\n***** Welcome to the banking system *****\n");
    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                printf("Thank you for using our banking system. Goodbye!\n");
                break;
            default: 
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}