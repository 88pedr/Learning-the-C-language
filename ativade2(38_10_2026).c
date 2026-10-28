/*FAÇA  UM ALGORITMO QUE LEIA UM PESO DE N PESSOAS DE UMA ACADEMIA E CALCULE O IMC DE CADA UMA;
IMC = PESO/ALTURA²
E CLASSIFIQUE CONFORME A TABELA
DESNUTRIDO IMA =18,4
NORMAL 18,4<IMC<24,9
OBESO IMC >= 24,9
APOS CADA CALCULO O PROGRAMA DEVE PERGUNTA AO USUSARIO SE DESEJA CALCULAR O IMC DE OUTR PESSOA OU ENCERRAR */
#include <stdio.h>
#include <math.h>
void main(){
    float altura,imc,peso;
    char r='s';
    while(r == 's'){
        printf("Qual seu peso e altura\n");
        scanf("%f %f",&peso,&altura);
        imc = peso/pow(altura,2);
        if (imc<18.4){
            printf("DESNUTRIDO\n");
        }else if (imc<24.9){
            printf("normale\n");
        }else printf("OBESO");
        printf("quer repetir o programa?\ns-sim\nn-não");
        scanf("%c",&r);
    }
}