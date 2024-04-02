#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numero = rand() % 101;
    int tentativa;
    int i = 0;
    int tentativas_restantes = 5;

    printf("Tentativas restantes: %d\n", tentativas_restantes);
    printf("Digite a senha: ");

    do
    {
        scanf("%d", &tentativa);
        tentativas_restantes --;
        if(tentativa < numero){
            printf("\n\nA senha e maior que o numero inserido \nTentativas restantes: %d\n~ ", tentativas_restantes);
        }else if(numero < tentativa){
            printf("\n\nA senha e menor que o numero inserido \nTentativas restantes: %d\n~ ", tentativas_restantes);
        }else if(numero < 0 || numero > 100){
            printf("\n\nO numero digitado é inválido! \nTentativas restantes: %d\n~ ", tentativas_restantes);
        }
        i++;
    } while (numero != tentativa && i < 5);

    if( i == 5  && numero != tentativa){
        printf("Senha incorreta! Numero de tentativas excedido!\n");
    }else{
        printf("Senha correta! Acesso garantido!\n");
    }


    
    

    return 0;
}
