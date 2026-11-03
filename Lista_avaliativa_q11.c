/*
Exercício 11. Números primos (1,0 pt)
Leia dois inteiros A e B (se A > B, troque-os). Liste todos os números primos do
intervalo [A, B] e, ao final, informe quantos foram encontrados. Use laços aninhados:
o laço externo percorre o intervalo e o interno testa os divisores. Otimize o teste
interrompendo-o ( break ) assim que um divisor for encontrado e testando divisores
apenas até √
n (condição d * d <= n ). Lembre-se: 0 e 1 não são primos.
}else if(i%i==0&&i%1==0&&i%i+1!=0){
        printf("%d ",i);
        printf("é primo\n");
      }else printf("\nNão é primo e é %d\n",i);
*/
#include <stdio.h>
void main(){
  int a,b,aux,primo,primo_q;
  printf("Diga-me dois numeros inteiros\n");
  scanf("%d%d",&a,&b);
  if(a>b){
    aux=a;
    a=b;
    b=aux;
  }
  //para conseguir limitar a lista fiz i=a onde minha condição envolvia b
  for (int i=a;i<=b;i++){
    //agora vou testar para ter certeza com alguns numeros
    //onde vai verificar para cada numero e ver se é primo
    //ainda to com duvida como resolver a questao dos semiprimos
    for(int w=2;w<11;w++){
        if(i%i==0&&i%1==0&&i%w!=0){
        }else if(i==w){}
        else{primo=1;break;}}
        if(i==0||i==1){
        printf("%d não é primo\n",i);
        }else if(primo==0){printf("é primo %d\n",i);primo_q++;}
        else printf("Não é primo %d\n",i);
        primo=0;
  }
}
//rpz aqui eu cozinhei demais