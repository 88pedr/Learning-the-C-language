/*
O programa abaixo deveria ler n e exibir a soma 1 + 2 + · · · + n e o fatorial n!, mas
contém pelo menos seis erros (de compilação, de lógica ou de execução). Identifique
cada erro (linha e explicação) e entregue a versão corrigida.
1 int n, i, soma, fat;
2 printf("Digite n: ");
3 scanf("%d", n);
4 for (i = 1; i <= n; i++);
5 soma = soma + i;
6 fat = 0;
7 i = n;
8 while (i > 1)
9 fat = fat * i;
10 i--;
11 if (soma = 0)
12 printf("Nada a somar\n");
13 printf("Soma = %d, Fatorial = %d\n", soma, fat);
 */
//--------------------------------------------------
//RESPOSTAS

//PRIMEIRO ERRO LINHA 3 -> scanf("%d"), n"); %d é um placeholder para isso o n teria que ter um ponteiro & scanf("%d",&n); seria o correto

//SEGUNDO ERRO LINHA 4 -> for (i = 1; i <= n; i++); falta o uso de {} como chamamos ele no portugol de então, correto seria for (i = 1; i <= n; i++){(printf"com seus parametros dentro do for entre chaves");}

//TERCEIRO ERRO LINHA 8: mesma ideia do for o while usado esta sem {}

//QUARTO ERRO LINHA 11: utilizou o parametro receber = dentro de uma condição que deveria ser igualdade ==

//QUINTO ERRO LINHA 9: com o valor de fat=0 nunca vai sair do resultado zero ideal seria utilizar 1 para conseguir realizar este calculo do valor de n!

//SEXTO ERRO LINHA 5 -> soma nao foi definido um valor inicial podendo herda lixo do sistema logo soma quando declarado tem que ter soma=0

//extra poderia descarta a linha i=n e usar o proprio n no while mesmo que nao seja um boa pratica é descartavél na situação da pergunta...

#include <stdion.h>
void main(){
    int n, i, soma=0, fat;
    printf("Digite n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        soma = soma + i;
    }
    fat = 1;
    i = n;
    while (i > 1){
        fat = fat * i;
        i--;
    }
    if (soma == 0)printf("Nada a somar\n");
    printf("\nSoma = %d, Fatorial = %d\n", soma, fat);
}
