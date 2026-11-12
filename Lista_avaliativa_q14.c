/*
Exercício14.ConjecturadeCollatz (1,0pt)

Dado um inteiro positivo n: se n for par,divida-o por 2; se for ímpar, faça 3n+1.
Repita até chegar a 1.


n:6

63 105 16 8 42 1

Passos:8
*/
#include <stdio.h>
void main(){
    int passo,g;
    float n,c=0;
    printf("Diga-me um numero positivo e inteiro\n");
    scanf("%f\n",&n);
    //a)a) Leia n,exiba a sequência completa e a quantidade de passos.
    printf("n:%.0f\n",n);
    while (n>1){
        printf("%.0f ",n);
        if(n%2==0)n=n/2;
        else{
            n=3*n+1;
        }
        passo++;
    }
    printf("\npassos: %d",passo);
   // b)Usando laços aninhados descubra qual número entre 1 e 100 gera a sequência com mais passos e quantos passos ela tem.
   passo=0;
    for (int i=1;i<100;i++){
        float num=i;
        passo=0;
        while (num>1){
            if(num%2==0){
                num=num/2;
            }
            else{
                num=3*num+1;
            }
            passo++;
            if (c<passo){
                c=passo;
                g=i;
            }
            }
        
    } 
    printf("\n%.0f passos %d o numero que gerou os passos questao b",c,g);
}

