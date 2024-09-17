#include <stdio.h>
#include <string.h>

/*
1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/
int main()
{
    int valor;
    printf("Insira o número: ");
    scanf("%i", &valor);
    int fibonacci[valor];
    
    if(valor == 0){
            fibonacci[1] = 0;
            printf("Pertence a sequência");
        } 
    if(valor == 1){
            fibonacci[1] = 1;
            printf("Pertence a sequência");
        }

    if(valor > 1){
       for(int i=0; i<=valor; i++){
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
            if(valor == i){
                printf("Pertence a sequência");
            }
            if(i > valor){
                printf("Naõ pertence a sequência");
            }
        } 
    }
 
}

/*
2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
*/

int main()
{
    char palavra[15];
    printf("Insira a palavra: ");
    scanf("%s", palavra);
    int flag = 0;
    int cont = 0;
    
    for(int i=0; i<strlen(palavra); i++){
        if(palavra[i] == 'a' || palavra[i] == 'A'){
            flag = 1;
            cont++;
        }
    }
    
    if(flag == 1){
        printf("Tem a letra a ou A, e ela aparece %i vez(es).", cont);
    }
    else{
        printf("Não há a letra a ou A.")
    }
}

/*
3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?

RESPOSTA = 77
*/

int main(){
    int indice = 12;
    int soma = 0;
    int k = 1;
    
    while(k < indice){
        k = k+1;
        soma = soma+k;
    }
    
    printf("%i", soma);
}

/*
4) Descubra a lógica e complete o próximo elemento:
a) 1, 3, 5, 7, 9, 11, 13
b) 2, 4, 8, 16, 32, 64, 128, 256, 512
c) 0, 1, 4, 9, 16, 25, 36, 49, 64, 81
d) 4, 16, 36, 64, 104, 154, 214
e) 1, 1, 2, 3, 5, 8, 13, 21, 34
f) 2, 10, 12, 16, 17, 18, 19, 20, 21, 22
*/

/*
5) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. 
Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. 
Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, 
usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada? 

RESPOSTA: Eu ligaria dois interruptores de uma vez e iria até uma sala, se a luz  estiver liagada eu voltaria e apagaria um interruptor,
e dessa forma poderia confirmar qual interruptor estava ligado a essa sala, se estiver desligada eu ja saberia qual interruptor é.

*/