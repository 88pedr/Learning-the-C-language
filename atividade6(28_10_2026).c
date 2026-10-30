/*Faça um algoritmo que leia um número inteiro e informe todos os seus divisores*/
#include <stdio.h>

void main(){
int num, divisor;
char resp;

do{
printf("Informe um número inteiro: ");
scanf("%d",&num);

printf("Divisores do número %d:\n",num);
for(divisor=num; divisor>=1; divisor--)
if(num % divisor == 0)
printf("%d\n",divisor);

printf("Deseja verificar novo número? S-Sim e N-Não:\n");
scanf("%c",&resp);

}while((resp=='S')||(resp=='s'));
}