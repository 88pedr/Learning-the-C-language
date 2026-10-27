/*Contexto
Uma empresa de transporte por aplicativo de Feira de Santana precisa de um programa
que simule o preço de uma corrida antes de o passageiro confirmar a viagem. Escreva um
programa em C que leia os dados da corrida, calcule o valor a pagar seguindo as regras
abaixo e exiba um resumo.*/

/*Entradas (nesta ordem)
1. Categoria (int): 1– Econômico, 2– Conforto, 3– Moto;
2. Distância da corrida em km (float);
3. Tempo estimado em minutos (int);
4. Dia da semana (int): 1– Domingo, 2– Segunda, ..., 7– Sábado;
5. Hora de início (int, de 0 a 23);
6. Possui cupom? (char): S ou N (aceitar maiúscula ou minúscula)*/

#include <stdio.h>
void main(){
  int categoria,tempo,dia,hora;
  char cupom;
  float distancia,calculo,base,desconto,total,acrescimo;
  desconto = 0;
  acrescimo = 0;
  printf("Diga-me qual a categoria da corrida\n1-Econômico\n2-Conforoto\n3-Moto\n");
  scanf("%d",&categoria);
  switch(categoria){
    case 1: 
      printf("Diga-me a distancia desta corrida(km), tempo estimados(minuto) e hora de início(entre 0 a 23)\n");
      scanf("%f,%d,%d",&distancia,&tempo,&hora);
      printf("Qual dia da semana?\n1-Segunda\n2-Terça\n3-Quarta\n4-Quinta\n5-Sexta\n6-Sabado\n7-Domingo\n");
      scanf("%d",&dia);
      if (tempo,distancia <=0 || dia > 7 || dia < 1 || hora >23 || hora < 0 ){
      printf("Dados incorreto");
      break;
    }
      printf("Você tem cupom?\nS-Sim;\nN-Não\n");
      scanf("%c",&cupom);
      switch(cupom){
        case 's':
        case 'S':
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18){
          printf("Não pode cupom no seu caso");
          break;
          }
          if (hora >=0 && hora <=5){
          /*Acrescimo de 20% e não pode cupom */
          printf("Não pode cupom no seu caso");
          break;
          }
        case 'n':
        case 'N':
        /*esse aqui tive que pesquisar um teco para conseguir o maisculo e minusculo*/
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18 && dia >=1 && dia <=5){
          /*vai ter acrescimo de 30% e não pode cupom*/
          base = 8+4+(distancia*1.4)+(tempo*0.25);
          acrescimo = (calculo*30)/100;
          total = base+acrescimo;
          printf("-----RESUMO-----\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto:%d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }
          else if (hora >=0 && hora <=5){
          /*Acrescimo de 20% e não pode cupom */
          base = 8+4+(distancia*1.4)+(tempo*0.25);
          acrescimo = (calculo*20)/100;
          total = base+acrescimo;
          printf("-----RESUMO-----\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto:%d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }else{
          base = 8+4+(distancia*1.4)+(tempo*0.25);
          total = base+acrescimo;
          printf("-----RESUMO-----\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto:%d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }
          break;
    }
    case 2:
    case 3: /* se a corrida for moto se km for maior q 20 não pode */
    default: printf("Dado invalido");    
    }
}