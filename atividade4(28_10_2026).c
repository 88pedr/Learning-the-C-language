/* faça um algoritmo que leia as idades de um numero de inderteminado de pessoas, deve-se eencerrar a leitura quando o usuario digitar uma idade negativa, ao final, informe:
quantidade total de pessoas
medias das idades
percentual de pessoas acima de 18 anos
*/
#include <stdio.h>
#define P 100
void main(){
    float media,total, percentual,jovem=0;
    int idade,cont=0;
    char r='s';
    while(r=='s'){
        printf("Fale uma idade de uma pessoa\n");
        scanf("%d\n",&idade);
        if (idade<0) {printf("não pode ter idade negativa bobo\n");break;}
        else{
        printf("Voce quer adicionar idade de outra pessoa?\ns-sim\nn-não");
        scanf("%c\n",&r);
        if(idade>18) jovem +=1;
        total +=idade;
        cont++;
        }
    }
    printf("A quantidade total de pessoas são %d\n",cont);
    printf("A media das idades é %.2f", total/cont);
    printf("O porcentual de pessoas acima de 18 são %.2f",(jovem*100)/cont);
}