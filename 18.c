#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int Numero1, Numero2, Numero3, Maior, Menor;
    printf("Insira o Primeiro Numero\n");
    scanf("%d", &Numero1);
    printf("Insira o Segundo Numero\n");
    scanf("%d", &Numero2);
    if (Numero1 >= Numero2){
        Maior = Numero1;
        Menor = Numero2;
    }else{
        Maior = Numero2;
        Menor = Numero1;
    }
    printf("Insira o numero de comparação para saber se ele está no intervalo\n");
    scanf("%d", &Numero3);
    if (Maior > Numero3 && Menor < Numero3){
        printf("O numero de comparação está no intervalo!");
    }else{
        printf("O numero de comparação NAO está no intervalo!");
    }
}