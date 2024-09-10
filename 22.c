#include <stdio.h>
float Media(float Nota1, float Nota2) {
    return (Nota1 + Nota2)/2;
}
int main() {
    float maior, Planilha[5][4];

    for (int Qntd_Alunos = 0; Qntd_Alunos < 5; Qntd_Alunos++) {
        for (int Qntd_Notas = 0; Qntd_Notas < 2; Qntd_Notas++) {
            printf("Informe a nota %d do aluno %d: ", Qntd_Notas + 1, Qntd_Alunos + 1);
            scanf("%f", &Planilha[Qntd_Alunos][Qntd_Notas]);
        }
    }

    for (int Aluno = 0; Aluno < 5; Aluno++) {
        Planilha[Aluno][3] = Media(Planilha[Aluno][0], Planilha[Aluno][1]);
        if (Planilha[Aluno][3] >= 5){
            printf("Aluno %d aprovado!\n", Aluno+1);
            Planilha[Aluno][2] = 0;
        }else {
            printf("Aluno %d reprovado e precisa fazer a prova 3\n", Aluno+1);
            printf("Insira a nota da Av3 do Aluno %d \n", Aluno+1);
            scanf("%f", &Planilha[Aluno][2]);
            if (Planilha[Aluno][0] >= Planilha[Aluno][1]){
                maior = Planilha[Aluno][0];

            }else{
                maior = Planilha[Aluno][1];

            }
            Planilha[Aluno][3] = Media(Planilha[Aluno][2], maior);


        }
        
    }
    
        printf("\nNotas dos alunos:\n");
    for (int Aluno = 0; Aluno < 5; Aluno++) {
        printf("Aluno %d: ", Aluno + 1);
        for (int Nota = 0; Nota < 4; Nota++) {
            printf("%.1f ", Planilha[Aluno][Nota]);
        }
        if(Planilha[Aluno][3]>=5){
            printf(" Aluno Aprovado! \n");
        }else{
            printf(" Aluno reprovado! \n");
        }
    }
    return 0;

}