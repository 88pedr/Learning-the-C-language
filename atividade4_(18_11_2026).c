/*
uma empresa deseja saber qual é o funcionario mais recente e o mais antigo. leia um numero indeterminado de funcionaos(maximo 300), contendo: 
matricula, 
meses de trabalho, 
idade, 
nome e 
cargo. 
ao final, exiba os dados dos dois fuincionairos identificados. OBS:assuma que nao ha dois funcionais admitidos no mesmo mes
*/
#include <stdio.h>
#include <string.h>
#define TAM 300
void main(){
    int matricula,meses,idade,funcionario_velho,funcionario_novo,idade_v,matricula_v,cont=1,idade_n,matricula_n,tempo_empresa,tempo_v,tempo_n;
    char nome[30],cargo[30],resp,nome_v[30],cargo_v[30],cargo_n[30],nome_n[30];
    do{
        printf("Diga-me o nome do funcionario\n");
        scanf("%s",&nome);
        printf("Diga-me a idade do funcionario\n");
        scanf("%d",&idade);
        printf("Diga-me a matricula do funcionario\n");
        scanf("%d",&matricula);
        printf("Diga-me o cargo do funcionario\n");
        scanf("%s",&cargo);
        printf("Diga-me o tempo de empresa do funcionario(ANOS)\n");
        scanf("%d",&tempo_empresa);
        printf("Voce quer adicionar mais funcionarios? maximo de 300...");
        if (cont==1){
            funcionario_novo=idade;
            funcionario_velho=idade;
        }
        if(funcionario_velho<idade){
            funcionario_velho=idade;
            strcpy(nome_v,nome);
            idade_v= idade;
            matricula_v=matricula;
            strcpy(cargo_v,cargo);
            tempo_v = tempo_empresa;
        }
        
        if(funcionario_novo>=idade){
            funcionario_novo=idade;
            strcpy(nome_n,nome);
            idade_n= idade;
            matricula_n=matricula;
            strcpy(cargo_n,cargo);
            tempo_n=tempo_empresa;
        }
        cont++;
        scanf("%c",&resp);
    }while (resp=='s'|| resp=='S'&&cont!=300);
    printf("O funcionario mais antigo é: %s\nCom idade de %d\nMatricula: %d\nCargo: %s \nTempo de empresa de %d anos",nome_v,idade_v,matricula_v,cargo_v,tempo_v);
    printf("\nO funcionario mais nove é: %s\nCom idade de %d\nMatricula: %d\nCargo: %s\nTempo de empresa de %d anos",nome_n,idade_n,matricula_n,cargo_n,tempo_n);
}