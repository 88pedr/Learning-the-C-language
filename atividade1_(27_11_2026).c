/*Faça um algoritmo que leia os lados de um triâgulo, valide-o (a<b+c, b<a+c, c<a+b) e depois informe se ele isósceles, escaleno ou equilátero (USAR TERNÁRIO)*/
#include <stdio.h>

void main(){
    float a,b,c;
    char resp;

    do{
        printf("Informe as medidas dos lados do triângulo:\n");
        scanf("%f%f%f%*c",&a,&b,&c);

        if((a>0)&&(b>0)&&(c>0)){

            ((a<(b+c))&&(b<(c+a))&&(c<(b+a)))?printf("Triângulo válido!\n"):printf("Não é um triângulo!\n");

            ((a<(b+c))&&(b<(c+a))&&(c<(b+a)))?((a==b)&&(b==c))?printf("Equilátero!\n"):((a!=b)&&(b!=c)&&(a!=c))?printf("Escaleno!\n"):printf("Isósceles!\n"):printf("\n");

        }else printf("Os lados do triângulo não podem ser negativos nem nulos!\n");

        printf("Deseja sair? S-Sim e N-Não\n");
        scanf("%c%*c",&resp);
    }while(resp!='S');
}