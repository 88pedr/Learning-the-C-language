/* faça um algoritmo que leia o nome (string), sexo(string) e idade(inteiro) e, informe se a pessoa é:
-menina(menor de 18 anos do sexo feminino)
-menino(menor de 18 anos do sexo masculino)
0jovem(entre 19 e 30 anos ambos sexos)
-adulto(entre 31 a 60 anos do sexo feminino e masculino)
-idoso (acima de 60 anos)
*/
#include <stdio.h>
#include <string.h>

//strcpy(x,y)- copia em x o vvalor de y
//strcmp(x,y) - é igual a - quando x==y
void main(){
    int idade,test=9;
    char nome[20],sexo[10],r='s';
    do{
    printf("Diga-me um nome, seu sexo e idade\n");
    scanf("%s%*c",&nome);
    scanf("%s%*c",&sexo);
    scanf("%d",&idade);
    if(strcmp(sexo,"feminino")==0){
        if (idade<18){printf("%s tem %d e %s e é menor de 18\n",nome,idade,sexo);break;}
        else if(idade>18&&idade<30){printf("%s tem %d e é jovem\n",nome,idade);break;}
        else if(idade>30&& idade<60){printf("%s tem %d e %s\n é adulto\n",nome,idade,sexo);break;}
        else{printf("%s tem %d e %s\n é idoso\n",nome,idade,sexo);break;}
    }else if(strcmp(sexo,"masculino")==0){

        if (idade<18){
            printf("%s tem %d e %s e é menor de 18\n",nome,idade,sexo);
            break;}
        else if(idade>18&&idade<30){
            printf("%s tem %d e é jovem\n",nome,idade);
            break;
            }
        else if(idade>30&& idade<60){
            printf("%s tem %d e %s\n é adulto\n",nome,idade,sexo);
            break;}
        else{
            rintf("%s tem %d e %s\n é idoso",nome,idade,sexo);
            }
        }
    else{printf("Por favor escreva corretamente\n");}
    printf("Quer continuar?\n");
    scanf("%c",&r);
    }while (r=='s'||r=='S');
}
  

