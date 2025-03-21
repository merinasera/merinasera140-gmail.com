#include <stdio.h>
int main() {
    int initialBalance=50000;
    int withdrawalAmount=20000;
    int newBalance=initialBalance-withdrawalAmount;
    printf("InitialBalance: %d\n",initialBalance);
    printf("WithdrawalAmount: %d\n",withdrawalAmount);
    printf("NewBalance: %d\n",newBalance);
    return 0;
}
