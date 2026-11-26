/* 
faça um algoritmo que leia um intervalo fechadoo [x,y]e verifique se dois numeros priumos sao gemeios contidos no intervalo. dois numeros primos sao considerados gemeios quando a diferença entre eles é 2
ex: [1,20] 3,5 5 e 7 11 e 13 17 e 19
*/
#include <stdio.h>
void main(){
    int n1,n2,aux,primo,ant;
    printf("Diga-me dois numeros para eu colocar num intervalo\n");
    scanf("%d%d",&n1,&n2);
    if(n1<n2){
        aux=n1;
        n1=n2;
        n2=aux;
    }
    for(int i=n2;i<n1;i++){
        ant=i;
        primo=1;
        for(int w=2;w*w<=i;w++){
            if(i%w==0){
                primo=0;
                break;
            }
        }
        }if (primo==1&&i-2==an){
            printf("%d e %d são gemeos",i,ant);
        if(primo==1){
            printf("%d é primo\n",i);
        }else{
            printf("%d não é primo\n",i);
        }
        
    
    }
}