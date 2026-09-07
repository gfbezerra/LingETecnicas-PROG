#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

//Ler um N inteiro e, se ele for positivo, informar seu inverso. Caso contrário, informar o seu quadrado

double numero, inverso, resultado;

printf("Digite um número: ");
scanf("%lf", &numero);


if (numero < 0)  {
    resultado = numero * numero;
    printf("O quadrado do número apresentado é: %.4f", resultado);
} else{
        inverso = 1.0 / numero; 
        printf("O inverso de %.4f é %.4f\n", numero, inverso);
}



//Ler um N e informar se é par ou ímpar

int par, numero;

printf("Digite um número: ");
scanf("%d", &numero);

if ((numero % 2) == 0){
    printf("O número é PAR!");
} else{
    printf("O número é IMPAR!");
}


//Ler um N e, se ele for um quadrado perfeito, informe sua raiz

int numero, raiz;

printf("Digite um número: ");
scanf("%d", &numero);

if (numero < 0){
    printf("Não é um quadrado perfeito");
} else{
    raiz = (int) sqrt(numero);

    if (raiz * raiz == numero){
        printf("%d é um quadrado perfeito, Raiz: %d\n", numero, raiz);
    } else {
        printf("%d não é um quadrado perfeito\n", numero);
    }
}


//Faca um programa que leia do teclado uma letra, e imprima a sua correspondência no "Abecedário da Xuxa"

char letra;

printf("Digite uma letra: ");
scanf("%c", &letra);

if (letra == 'a')
    printf("A de AMOR!");

else if (letra == 'b')
    printf("B de BAIXINHO!");

else if (letra == 'c')
    printf("C de CORACAO!");

else if (letra == 'd')
    printf("D de DOCINHO!");

else if (letra == 'e')
    printf("E de ESCOLA!");

else if (letra == 'f')
    printf("F de FEIJÃO!");

else if (letra == 'g')
    printf("G de GENTE!");

else if (letra == 'h')
    printf("H de HUMANO !");

else if (letra == 'i')
    printf("I de IGUALDADE!");

else if (letra == 'j')
    printf("J de JUVENTUDE!");

else if (letra == 'k')
    printf("K de (não tem k no abecedário da xuxa, sinto muito!)");

else if (letra == 'l')
    printf("L de LIBERDADE!");

else if (letra == 'm')
    printf("M de MOLECAGEM!");

else if (letra == 'n')
    printf("N de NATUREZA!");

else if (letra == 'o')
    printf("O de OBRIGADO!");

else if (letra == 'p')
    printf("P de PROTECAO!");

else if (letra == 'q')
    printf("Q de QUERO-QUERO!");

else if (letra == 'r')
    printf("R de RIACHO!");

else if (letra == 's')
    printf("S de SAUDADE!");

else if (letra == 't')
    printf("T de TERRA!");

else if (letra == 'u')
    printf("U de UNIVERSO!");

else if (letra == 'v')
    printf("V de VITÓRIA!");

else if (letra == 'w')
    printf("W de (A Xuxa não colocou w tbm, sinto muito!)");

else if (letra == 'x')
    printf("X o que que é? É XUXA!");

else if (letra == 'z')
    printf("Z é zum, zum, zum, zum, zum!");



return 0;

}
