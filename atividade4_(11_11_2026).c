/*faça um algoritmo que leia um valor inteiro N e desenhe uma pirãmide de asteriscos de altura N.
*
**
***
****.....
*/
#include <stdio.h>
void main(){
    int n,n2;
    printf("Diga-me um numero inteiro positivo\n");
    scanf("%d%d",&n,&n2);
    int h=0;
    while (h<=n){
        printf("\n");
        for(int i=1;i<=h;i++){
            printf("*");
        }
        printf("\n");
        h++;
    }}
    /*for(int h=1;h<=n2;h++){
        for(int j=1;j<=h;j++){
            printf("*");
        }
        printf("\n");
    }
}