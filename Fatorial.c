#include <stdio.h>

int main(){
    int n;
    int fat = 1;
    
    printf("Digte um numero positivo: ");
    scanf("%d", &n);
        if (n <= 1){
            printf("O resultado e: 1");
        }
        else{
            for(fat = 1 ; n > 1 ; n = n - 1){
                fat = fat * n;
            }
            printf("O resultado e: %d", fat);
        }
}

