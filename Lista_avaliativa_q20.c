/*
Exercício 20. Menu de conversões (1,0 pt)
Implemente um menu que se repete ( do-while com switch ) até o usuário escolher
0 :
===== CONVERSOES =====
1 - Decimal para binario
2 - Binario para decimal
3 - Tabela Celsius -> Fahrenheit
0 - Sair
Opcao:
1. Leia um inteiro não negativo e exiba sua representação binária (sem vetores:
monte o resultado como um número inteiro formado por dígitos 0 e 1, por
exemplo, 13 → 1101).
2. Leia um número formado apenas por dígitos 0 e 1 (ex.: 1101 ) e exiba
seu valor decimal. Se houver algum dígito diferente de 0 ou 1, informe
Número binário inválido .
3. Leia uma temperatura inicial, uma final e um passo (positivo) e exiba a tabela
de conversão F =
9
5C + 32.
Opção inexistente deve exibir Opção inválida! e retornar ao menu.
*/
#include <stdio.h>
void main(){
    int resp,n,bi=0,resto=0,multiplicador=1;
    //parte de C° para F°
    float f1,f2;
    int p;
    //----------------------------------------------------
    printf("Escolha:\n1-De decimal para binario\n2-Binario para decimal\n3-Celsius -> Fahrenheit\n");
    scanf("%d",&resp);
    switch (resp){
        case 1:
            printf("Diga-me o numero para converte:");
            scanf("%d",&n); 
            printf("O numero %d tem o decimal: ",n);
            for(;n>0;n=n/2){
                resto=n%2;
                bi+=(resto*multiplicador);
                multiplicador*=10;
            }
            printf("%d",bi);
            break;
        case 2:
            printf("Diga-me o numero para eu converter:");
            scanf("%d",&n);
            printf("O numero binario %d em decimal fica:",n);
            for(;n>0;n=n/10){
                resto=n%10;
                bi+=(resto*multiplicador);
                multiplicador*=2;
            }
            printf("%d",bi);
            break;
        case 3:
            printf("Diga-me uma temratura inicial uma final e o incremento(velocidade que aumenta)\n");
            scanf("%f%f%d",&f1,&f2,&p);
            if (f1>f2){bi=f1;f1=f2;f2=bi;}
            for(;f1<f2;f1+=p){
                printf("Em C° ficaria %.0f C°\n",f1);
                printf("Em F° ficaria %.1f F°\n",((9.0/5.0*f1)+32));
            }
            break;
        default:printf("Na proxima insira um dado correto...");
    }
}

