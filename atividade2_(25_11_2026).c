/*
Faḉa um algoritmo que verifique se dois numeros sao amigos. Dois números sao amigos quando a soma dos divisodres dele (todos os divisores exceto ele mesmo) é igual ao outro numero e vice-versa. ex: 220 e 284 (divisores de 220 = 110+ 55)
*/
void main(){
    int n1,n2,n1_soma=0;
    char resp='s';
    do{
        printf("Diga-me dois numeros para ver se eles são amigos\n");
        scanf("%d%d",&n1,&n2);
        for(int i=1;i<n1;i++){
            if (n1%i==0){
                n1_soma=n1/i;
            }
        }
        
    if (n1_soma==n2){
        printf("São amigos\n");
    }else{printf("Não são amigos\n");}
    printf("Que continuar?\n");
    scanf("%c",&resp);
    }while(resp=='s'||resp=='S');
}


//nao terminei
