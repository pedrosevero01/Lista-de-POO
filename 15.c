#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int Numero1, Numero2, Numero3, Maior, Menor;
    printf("Insira o Valor do Numero1\n");
    scanf("%d", &Numero1);
    printf("\n Insira o Valor do Numero2\n");
    scanf("%d", &Numero2);
    printf("\n Insira o Valor do Numero3\n");
    scanf("%d", &Numero3);

    if (Numero1 > Numero2 && Numero1 > Numero3) {
        Maior = Numero1;

    } else if (Numero2 > Numero1 && Numero2 > Numero3) {
        Maior = Numero2;

    } else {
        Maior = Numero3;

    }
     if (Numero1 < Numero2 && Numero1 < Numero3) {
        Menor = Numero1;
    } else if (Numero2 < Numero1 && Numero2 < Numero3) {
        Menor = Numero2;
    } else {
        Menor = Numero3;
    }
    printf("O Maior numero é: %d\n", Maior);
    printf("O Menor numero é: %d\n", Menor);

return 0;
}

