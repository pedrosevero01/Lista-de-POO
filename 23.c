#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int Lado[3];

    for (int lado = 0; lado < 3; lado++){
        printf("Insira o Lado %d \n", lado + 1);
        scanf("%d", &Lado[lado]);

        while (Lado[lado] == 0){
            printf("Valor invalido, insira o lado %d novamente\n", lado + 1);
            scanf("%d", &Lado[lado]);

        }

    }
    if(Lado[0] < Lado[1] + Lado[2] && Lado[1] < Lado[0] + Lado[2] && Lado[2] < Lado[0] + Lado[1]){
        printf("Os Valores formam um triangulo! \n");

        if (Lado[0] == Lado[1] && Lado[0] == Lado[2] ){
            printf("O triangulo e Equilatero! \n");

        }else if (Lado[0] == Lado[1] && Lado[0] != Lado[2] || Lado[0] == Lado[2] && Lado[0] != Lado[1] ||Lado[1] == Lado[2] && Lado[1] != Lado[0]){
            printf("O triangulo e Isoceles! \n"); 

        }else if (Lado[0] != Lado[1] && Lado[0] != Lado[2] && Lado[1] != Lado[2]){
            printf("O triangulo e Escaleno! \n"); 

        } 
        
       
    }else{
        printf("Os Valores nao formam um triangulo! \n"); 
    }
    
    
    
}