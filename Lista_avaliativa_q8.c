/*Exercício 8. 
Validação com do-while (1,0 pt)
Leia duas notas de um aluno, repetindo a leitura de cada nota enquanto ela estiver
fora do intervalo [0, 10] (exiba Nota inválida! a cada tentativa errada). Calcule a
média e informe a situação: Aprovado (média ≥ 7,0), Prova final (4,0 ≤ média < 7,0)
ou Reprovado (média < 4,0). Ao final, pergunte: Calcular outro aluno? (s/n) e
repita todo o processo enquanto a resposta for s ou S .
*/
#include <stdio.h>
#define m 2;
void main(){
  char r='s';
  float n1,n2,media;  
  while(r =='s'||r=='S'){
    printf("Diga-me sua nota aluno\n");
    scanf("%f%f",&n1,&n2);
    while(n1<0||n1>10||n2>10||n2<0){
    printf("Nota invalida!\n");
    scanf("%f\n%f\n",&n1,&n2);
  }
    media = (n1+n2)/m;
    printf("Sua nota 1 foi de %.1f\n Sua nota 2 foi de :%.1f\n e sua media foi de: %.2f\n",n1,n2,media);
    printf("Voce quer adicionar nota de outro aluno?\ns-sim\nn-não");
    scanf("%c",&r);
  }
  printf("Programa se encerrou");
}
