#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Exercício 1:

	int primeiro, segundo, aux;
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);

	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo; 
	segundo = aux;

	printf("Resultado: %d e %d\n", primeiro, segundo);	
	
	
	
	
	
//Exercício 2: (NAO FINALIZADO)

	double valor;
	printf("Insira o valor: ");
	scanf("%lf", &valor);
	
	
	
	
	
	printf("Resultado: \n", valor);
	

	
	

	
	
//Exercício 3:


//Exercício 4:




//Exercício 5:

	
	float soma, media, multiplicacao, valor1, valor2, valor3, valor4;
	
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor2);
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor3);
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor4);
	
	soma = (valor1 + valor2 + valor3 + valor4);
	
	printf("\n A soma dos valores e: %f ", soma);
	
	media = (valor1 + valor2 + valor3 + valor4)/4;
	
	printf("\n A media e: %f ", media);
	
	multiplicacao = (valor1 * valor2 * valor3 * valor4);
	
	printf("\n O produtorio e: %f", multiplicacao);
	
	
	
	
	



	
}
