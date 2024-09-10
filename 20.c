#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int Escala[2];
    float Temperatura;

    printf("Informe a sua Escala de Temperatura atual: (1- Fahrenheit, 2- Celsius, 3- Kelvin)\n");
    scanf("%d", &Escala[0]);
    printf("Informe a Temperatura\n");
    scanf("%f", &Temperatura);

    switch (Escala[0]){
        
    case 1:

        printf("Informe a Escala para conversaso: (1- Celsius, 2- Kelvin)\n");//Fahrenheit
        scanf("%d", &Escala[1]);

        switch (Escala[1]){
        case 1:
            Temperatura = (Temperatura - 32)/(1.8);//F -> C
            break;

        case 2:
            Temperatura = ((Temperatura - 32)/(1.8) + 273.15); //F->C->K
            break;
        
        default: 
            printf("Opção invalida\n");
            break;
        }
        
        break;


    case 2:
        printf("Informe a Escala para conversao: (1- Fahrenheit, 2- Kelvin)\n");//Celsius
        scanf("%d", &Escala[1]);

        switch (Escala[1]){
        case 1:
            Temperatura = ((Temperatura * (1.8)) + 32); //C-> F
            break;

        case 2:
            Temperatura = (Temperatura + 273.15); //C-> K
            break;
        
        default: 
            printf("Opção invalida\n");
            break;

        }
        break;

    case 3:
        printf("Informe a Escala para conversao: (1- Fahrenheit, 2- Celsius)\n");//Kelvin
        scanf("%d", &Escala[1]);

        switch (Escala[1]){
        case 1:
            Temperatura = ((1.8 * (Temperatura - 273)) + 32); //K->F
            break;

        case 2:
            Temperatura = (Temperatura - 273.15) ;//K->C
            break;
        
        default: 
            printf("Opção invalida\n");
            break;
        }
        break;

        
    default:
        printf("Opção invalida\n");
        break;
    }
    printf("A temperatura convertida e %.2f", Temperatura);
}