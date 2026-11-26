/*faça um algoritmo que leia o valor de um produto e determine o valor a ser pago por ele conforme a forma de pagamento escolhida pelo comprador:
1- á vista ou PIX, recebe 15% de desconto
2- Á vista no cartão de credito, recebe 8% de desconto
3- Parcelado no cartão em duas vezes, valor normal do produto
4-parcelado no cartao em 10x, juros de 10% do total
 */
#include <stdio.h>
#define promo1 15
#define promo2 8
#define juros 0.10
void main(){
    int n1,n2,total;
    printf("----------Calculadora de preço------------\n");
    printf("1- á vista ou PIX, recebe 15%% de desconto\n2- Á vista no cartão de credito, recebe 8%% de desconto\n3- Parcelado no cartão em duas vezes, valor normal do produto\n4-parcelado no cartao em 10x, juros de 10%% do total\n");
    scanf("%d",&n1);
    printf("e o valor do produto?\n");
    scanf("%d",n2);
    switch(n1){
        case 1:
            total= n2-((n2*promo1)/100);break;
        case 2:
            total= n2-((n2*promo2)/100);break;
        case 3:
            total= n2;break;
        case 4: 
            total= n2+(n2*juros);break;
    }
    printf("O preço a se pagar é %d",total);
}