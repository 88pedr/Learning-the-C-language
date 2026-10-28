*Faça um algoritmo que leia o usuário e a senha de um sistema e confira se:
// Usuário = "ALUNO" , Senha = "ifba". Caso não seja permita que a pessoa erre apenas 3
//vezes antes de bloquear o sistema
%s, %[a-z A-Z], %[*\n]*/
#include <stdio.h>
#include <string.h>

    void main(){
        char usuario[15],senha[15];
        int cont=0;
        do{
            printf("Usuário = ");
            scanf("%s",usuario);
            printf("Senha = ");
            scanf("%s",senha);

            if((strcmp(usuario,"ALUNO")==0) && (strcmp(senha,"ifba")==0)){
                printf("Acesso Permitido!\n");
                break;
            }else{
                cont++;
                printf("Acesso Negado! Você usou a sua %dª tentativa!\n",cont);
                if(cont==3) printf("Sistema bloqueado!\n");
            }
        }while(cont<3);
    }