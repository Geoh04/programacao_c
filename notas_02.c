#include <stdio.h>

int main(){

    float nota1,nota2,nota3,nota4,total;
    printf("\nDigite a primeira nota:\n\n");
    scanf("%f",&nota1);

    printf("\nDigite a segunda nota:\n\n");
    scanf("%f",&nota2);

    printf("\nDigite a terceira nota:\n\n");
    scanf("%f",&nota3);

    printf("\nDigite a quarta nota:\n\n");
    scanf("%f",&nota4);

    total= (nota1+nota2+nota3+nota4)/4;
    /*Para alunos com média ou igual a 6, aprovado
    Para alunos com média maenor ou igual a 4, reprovado
    Para os demais com notas enrtemaior e mrnor 6, recuperaação
    */
    if (total>=6){

        printf("\nO Aluno está Aprovado! A média dele é %.2f\n\n ",total);

    }
    else if(total<=4){
        
        printf("\nO Aluno está Reprovado! A média dele é %.2f\n\n ",total);

    }
    else{
        printf("\nO Aluno está de Recuperação! A média dele é %.2f \n\n",total);
    }
    

}