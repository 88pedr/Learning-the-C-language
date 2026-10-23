/*Faça um algoritmo que leia 3 notas de um aluno,
calcule sua media e informe: "aprovado" -> caso a media >=7
"prova final"-> media -> 2,5 <= media <7
"reprovado" -> media <2,5
*/
#include <stdio.h>
/*
void main(){
    float media,n1,n2,n3;
    printf("Diga-me sua nota aluno buxa\n");
    scanf("%f,%f,%f",&n1,&n2,&n3);
    media = (n1+n2+n3)/3;
    if(media>=7) printf("Parabéns sacana você passou\n");
    else if (media< 7 & media>=2.5) printf("Prova final infelizmente\n");
    else printf("Passa nem com benção\n");
    printf("Com ternario neste modelo fica:\n");
    (media>=7)?printf("Aprovado"):(media>=2.5)?printf("Prova final"):printf("Reprovado");
}
*/

void main(){
    float media,nota1,nota2,nota3;
    printf("Diga-me suas notas aluno buxa\n");
    scanf("%2.f, %2.f, %2.f",&nota1,&nota2,&nota3);
    media = (nota1+nota2+nota3)/3;
    if(media>=7){
        printf("Parabéns sacana você passou");
    }else if (media< 7 & media>=2.5) {
        printf("Prova final infelizmente");
    }else {
        printf("Passa nem com benção");
    }
    printf("Sua media foi: %2.f  \n",media);
    printf("Com ternario:\n");
    (media>=7)?printf("Aprovado!\n"):(media>=2.5)?printf("prova final\n"):printf("Reprovado!\n");
}
//usando {} para escrever separado mesmo sendo opcional
//& se utiliza apenas no scanf
//: no ternario é como um else mas caso tiver outra condição
// ele sera como se fosse um else if
//? é usado para o primeiro parametro
