#include <stdio.h>
#include <math.h>

int main() {
    double principal = 10000.0;   // initial amount
    double rate = 0.05;           // 5% interest rate
    int years = 10;               // number of years
    double amount;

    printf("Year\tAmount (Sh)\n");
    printf("-------------------\n");

    for (int i = 1; i <= years; i++) {
        amount = principal * pow(1 + rate, i);
        printf("%d\t%.2f\n", i, amount);
	}
    return 0;
	}