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
	
	
	
	
	
//Exercício 2: 

	
//Exercício 3:


//Exercício 4:

	double salariofixo, vendastotal, comissao, total;
	
	printf("Qual seu salario?: ");
	scanf("%lf", &salariofixo);
	
	printf("Qual o seu valor total em vendas mensal?: ");
	scanf("%lf", &vendastotal);
	
	comissao = (vendastotal * 15)/100;
	
	total = (salariofixo + comissao);
	
	printf("\n O valor total a receber esse mes e de: R$ %.2lf ", total);




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


	
//Exercício 6:
	

	int idadeemdias, quantidadeanos, quantidademeses, quantidadedias, resto; 
	
	printf("\n Digite sua idade em DIAS: ", idadeemdias);
	scanf("%d", &idadeemdias);
	
	quantidadeanos = idadeemdias / 360;
	resto = idadeemdias % 360;
	
	quantidademeses = resto / 30;

	quantidadedias = resto % 30; 
		
	printf("Voce nasceu faz %d anos, %d meses e %d dias", quantidadeanos, quantidademeses, quantidadedias);
	
	
	
	
	
	
	
	



	
}
