/*
O computador sorteia um número secreto entre 1 e 100 (use srand(time(NULL)) e
rand() % 100 + 1 , incluindo <stdlib.h> e <time.h> ). O jogador tem no máximo 7
tentativas; a cada palpite o programa informa Maior , Menor ou Acertou! . Palpites
fora de [1, 100] não contam como tentativa. Ao final, revele o número (se o jogador
perdeu) e pergunte se deseja jogar novamente. Exiba, ao sair, quantas partidas foram
jogadas e quantas foram vencidas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int n,t,sorte;
    printf("Tente adivinhar um numero, você tem 5 tentativas entres os numero 1 a 100\n");
    srand(time(NULL));
    sorte = rand()%100+1;
    while(t<6){
        scanf("%d",&n);
        if (n==sorte){
            printf("Acertou em cheio");
            break;
        }else if(n<1||n>100){
            printf("Por favor use numeros dentro do intervalo...\n");
        }else{
            if(n<sorte){
                printf("o numero da sorte é maior que isso\n");
            }else{printf("O numero é menor que isso!\n");}
            t++;
        }
        if (t==5){
            printf("Voce perdeu");
        }
    }
}