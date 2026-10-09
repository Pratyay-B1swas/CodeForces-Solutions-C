#include<stdio.h>
int main(){
    int x;
    int i = 2, count = 0;
    scanf("%d", &x);

    while(x == 1){
        printf("NO\n");
        return 0;
    } 
    while(i < x){
        count = count + (x % i == 0);
        i++;
    }
    while(count == 0){
        printf("YES\n");
        return 0;
    }
    while(count > 0){
        printf("NO\n");
        return 0;
    }  
    return 0;
}