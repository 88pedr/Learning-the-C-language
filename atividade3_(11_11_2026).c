/*Faça um algoritmo para implementar um jogo de adivinhação. O programa deverá sortear um número de 1 a 100 e permitir que o usuário tente adivinhar. A cada tentativa, o algoritmo deverá informar: “maior”, “menor” ou “acertou”. O usuário terá direito a apenas 5 tentativas.


#include <stdlib.h> -> srand(time(NULL)); -> int num = rand()%101;*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 5 //definição de um valor constante, max=5 para todo o algoritmo

int main(void){
int acertou, tentativas=0, chute, alvo, menor, maior;

srand(time(NULL));
alvo = rand()%100 + 1;
printf("--- Jogo de Adivinhação----\n");
menor = 1;
maior = 100;

do{
acertou = 0;

printf("Chute um número de %d a %d: ",menor,maior);
scanf("%d",&chute);
tentativas++;

if(chute==alvo){
printf("Acertou!\n");
acertou=1;
}else if(chute>alvo){
printf("Alvo é menor!\n");
maior = chute;
}else{
printf("Alvo é maior!\n");
menor = chute;
}

}while((tentativas<max) && (!acertou));//negação em C é feita com a !
// !verdadeiro = falso
//!falso = verdadeiro

if(acertou) printf("Você acertou o alvo %d em %d tentativas!\n",alvo,tentativas);
else printf("Você atingiu 5 tentativas e não acertou o número %d!\n",alvo);

}