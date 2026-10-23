/* faça um algoritmo que leia o codigo da regiao e o valor de uma mercadoria. calcule e exiba o valor total (mercadoria+ imposto regional):

codigo          regiao               imposto
1               norte                15%
2            nordeste             20%
3             sul                  13%
4              sudeste              17%
5              centro-oeste         18%

o valor total é calculado como :total - valor +(valor*imposto)*/

#include <stdio.h>
void main(){
    int escolha;
    float merc,calculo;
    printf("CODIGO-----REGIÃO---------IMPOSTO\n1----------NORTE-----------15%\n2----------NORDESTE--------20%\n3----------SUL-------------13%\n4----------SUDESTE---------17%\n5----------CENTRO-OESTE----18%\n");
   // printf("%3CODIGO %3REGIAO %3IMPOSTO");
   printf("Escolha o codigo, e o valor de sua mercadoria\n");
   scanf("%d,%f",&escolha,&merc);
   switch(escolha){
       case 1: calculo=merc+(merc*1.5);printf("Valor total: %.2f",calculo);break;
       case 2: calculo=merc+(merc*2.0);printf("Valor total: %.2f",calculo);break;
       case 3: calculo=merc+(merc*1.3);printf("Valor total: %.2f",calculo);break;
       case 4: calculo=merc+(merc*1.7);printf("Valor total: %.2f",calculo);break;
       case 5: calculo=merc+(merc*1.8);printf("Valor total: %.2f",calculo);break;
   }
}