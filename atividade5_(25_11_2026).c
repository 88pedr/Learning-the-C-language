/*
a serie de fibonacci é dad por :
fib= 1 1 2 3 5 8 13 21 54...
ibde fubu -1 fib2 =1 e os demais termo podem ser calculador como fibn=(n-1)+fib(n-2). 
faça um algoritmo que lei N(numero inteiro positivo) e informe os N primeiros termos da serie de Fibonacci
*/
#include <stdio.h>
void main(){
    int n1, fib1=1,fib2=1,fibn;
    printf("Diga me um numero inteiro e positivo");
    scanf("%d",&n1);
    for(int i=fib1,cont=1;cont<n1;i=fibn,cont++){
        if (i==1){
            printf("%d %d",fib1,fib2);cont++;
        }
        fibn=i+fib2;
        printf(" %d",fibn);
        fib2=i;
    }
    
}