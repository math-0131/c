#include <cstdio>

int main() {
    double price = 99.80;
    double tax;
    tax = 0.08;
    tax = 0.09;
    double finalPrice = price * (1 + tax);
    printf("The final price is %f.", finalPrice);
    return 0;
}