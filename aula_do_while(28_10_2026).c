/* faça um algoritmo que leia as nodas de 20 alunos (3 notas por aluno), calcule a media e mostre*/
#include <stdio.h>
void main(){
    int cont=0;
    float n1,n2,n3,media;
    do{
        printf("Diga-me as 3 notas do %d°aluno\n",cont+1);
        scanf("%f%f%f",&n1,&n2,&n3);
        media = (n1+n2+n3)/3;
        printf("Média = 5.2f do %d°aluno\n",media,cont+1);
        cont++;
    }while(cont<20);
}
/*do while primeiro executa depois confere ruim apenas por causa disso, exemplo: do{
}while(sua condição);
*/