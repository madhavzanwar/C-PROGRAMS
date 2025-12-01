#include <stdio.h>

void deposit(float *balance, float amt);

void withdraw(float *balance, float amt);

void checkBalance(float balance);


int main() {

float balance = 0.0, amt;

int select;


while (1) {

printf("\n Simple Banking System \n");

printf("1 Deposit\n");

printf("2 Withdraw\n");

printf("3 Check Balance\n");

printf("4 Exit\n");

printf("Enter your choice: ");

scanf("%d", &select);


switch (select) {

case 1:

printf("Enter the amount to deposit: ");

scanf("%f", &amt);

deposit(&balance, amt);

break;


case 2:

printf("Enter the amount to withdraw: ");

scanf("%f", &amt);

withdraw(&balance, amt);

break;


case 3:

checkBalance(balance);

break;


case 4:

printf("Thank you!\n");

return 0;


default:

printf("Invalid choice!\n");

}

}

return 0;

}



void deposit(float *balance, float amt) {

if (amt > 0) {

*balance += amt;

printf("Deposited: %.2f\n", amt);

} else {

printf("Invalid deposit amount!\n");

}

}



void withdraw(float *balance, float amt) {

if (amt <= 0) {

printf("Invalid withdrawal amount!\n");

} else if (amt > *balance) {

printf("Insufficient balance!\n");

} else {

*balance -= amt;

printf("Withdrawn: %.2f\n", amt);

}

}



void checkBalance(float balance) {

printf("Current Balance: %.2f\n", balance);

}
