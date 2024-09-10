#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int Numero;
    while(1){
        printf("Insira um numero entre 12 e 20: \n");
        scanf("%d", &Numero);
        if (Numero > 12 && Numero < 20){
            printf("O numero digitado foi %d \n", Numero);
            break;
        }else{
            printf("entrada Invalida \n");
        }
    } 
}