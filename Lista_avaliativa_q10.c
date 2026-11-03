/*
Leia um inteiro não negativo e, usando apenas os operadores / e % dentro de um
laço, informe: a quantidade de dígitos, a soma dos dígitos, o número invertido e se
ele é um palíndromo. Atenção ao número 0 , que possui 1 dígito.
*/
#include <stdio.h>
void main(){
  int n1,aux,invert,soma,digito;
  float aux_d;
    printf("Diga-me um numero inteiro não negativo\n");
    scanf("%d",&n1);
    aux=n1;
  if(n1>0){
    while(aux>0){
      if(aux==n1){}
      else invert*=10;
      aux_d=aux%10;
      aux=aux/10;
      soma+=aux_d;
      invert+=aux_d;
      digito++;
    }
    if(invert==n1){
      printf("A quantidade de digitos é %d\nA soma dos digitos é: %d\nO numero invertido é: %d\nE ele é um palídromo",digito,soma,invert);
    }else{
        printf("A quantidade de digitos é %d\nA soma dos digitos é: %d\nO numero invertido é: %d\nE ele é não palíndromo",digito,soma,invert);
    }
  }else{
    printf("Por favor digite um numero inteiro e não negativo");
  }
}
