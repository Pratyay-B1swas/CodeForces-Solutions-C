#include<stdio.h>
int main(){
    int n, x;
    int reverse = 0;
    scanf("%d", &n);
    x = n;
    
    while(x > 0){
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }
    printf("%d\n", reverse);
    while(n == reverse){
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}