/*
Exercício 19. Caixa eletrônico (1,0 pt)
Um caixa eletrônico possui notas de R$ 200, 100, 50, 20 e 10. Leia o valor do saque,
repetindo a leitura enquanto ele não for múltiplo de 10 ou estiver fora do intervalo
[10, 2000]. Exiba a quantidade mínima de notas de cada valor (mostre apenas as
notas utilizadas). Resolva usando laços — por exemplo, subtraindo o valor de cada
nota enquanto for possível — e não apenas divisões diretas.
*/

#include <stdio.h>
void main(){
    int n,nota1,nota2,nota3,nota4,nota5;
    printf("Diga-me o quanto você quer sacar  do caixa temos todas de 10,20,50,100,200");
    scanf("%d",&n);
    while(n%10!=0||n>2000||n<10){
        printf("Por favor insira um valor entre 10 a 2000 com as notas permitidas...");
    scanf("%d",&n);
    }
    for(int i=200;n>=i;){
        n=n-i;
        nota1++;
    }
    for(int j=100;n>=j;){
        n=n-j;
        nota2++;
    }for(int m=50;n>=m;){
        n=n-m;
        nota3++;
    }for(int b=20;n>=b;){
        n=n-b;
        nota4++;
    }for(int b=10;n>=b;){
        n=n-b;
        nota5++;
    }
    printf("Foi gastas nota %d R$200, %d de 100, %d de R$50, %d de R$20, %d de R$10",nota1,nota2,nota3,nota4,nota5);
}   