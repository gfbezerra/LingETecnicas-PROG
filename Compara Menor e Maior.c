#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia 10 números do teclado e 
mostre na tela o maior entre os 5 primeiros e o menor entre os restantes*/

int compara (int a, int b){
    if(a > b)return a;
    else return b;
}

int comparamenor (int a, int b){
    if(a < b)return a;
    else return b;
}


int main(){

    int valor[10];
    int i, maior, menor;

    printf("Vamos ler os valores: \n");
    //for(inicialização; verificação; icremento)
    for (i = 0; i < 10; i++){
        scanf("%d", &valor[i]);
    }

    
    for (i = 1, maior = valor[0]; i < 5; i++){
        int temp = compara(valor[i], valor[i+1]);
        maior = compara(maior, temp);
    }
    printf("\n %d", maior);

    for (i = 1, menor = valor[10]; i < 5; i++){
        int temp = comparamenor(valor[i], valor[i-1]);
        menor = comparamenor(menor, temp);
    }
    printf("\n %d", menor);

}
