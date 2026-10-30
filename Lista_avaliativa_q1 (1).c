/*
Exercício 1. Classificador de triângulos (1,0 pt)
Leia três valores reais correspondentes aos lados de um triângulo. Verifique se eles
podem formar um triângulo (cada lado deve ser positivo e menor que a soma dos
outros dois). Em caso afirmativo, classifique-o quanto aos lados (equilátero, isósceles
ou escaleno) e informe também se ele é retângulo (pelo teorema de Pitágoras). Caso
contrário, exiba Não forma triângulo .
*/
#include <stdio.h>
#include <math.h>
void main(){
    float n1,n2,n3;
    printf("Diga-me 3 numeros:\n");
    scanf("%f,%f,%f",&n1,&n2,&n3);
    if(n1<0||n2<0||n3<0){
        printf("Os lados tem que ser positivo\n");
        break;
    }else if(n1<(n2+n3)||n2<(n1+n3)||n3<(n2+n1)){          printf("pode forma um triangulo\n");
        if (n1==n2 && n2==n3)printf("é um triangulo Equilatero\n");
        else if(n1==n2||n2==n3||n1==n3)printf("Isosceles\n");
        else printf("Escaleno\n");
    }
    if (pow(n1,2)==pow(n2,2)+pow(n3,2)||pow(n2,2)==pow(n1,2)+pow(n3,2)||pow(n3,2)==pow(n2,2)+pow(n1,2))printf("também é retangulo\n");
    else printf("E não é retangulo\n");
}