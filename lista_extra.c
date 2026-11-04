/*Contexto
Uma empresa de transporte por aplicativo de Feira de Santana precisa de um programa
que simule o preço de uma corrida antes de o passageiro confirmar a viagem. Escreva um
programa em C que leia os dados da corrida, calcule o valor a pagar seguindo as regras
abaixo e exiba um resumo.
*/

/*
Categoria Bandeirada Por km Por minuto Tarifa mínima
1 – Econômico R$ 4,00 R$ 1,40 R$ 0,25 R$ 8,00
2 – Conforto R$ 6,00 R$ 2,10 R$ 0,40 R$ 12,00
3 – Moto R$ 2,50 R$ 0,90 R$ 0,15 R$ 5,00
*/

/*
Entradas (nesta ordem)
1. Categoria (int): 1– Econômico, 2– Conforto, 3– Moto;
2. Distância da corrida em km (float);
3. Tempo estimado em minutos (int);
4. Dia da semana (int): 1– Domingo, 2– Segunda, ..., 7– Sábado;
5. Hora de início (int, de 0 a 23);
6. Possui cupom? (char): S ou N (aceitar maiúscula ou minúscula)
*/

#include <stdio.h>
#define c_s 0.3
#define c_h 0.2
#define des 0.1
#define des_m 5
void main(){
    //DECLARAÇÕES DE VARIAVIES
    int categoria,tempo,dia,hora,h_calculo,min_calculo;
    char cupom;//antes fazia um switch para isso
    float distancia,base,desconto,acrescimo,total,p_k,p_m,band,taf_m;
    desconto= 0;
    acrescimo= 0;

    //ENTRADAS
    printf("Diga-me qual a categoria da corrida\n1-Econômico\n2-Conforoto\n3-Moto\n");
    scanf("%d",&categoria);

    printf("Diga-me a distancia desta corrida(km), tempo estimados(minuto) e hora de início(entre 0 a 23)\n");
    scanf("%f%d%d",&distancia,&tempo,&hora);

    printf("Qual dia da semana?\n1-Domingo\n2-Segunda\n3-Terça\n4-Quarta\n5-Quinta\n6-Sexta\n7-Sabado\n");
    scanf("%d",&dia);

    printf("Você tem cupom?\nS-Sim;\nN-Não\n");
    scanf(" %c",&cupom);

    //VALIDAÇÕES
    //antes eu fazia validação para cada switch...
    if (tempo <= 0 || distancia <=0 || dia > 7 || dia < 1 || hora >23 || hora < 0|| categoria<1||categoria>3){
        printf("Dados incorretos");
        return 0;
    }
    if(categoria==3&&distancia>20){
        printf("Na categoria moto a distancia não pode passar de 20km...");
        return 0;
    }
    //SELEÇÃO DA TARIFA
    switch(categoria){
        case 1:
            band=4.00;
            p_k=1.40;
            p_m=0.25;
            taf_m=8.00;
            break;
        case 2:
            band=6.00;
            p_k=2.10;
            p_m=0.40;
            taf_m=12.00;
            break;
        case 3:
            band=2.50;
            p_k=0.90;
            p_m=0.15;
            taf_m=5.00;
            break;
    }
    //CÁLCULO DO VALOR BASE
    base=band+(distancia *p_k)+(tempo*p_m);
    //n tem como a base ser menor q a tarifa minima
    if(base<taf_m) {
        base=taf_m;
    }
    //TAXAS E DESCONTOS
    //Verificar horario de pico
     if(dia >= 2 && dia <=6 && hora >=6 && hora <= 8 || hora >= 17 && hora <=19 && dia >=2 && dia <=6){
        acrescimo=base*c_s;//acrescimo semana 30%
        if(cupom=='S'||cupom=='s'){
            printf("Cupom não aplicável em horário de pico.\n");
        }
        desconto=0;
    } 
    //verifica madrugada
    else if(hora>=0&&hora<=5){
        acrescimo=base*c_h;// acréscimo madrugada 20%
        if (cupom=='S'||cupom=='s'){
            desconto=(base+acrescimo)*des; // Desconto de 10% mesmo na madrugada
            if(desconto>des_m){//desconto minimo
                desconto=des_m; //Limite de 5 
            }
        }
    } 
    //restante
    else {
        acrescimo=0;
        if (cupom =='S'||cupom=='s'){
            desconto=base* des; // 10% 
            if (desconto>des_m) {
                desconto=des_m;
            }
        }
    }
    //CALCULANDO E FORMATANDO
    total=(base+acrescimo) - desconto;
    //Conversão do tempo 
    h_calculo=tempo/60;
    min_calculo=tempo%60;
    //finalmente FIM agora sem 30 tipos de printf existentes 
    printf("\n------------RESUMO------------\n");
    //a categoria
    if(categoria==1)printf("Categoria escolhida: Economico;\n");
    else if(categoria==2)printf("Categoria escolhida: Conforto;\n");
    else printf("Categoria escolhida: Moto;\n");
    //distancia
    if(distancia<5.0){
        printf("Distancia: %.1f km (corrida curta);\n",distancia);
    }else if(distancia>=5.0&&distancia<=15.0){
        printf("Distancia: %.1f km (corrida media);\n",distancia);
    }else {
        printf("Distancia: %.1f km (corrida longa);\n",distancia);
    }
    printf("Tempo: %dh %dmin;\nValor base: R$ %.2f;\nAcrescimo: R$ %.2f;\nDesconto: R$ %.2f;\nTotal:\nR$ %.2f\n",h_calculo, min_calculo,base,acrescimo,desconto,total);
}
//cqd: como queria demonstrar