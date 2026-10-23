/*Faça um algoritmo que implemente uma calculadora com as 4 operações básicas (+,-,* e /) a pessoa deve digitar numero operador numero e vc deve mostrar o resultado na tela 
forma: num1 operador num2 = resultado
ex: 8+5=13 */
/*#include <stdio.h>
void main(){
    float num1,num2,cal;
    char op;//um caracter = operador matematico:+,-,* ou /
    printf("Diga-me 1 numero 1 caracter matematico e outro numero\n");
    scanf("%f,%c,%f",&num1,&op,&num2);
    switch(op){
        case '*':
            cal = num1 * num2;
            printf("%2.f",cal);
        break;
        case '+':cal=num1+num2;printf("%.2f",cal);break;
        case '-':cal=num1-num2;printf("%.2f",cal);break;
        case '/':
            if(num2==0){
                printf("Você não pode dividir por zero");
            }else{
                cal=num1/num2;printf("%.2f\n",cal);break;
            }
        default:
            printf("Voce errou");
    }
}*/
//'' usado normalmente para caracter
//"" usado normalmente para string
//tenho minhas duvidas se nao poderia fazer por string
// mas irei testar posteriomente
//%*c limpeza de buffer isso evita que o enter seja lido como caracter em alguns compiladores pode dar esse erro do enter


#include <stdio.h>
void main(){
    float num1,num2,cal;
    int op;
    printf("Informe a operação desejada: \n");
    printf("1- somar\n");
    printf("2- subtração\n");
    printf("3- multiplicação\n");
    printf("4- divisão\n");
    printf("5- exit\n");
    scanf("%d",&op);
    if(op!=5){
        printf("Digas os numeros para calcular");
        scanf("%f,%f",&num1,num2);
        switch(op){
        case 1:
            cal = num1 * num2;
            printf("%2.f",cal);
        break;
        case 2:cal=num1+num2;printf("%.2f",cal);break;
        case 3:cal=num1-num2;printf("%.2f",cal);break;
        case 4:
            if(num2==0){
                printf("Você não pode dividir por zero");
            }else{
                cal=num1/num2;printf("%.2f\n",cal);break;
            }
        default:
            printf("Voce errou");
    }else{
        printf("Exiting...");
    }
    }
}