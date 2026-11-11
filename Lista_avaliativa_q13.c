/*
Exercício 13. Aproximando π com uma série (1,0 pt)
A série de Leibniz converge para π/4:
S = 1 −1/3+1/5−1/7+1/9− · · ·=pi/4

a) Leia N e calcule 4S usando os N primeiros termos (use for ; alterne o sinal sem usar pow ).
*/
#include <stdio.h>
void main(){
    int n,acumulo,num,y=-1,a=0;
    float div=0,s4=0;
    printf("Diga-me um numero inteiro positivo\n");
    scanf("%d",&n);
    for(int y=1,i=0;i<n;y=y*-1,i++){
        num=1*y;
        acumulo = i*2+1;
        div += (float) num/(float) acumulo;
        }
        s4=div*4;
    printf("s4 = %f",s4);

//b) Usando while , descubra quantos termos são necessários para que |4S − π| < 0,001 (use π ≈ 3,14159265358979). Por que aqui while é mais adequado que for ?
    int cont=0,t=1;
    //zerar tudo para nao dar problema
    num=0;
    acumulo=0;
    s4=0;
    div=0;
    while ((s4-3.14159265358979)>=0.001||(s4-3.14159265358979)<=-0.001){
        num=1*t;
        acumulo = cont*2+1;
        div += (float)num/(float)acumulo;
        s4 = div*4;
        cont++;
        t=t*-1;
    }
    printf("\n%.2f e foi necessarios %d",s4,cont);
}
