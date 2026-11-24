/*
Faça um algortimo que simule um caixa eletronico que disponiliza notas de R$100, R$50,R$20 e R$10. o algoritmo devera ler um valor de saque e retorna a quantidade de notas de cada tipo que serao necessarias. o algoritmo ainda deve rejeita os valores que nao possam ser representados com as notas disponiveis. o algoritmo deve permitirt novos saques ate que o usuario escolha sair do programa.
*/
#include <stdio.h>
void main(){
    int saque,nota100,nota50,nota20,nota10,resp,aux;
    do{
        printf("-----Caixa eletrônico---\n");
        printf("1- Realizar saque\n");
        printf("2- Sair");
        scanf("%d",&resp);
        switch(resp){
            case 1:
                printf("Informe o valor do saque:\n");
                scanf("%d",&saque);
                if (saque%1==0){
                    aux=saque;
                    nota100 = aux/100;
                    aux= aux%100;

                    nota50=aux/50;
                    aux=aux%50;

                    nota20=aux/20;
                    aux = aux%20;

                    nota10=aux/10;
                    aux=aux%10;

                    printf("Saque de R$%d\nSaque de notas 100: %d\nSaque de notas de 50: %d\nSaque de notas 20:\nNotas de 10: %d"\n,saque,nota100,nota50,nota20,nota10);
                }else{printf("Burrao coloque valores que saque aceitam\n");}
            case 2: 
        }
    printf("\nQuer continuar?\n1-Sim\n2-Não");
    scanf("%d",&resp2);
    }while(resp2==1);
}
