/*Leia um mês (1–12) e um ano e informe quantos dias aquele mês possui. Use switch,
aproveitando o fall-through, para agrupar os meses de 30 e 31 dias. Para fevereiro,
considere que um ano é bissexto se for divisível por 4 e não por 100, ou se for divisível
por 400. Valide o mês (mês inválido deve gerar mensagem de erro).*/

/*
• Meses com 31 dias (7 meses): Janeiro, Março, Maio, Julho, Agosto, Outubro e Dezembro.

• Meses com 30 dias (4 meses): Abril, Junho, Setembro e Novembro.

• O caso de Fevereiro: Ficou com 28 dias (ou 29 em anos bissextos) para fechar a conta exata dos 365 dias do ano.
*/
#include <stdio.h>
void main(){
    int dia,ano;
    char r;
    printf("Diga-me um numero de 1 a 12 e um ano :\n");
    scanf("%d%d",&dia,&ano);
    switch(dia){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("O mês %d tem 31 dias do ano de %d",dia,ano);break;
        case 4:
        case 6:
        case 9:
        case 11:printf("O mês %d tem 30 dias do ano de %,d",dia,ano);
        case 2: if(ano%4==0&&ano%100!=0||ano%400==0){printf("O mês %d tem 29 dias do ano %d",dia,ano);break;}
        else printf("O mês %d tem 28 dias do ano %d",dia,ano);break;
        default: printf("Os dados estão invalidos");break;
    }
}