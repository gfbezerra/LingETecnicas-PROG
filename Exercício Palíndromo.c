#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma palavra e verifique se ela é um palindromo

Entrada: ABBA
Saída: é um palindromo

Um palindromo é uma, frase ou número que pode ser lido da esquerda para a direita 
ou da direita para a esquerda, mantendo exatamente o mesmo sentido*/

//Minha versão:

int main(){

    char palavra[30];
    int i;
    int palindromo = 1;
    int tamanho;
    scanf("%s", &palavra); //%s == string
    printf("\n");
    printf("Inserido: %s", palavra);
    printf("\n");


    for(i = 0; i < 30 && palavra[i] != '\0'; i++){
        printf("%d", i);
    } tamanho = i;

    printf("\nO tamanho da minha palavra é %d\n", (i-1));

    for (i = 0; i < tamanho / 2; i++){
        if (palavra[i] != palavra[tamanho - 1 - i]){
            palindromo = 0;
        }
        

    }

    if (palindromo){
        printf("\né um palindromo");
    } else {
        printf("\nnão é palindromo");
    }
    

   

    return 0;






}


//Versão do professor:

int main(){

    char palavra[30];
    int i;
    int j;
    int palindromo;
    scanf("%s", &palavra); //%s == string
    printf("\n");
    printf("Inserido: %s", palavra);
    printf("\n");


    for (i = 0; i < 30 && palavra[i] != '\0'; i++)
    for (j = i - 1, i = 0; i < j; i++, j--){
        if (palavra[i] == palavra [j]) palindromo = 1;
        else palindromo = 0;
        printf("%d | %d", i, j);

    }

    if (palindromo) printf("eh palindromo");
    else printf("nao eh palindromo");

    return 0;


}
