/*
Leia um inteiro N (1 ≤ N ≤ 20, validando a entrada) e desenhe as duas figuras
abaixo (exemplo para N = 4): à esquerda, uma pirâmide centralizada de asteriscos;
à direita, o triângulo de Floyd, com N linhas.
* 1
*** 2 3
***** 4 5 6
******* 7 8 9 10
Dica: na linha i da pirâmide há N − i espaços e 2i − 1 asteriscos.
*/
#include <stdio.h>
void main(){
    int n,passo;
    char resp;
    do{
        
        printf("Diga-me um numero:\n");
        scanf("%d",&n);
        while(n<1||n>20){
            printf("Coloque um numero maior que 1 e menor que 20...");
            scanf("%d",&n);
        }
        for(int i=1;i<n;i++){
            //se usar um * antes de um s ele consegue absorve um numero para colocar espaço vazio antes do texto
            printf("%*s",n-i-1,"");
            for(int j=0;j<(2*i−1);j++){

                printf("*");
            }
            printf("\n");
        }
        //aqui eu fui monstro ;D
        int y=1;
        for(int h=1;h<=n;h++){
            for(int m=1;m<=h;m++){
                printf("%d ",y);
                y++;
            }
            printf("\n");
        }
        printf("\nQuer continuar?(s ou S)");
        scanf("%c",&resp);
    }while(resp=='s'||resp=='S');
}