#include<stdio.h>
int main(){
    int n;
    int i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
     while(i <= n){
        printf("%d\n", i);
        i = i + 2;
     }
     while( n == 1){
        printf("-1");
        n = 0;
     }
     return 0;

}