#include <stdio.h>
int main() {
    int a, b;
    int i = 1;
    int gcd = 1;

    scanf("%d", &a);
    scanf("%d", &b);
    while (i <= a && i <= b) {
        gcd = (a % i == 0 && b % i == 0) * i + (a % i != 0 || b % i != 0) * gcd;
        i++;
    }
    printf("%d\n", gcd);
    return 0;
}