#include<stdio.h>
int main(){
    int n,x;
    int max;
    scanf("%d", &n);
    scanf("%d", &max);

    for(int i = 2; i <= n; i++){
        scanf("%d", &x);
        max = max * (max >= x) + x * (x > max);
    }
    printf("%d\n", max);
    return 0;
}