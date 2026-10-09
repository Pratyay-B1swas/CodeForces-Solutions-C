#include<stdio.h>
int main(){
    int p, q;
    long long factorial;
    int i, j;
    scanf("%d", &p);
    for(i = 1; i<=p; i++){
        scanf("%d", &q);
        factorial = 1;
        for(j = 1; j <= q; j++){
            factorial = factorial * j;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}