#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

	int n, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, resultado;
	printf("Entre com o valor para a conversao: ");
	scanf("%d", &n);
	
	bit_64 = n%2;
	resultado = n/2;
	
	bit_32 = resultado%2;
	resultado = resultado/2;
	
	bit_16 = resultado%2;
	resultado = resultado/2;
	
	bit_8 = resultado%2;
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n,
			 resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);


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

	
//Exercício 7:

	
	double volume, raio;
   	double pi = 3.14159;
	
	printf("Qual o valor do raio da esfera?: ");
	scanf("%lf", &raio);
	
	pi = 3.14159;
	
	volume = (4.0 / 3.0)*pi*raio*raio*raio;
	
	printf("O volume da esfera e igual a: %lf \n ", volume);
	
	
//Exercício 8: 

	
	double x1,y1,x2,y2, distancia;
	
	printf("Digite a coordenada x1: ");
	scanf("%lf", &x1);
	printf("Digite a coordenada y1: ");
	scanf("%lf", &y1);
	printf("Digite a coordenada x2: ");
	scanf("%lf", &x2);
	printf("Digite a coordenada y2: ");
	scanf("%lf", &y2);
	
	distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	printf("A distancia entre os valores sao de: %f ", distancia);
	
	
	
	
	
	
	
	



	
}
