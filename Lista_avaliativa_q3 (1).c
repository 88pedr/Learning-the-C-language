/*
Uma distribuidora (valores fictícios) cobra a energia por faixas progressivas: os primeiros 100 kWh custam R$ 0,60 cada; do 101.º ao 200.º kWh, R$ 0,75 cada; o que
exceder 200 kWh custa R$ 0,90 cada. 

Sobre o total, aplica-se a bandeira tarifária: 
V (verde) sem acréscimo, A (amarela) +5% e 
R (vermelha) +10%. 
Leia o consumo e a
letra da bandeira (aceite maiúscula ou minúscula, usando switch ) e mostre o valor
da conta. Uma bandeira inválida deve gerar uma mensagem de erro
*/
#include <stdio.h>
#define tx1 0.6
#define tx2 0.75
#define tx3 0.9
void main(){
    float kwh,t1=60,t2=75,total;
    char bd;
    printf("Diga-me quantos kWh você gastou esse mês e a bandeira do local onde mora\n");
    scanf("%f%c",&kwh,bd);
    switch(bd){
        case 'v':
        case 'V': if(kwh<101){
            total=kwh*tx1;
            printf("%f",total);
            }else if(kwh>=101 && kwh<201){
                kwh-=100;
                total=(kwh*tx2)+t1;
                printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
                break;
            }else{
                kwh-=200;
                total=(kwh*tx3)+t2+t1;
                printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
                break;
            }
        case 'a':
        case 'A':if(kwh<101){
            total=kwh*tx1;
            total += (total*5)/100;
            printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
            break;
            }else if(kwh>=101 && kwh<201){
                kwh-=100;
                total=(kwh*tx2)+t1;
                total += (total*5)/100;
                printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
                break;
            }else{
                kwh-=200;
                total=(kwh*tx3)+t2+t1;
                total += (total*5)/100;
                printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
                break;
            }
        case 'r':
        case 'R':if(kwh<101){
            total=kwh*tx1;
            total += (total*10)/100;
            printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
            }else if(kwh>=101 && kwh<201){
                kwh-=100;
                total=(kwh*tx2)+t1;
                total += (total*10)/100;
                printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
                break;
            }else{
                kwh-=200;
                total=(kwh*tx3)+t2+t1;
                total += (total*10)/100;
                printf("Consumo: %.2f\nBandeira: %c\nTotal à pagar: %f",kwh,bd,total);
                break;
            }
            }

 }