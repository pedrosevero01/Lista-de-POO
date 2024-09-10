#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int Numero, Divisores = 0;
    printf("Insira um numero para descobrir se ele e primo \n");
    scanf("%d", &Numero);
    for (int Divisor = 1; Divisor <= Numero; Divisor++){
        if (Numero % Divisor == 0){
            Divisores++;
        }
    }
    if (Divisores == 2){
        printf("O numero inserido e primo \n");
    }else{
        printf("O numero inserido nao e primo\n");
    }
}