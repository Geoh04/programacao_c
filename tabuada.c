#include <stdio.h>

int main(){

    //Número que o usuário irá digitar para fazer a tabuada
    int num;
    int contar=0;
    int rs;

    printf("\nDigite um número\n\n");
    scanf("%d",&num);

    while(contar<=10){
        rs=num*contar;
        printf("\n%d x %d = %d\n\n",num, contar, rs);
        contar++;

    }
    return 0;
}