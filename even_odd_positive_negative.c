#include<stdio.h>
int main(){
    int i = 0, n, x;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    scanf("%d", &n);

    while(i < n){
        scanf("%d", &x);
        even = even + (x%2 == 0);
        odd = odd + (x%2 != 0);
        positive = positive + (x > 0);
        negative = negative + (x < 0);

        i++;
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;

}