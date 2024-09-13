#include <stdio.h>

int main(){
    int final_placa;

printf("\n Digite o número final da sua placa\n\n");
scanf("%d",&final_placa);

    switch(final_placa){

        case 1:
        printf("\nRodízio na Segunda-feira\n\n");
    break;
    
        case 2:
        printf("\nRodízio na Segunda-feira\n\n");
    break;

        case 3:
        printf("\nRodízio na Terça-feira\n\n");
    break;

        case 4:
        printf("\nRodízio na Terça-feira\n\n");
    break;

        case 5:
        printf("\nRodízio na Quarta-feira\n\n");
    break;

        case 6:
        printf("\nRodízio na Quarta-feira\n\n");
    break;

        case 7:
        printf("\nRodízio na Quinta-feira\n\n");
    break;

        case 8:
        printf("\nRodízio na Quinta-feira\n\n");
    break;

        case 9:
        printf("\nRodízio na Sexta-feira\n\n");
    break;

        case 0:
        printf("\nRodízio na Sexta-feira\n\n");
    break;

    default:
        printf("\nFinal de placa inexistente\n\n");
        break;
    
    }
}