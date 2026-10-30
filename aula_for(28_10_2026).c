/* faça um algoritmo que leia as notas de 30 alunios calcule a media da teruma mostre a maior a menor e a maedia */

#include <stdio.h>
#define TAM 10
void main(){
    float nota,media=0,maior,menor;
    for(int i=1; i<=TAM; 1++){
        printf("Digite a nota do %d° aluno: ",i);
        scanf("%f",&nota);
        media+=nota;
        if(i==1){
            maior = menor = nota;
        }
        if (maior<nota){
             maior = nota;
             }
        if(menor>nota) {
            menor = nota;
            }
    }
    media /=TAM;
    printf("Media das notas = %.2f\n",media);
    printf("Menor das notas %.2f\n",menor);
    printf("Maior das notas %.2f\n",maior);
}