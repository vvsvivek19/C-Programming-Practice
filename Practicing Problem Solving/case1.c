#include<stdio.h>
#include<stdbool.h>

typedef struct {
    int accountNumber;
    char name[100];
    float balance;
} Account;

void createAccount(Account *account);
void deposit(Account *account, float amount);
void withdraw(Account *account, float amount);
void checkBalance(Account account);
void displayAccountDetails(Account account);

int main() {
    Account customerAccount;
    int choice;
    bool accountCreated = false;

    while(1){
        printf("\nBank Account Operations Menu:\n");
        printf("1. Create a new account\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Check account balance\n");
        printf("5. Display account details\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
    }

    switch (choice){
        case 1:
        createAccount(&customerAccount);
        accountCreated = true;
        break;
    }
}
