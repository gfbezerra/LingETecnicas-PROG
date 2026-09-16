#include <stdio.h>
#include <stdlib.h>

//Exercício 1: Permutação

int main(){
 int num1, num2, num3, num4, troca;

 printf("Digite o primeiro número: ");
 scanf("%d",&num1);

 printf("Digite o segundo número: ");
 scanf("%d",&num2);

 printf("Digite o terceiro número: ");
 scanf("%d",&num3);

 printf("Digite o quarto número: ");
 scanf("%d",&num4);

 troca = num1;
 num1 = num3;
 num3 = num4;
 num4 = num2;
 num2 = troca;

 printf("A permutação dos números ficou: %d, %d, %d, %d", num1, num2, num3, num4);


return 0;
}


//Exercício 2: Indicador P/VP

int main(){

    float pvp, vpa, valor_empresa, quant_acoes, preco_acao;

    printf("Digite o valor patrimonial da empresa em R$: ");
    scanf("%f", &valor_empresa);

    printf("Digite o valor de quantidade de ações disponíveis: ");
    scanf("%f", &quant_acoes);

    printf("Digite o preço atual da ação em R$: ");
    scanf("%f", &preco_acao);

    vpa = valor_empresa / quant_acoes;
    pvp = preco_acao / vpa;

    if (pvp < 0.0){
        printf("Classificação PÉSSIMA!");
    } else if (0.0 <= pvp && pvp < 0.8){
        printf("Classificação ÓTIMA!");
    } else if (0.8 <= pvp && pvp <= 1.2){
        printf("Classificação INDIFERENTE!");
    } else if (1.2 < pvp && pvp <= 2.0){
        printf("Classificação BOA!");
    } else{
        printf("Classificação RUIM!");
    }

return 0;
}











