/*
faça um algoritmo que leia os dados dos moradores, que sao chefes de familia de uma cidade:
idade,salario,sexo(F,M),qtde de filhos
e informe:
a)A quantidade de mulheres acima de 60 anos
b)Percentual de homens e mulheres
c)A media salarial dos homens
d)A media salarial das mulheres
e)A media de filhos
f) A maior idade
*/
#include <stdio.h>
void main(){
    int idade,filhos,idosa,maior,homem,mulher,cont=1,filhos_total;
    char sexo,resp;
    float salario,soma_s_F,soma_s_H,porcentual_f,media_f,porcentual_h;
    do{
    printf("Diga-me a idade,salario,sexo, quantidade de filhos do  líder da familia\n");
    scanf("%d,%f,%c,%d",&idade,&salario,&sexo,&filhos);
    switch(sexo){
        case 'f':
        case 'F':
            if(idade>60){idosa++;mulher++;soma_s_F+=salario;filhos_total +=filhos;if(maior<idade)maior=idade;break;}
            else{mulher++;
            soma_s_F+=salario;
            filhos_total +=filhos;
            if(maior<idade)maior=idade;
            break;}
        case 'm':
        case 'M':
            homem++;
            soma_s_H+=salario;
            filhos_total+=filhos;
           
            if(maior<idade)maior=idade;
            break;
        default: printf("Use valores corretos...");
    }
    porcentual_f = ((float)mulher/(float)cont)*100;
    porcentual_h = ((float)homem/(float)cont)*100;
    media_f=(float)filhos_total/(float)cont;
    cont++;
    printf("Voce deseja continuar?");
    scanf("%c",&resp);
    }while(resp=='s'||resp=='S');
    printf("A media de filhos é: %d\nA mulheres acima de 60 anos são: %d\nA media salario dos homens é de: %.2f\nA media dos salarios de mulheres são de: %.2f\nA maior idade é de %d\nO porcentual de homens em comparação ao total é de %.2f%%\nA porcentagem de mulheres do total é de : %.2f%%",media_f,idosa,soma_s_H,soma_s_F,maior,porcentual_h,porcentual_f);
}