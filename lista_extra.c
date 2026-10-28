/*Contexto
Uma empresa de transporte por aplicativo de Feira de Santana precisa de um programa
que simule o preço de uma corrida antes de o passageiro confirmar a viagem. Escreva um
programa em C que leia os dados da corrida, calcule o valor a pagar seguindo as regras
abaixo e exiba um resumo.
*/
/*
Categoria Bandeirada Por km Por minuto Tarifa mínima
1 – Econômico R$ 4,00 R$ 1,40 R$ 0,25 R$ 8,00
2 – Conforto R$ 6,00 R$ 2,10 R$ 0,40 R$ 12,00
3 – Moto R$ 2,50 R$ 0,90 R$ 0,15 R$ 5,00
*/
/*
Entradas (nesta ordem)
1. Categoria (int): 1– Econômico, 2– Conforto, 3– Moto;
2. Distância da corrida em km (float);
3. Tempo estimado em minutos (int);
4. Dia da semana (int): 1– Domingo, 2– Segunda, ..., 7– Sábado;
5. Hora de início (int, de 0 a 23);
6. Possui cupom? (char): S ou N (aceitar maiúscula ou minúscula)
*/

#include <stdio.h>

void main(){

  /*ENTRADAS*/

  int categoria,tempo,dia,hora;
  char cupom;
  float distancia,calculo,base,desconto,total,acrescimo;
  desconto = 0;
  acrescimo = 0;
  printf("Diga-me qual a categoria da corrida\n1-Econômico\n2-Conforoto\n3-Moto\n");
  scanf("%d",&categoria);
  printf("Diga-me a distancia desta corrida(km), tempo estimados(minuto) e hora de início(entre 0 a 23)\n");
  scanf("%f,%d,%d",&distancia,&tempo,&hora);
  printf("Qual dia da semana?\n1-Segunda\n2-Terça\n3-Quarta\n4-Quinta\n5-Sexta\n6-Sabado\n7-Domingo\n");
  scanf("%d",&dia);
  printf("Você tem cupom?\nS-Sim;\nN-Não\n");
  scanf("%c",&cupom);
  
  /* VALIDAÇÕES*/

  switch(categoria){
    /*ECONOMICO CATEGORIA*/
    case 1:
      /* VERIFICAR DADOS INCORRETOS*/
      if (tempo <= 0 || distancia <=0 || dia > 7 || dia < 1 || hora >23 || hora < 0 ){
        printf("Dados incorreto");
        break;
      }
      switch(cupom){
        case 's':
        case 'S':
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18 && dia >=1 && dia <=5 ){
            /*não pode cupom mais tem 30% de acrescimo*/  
            printf("Cupom invalido em horario de pico\n");
            base = 4+(distancia*1.4)+(tempo*0.25); 
            if (base<8) base = 8;
            acrescimo = (base*30)/100;
            total = base+acrescimo;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO-----\nCategoria   escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: Não aplicavél;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,total);
            break;
          }
          else if (hora >=0 && hora <=5){
            /*pode cupom mais tem 20% de acrescimo*/
            base = 4+(distancia*1.4)+(tempo*0.25); 
            if (base<8) base = 8;
            acrescimo = (base*20)/100;
            total = base+acrescimo;
            desconto = (total*10)/100;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO---0--\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }else{
            /* aqui so vai fazer o calculo sem desconto ou acrescimo */
            base = 4+(distancia*1.4)+(tempo*0.25); 
            if (base<8) base = 8;
            total = base+acrescimo;
            desconto = (total*10)/100;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO---0--\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }
        case 'n':
        case 'N':
        /*esse aqui tive que pesquisar um teco para conseguir o maisculo e minusculo*/
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18 && dia >=1 && dia <=5){
            /*vai ter acrescimo de 30% e não pode cupom*/
            base = 4+(distancia*1.4)+(tempo*0.25);
            if (base<8) base = 8;
            acrescimo = (base*30)/100;
            total = base+acrescimo;
            printf("-----RESUMO-----\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }
          else if (hora >=0 && hora <=5){
            /*Acrescimo de 20% e não pode cupom */
            base = 4+(distancia*1.4)+(tempo*0.25);
            acrescimo = (base*20)/100;
            total = base+acrescimo;
            printf("-----RESUMO-----\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }else{
            base = 4+(distancia*1.4)+(tempo*0.25);
            /* se for menor que o valor minimo vira minimo */
            if (base<8) base = 8;
            total = base+acrescimo;
            printf("-----RESUMO---0--\nCategoria escolhida: Economico;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }
        }
    /*CONFORTO*/
    case 2:
      /*VALIDAÇÕES 2*/
      if (tempo <= 0 || distancia <=0 || dia > 7 || dia < 1 || hora >23 || hora < 0 ){
        printf("Dados incorreto");
        break;
      }
      switch(cupom){
        case 's':
        case 'S':
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18 && dia >=1 && dia <=5 ){
            /*não pode cupom mais tem 30% de acrescimo*/  
            printf("Não pode cupom no seu caso devido ao horario de pico\n");
            base = 6+(distancia*2.1)+(tempo*0.4); 
            if (base<12) base = 12;
            acrescimo = (base*30)/100;
            total = base+acrescimo;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO-----\nCategoria escolhida: Conforto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: Não aplicavél;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,total);
            break;
          }
          else if (hora >=0 && hora <=5){
            /*pode cupom mais tem 20% de acrescimo*/
            base = 6+(distancia*2.1)+(tempo*0.4); 
            if (base<12) base = 12;
            acrescimo = (base*20)/100;
            total = base+acrescimo;
            desconto = (total*10)/100;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO---0--\nCategoria escolhida: Conforto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }else{
            /* aqui so vai fazer o calculo sem desconto ou acrescimo */
            base = 6+(distancia*2.1)+(tempo*0.4); 
            if (base<12) base = 12;
            total = base+acrescimo;
            desconto = (total*10)/100;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO---0--\nCategoria escolhida: Conforto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
            }
        case 'n':
        case 'N':
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18 && dia >=1 && dia <=5){
            /*vai ter acrescimo de 30% e não pode cupom*/
            base = 6+(distancia*2.1)+(tempo*0.4);
            if (base<12) base = 12;
            acrescimo = (base*30)/100;
            total = base+acrescimo;
            printf("-----RESUMO---30--\nCategoria escolhida: Conforto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }
          else if (hora >=0 && hora <=5){
            /*Acrescimo de 20% e não pode cupom */
            base = 6+(distancia*2.1)+(tempo*0.4);
            acrescimo = (base*20)/100;
            total = base+acrescimo;
            printf("-----RESUMO---20--\nCategoria escolhida: Conforto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }else{
            base = 6+(distancia*2.1)+(tempo*0.4);
            /* se for menor que minimo vira minimo*/
            if (base<12) base = 12;
            total = base+acrescimo;
            printf("-----RESUMO---0--\nCategoria escolhida: Conforto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }
        }
    /*MOTO*/
    case 3:
      /*validação mas com condição da moto tmb*/
      if (tempo <= 0 || distancia <=0 || dia > 7 || dia < 1 || hora >23 || hora < 0 ){
        printf("Dados incorreto");
        break;
      }else if (distancia >=20){
        printf("Na categoria moto a distancia não pode passar de 20km...");
        break;}
      switch(cupom){
        case 's':
        case 'S':
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18 && dia >=1 && dia <=5 ){
            /*não pode cupom mais tem 30% de acrescimo*/  
            printf("Não pode cupom no seu caso devido ao horario de pico\n");
            base = 2.5+(distancia*0.9)+(tempo*0.15); 
            if (base<5) base = 5;
            acrescimo = (base*30)/100;
            total = base+acrescimo;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO-----\nCategoria escolhida: Moto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: Não aplicavél;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,total);
            break;
          }
          else if (hora >=0 && hora <=5){
            /*pode cupom mais tem 20% de acrescimo*/
            base = 2.5+(distancia*0.9)+(tempo*0.15); 
            if (base<5) base = 5;
            acrescimo = (base*20)/100;
            total = base+acrescimo;
            desconto = (total*10)/100;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO---0--\nCategoria escolhida: Moto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }else{
            /* aqui so vai fazer o calculo sem desconto ou acrescimo */
            base = 2.5+(distancia*0.9)+(tempo*0.15); 
            if (base<5) base = 5;
            total = base+acrescimo;
            desconto = (total*10)/100;
            if (desconto>5) desconto=5;
            total = total-desconto;
            printf("-----RESUMO---0--\nCategoria escolhida: Moto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }
        case 'n':
        case 'N':
          if (dia >=1 && dia <=5 && hora >=6 && hora <= 8 || hora >= 17 && hora <=18 && dia >=1 && dia <=5){
            /*vai ter acrescimo de 30% e não pode cupom*/
            base = 2.5+(distancia*0.9)+(tempo*0.15);
            if (base<5) base = 5;
            acrescimo = (base*30)/100;
            total = base+acrescimo;
            printf("-----RESUMO---30--\nCategoria escolhida: Moto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }
          else if (hora >=0 && hora <=5){
            /*Acrescimo de 20% e não pode cupom */
            base = 2.5+(distancia*0.9)+(tempo*0.15);
            if (base<5) base = 5;
            acrescimo = (base*20)/100;
            total = base+acrescimo;
            printf("-----RESUMO---20--\nCategoria escolhida: Moto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f",distancia,tempo,base,acrescimo,desconto,total);
          }else{
            base = 2.5+(distancia*0.9)+(tempo*0.15);
            if (base<5) base = 5;
            total = base+acrescimo;
            printf("-----RESUMO---0--\nCategoria escolhida: Moto;\nDistancia: %d;\nTempo: %d\nValor base: %.2f;\nAcréscimo: %.2f;\nDesconto: %d;\nTotal:\nR$ %.2f\n",distancia,tempo,base,acrescimo,desconto,total);
            break;
          }
          /* se a corrida for moto se km for maior q 20 não pode */
      }
    default: printf("\nDado invalido");break;  
  }
}