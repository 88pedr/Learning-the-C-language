/*Faça um algoritmo que leia as medidas dos lados de um
triangulo, valide-o e informe se ele é isósceles, escaleno ou equilatero
para um triangulo ser valido, sendo a,b e c as medidas dos seus lados:
a<b+c
b<a+c
c<a+b
*/
#include <stdio.h>

void main(){
    float lado_1,lado_2,lado_3;
    printf("Diga-me quais são as medidas do seu triangulo?\n");
    scanf("%f,%f,%f", &lado_1,&lado_2,&lado_3);
    ((lado_1<(lado_2+lado_3)) && (lado_2<(lado_1+lado_3)) && (lado_3<(lado_1+lado_2)))?printf("Boa é um triangulo brabo\n"):printf("não é um triangulo pivete\n");
    
    (lado_1==lado_2)&&(lado_2==lado_3)?printf("Equilatero"):(lado_1==lado_2) && (lado_2!= lado_3)||(lado_1!=lado_2)&&(lado_2==lado_3)?printf("isósceles"):printf("escaleno");
}
//CQD
//& sozinho é bit for bit ele compara resultando em 1 ou 0
//&& valor logico E
//== comparação
//= receber
