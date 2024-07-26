#include <stdio.h>
#include <math.h>
int numDigits(int n) {
    if (n == 0) return 0;
    return 1 + numDigits(n / 10);
}
int sumOfPowers(int n, int power) {
    if (n == 0) return 0;
    return pow(n % 10, power) + sumOfPowers(n / 10, power);
}

int isArmstrong(int n) {
    int power = numDigits(n);
    return n == sumOfPowers(n, power);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}