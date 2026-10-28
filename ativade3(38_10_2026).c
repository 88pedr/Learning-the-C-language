/*faça um algoritmo que leia n numeros e ao final calcule e exiba
media aritimetica dos valores lidos
quantidade de valores positivos e de velores negativos 
percentual de valores postivos e negativos em relação ao total

apos cada numero digitado pergute ao usus se deseja continuar ou encerrar o programa exibaos resultado apenas o qaundo o usario optar por parar use percentual = (quantidade/total)*100 */

#include <stdio.h>
void main(){
    float numero=0,total=0,media,porcento_p,porcento_n,negativo,positivo;
    int n=0;
    char r='s';
    while(r == 's'){
        printf("Diga-me um numero\n");
        scanf("%f",&numero);
        printf("Voce quer adicionar outro?\n");
        scanf("%c",&r);
        if (numero<0) negativo += 1;
        if (numero>0) positivo += 1;
        total = total+numero;
        n++;
    }
    media = total/n;
    porcento_p = (positivo/n)*100;
    porcento_n = (negativo/n)*100;
    printf("A media dos numeros foi de %.2f",media);
    printf("\nTem %d numeros negativos",negativo);
    printf("\nTem %d numeros positivos",positivo);
    printf("\n%f%% de positivos\n%f%% de negativos",porcento_p,porcento_n);
}
/* quando tenho um valor e quero mudar seu tipo preciso realizar um cast usando tipo. tenho soma que é int e para dar o cast nele é  botar atras o (float)soma
*/