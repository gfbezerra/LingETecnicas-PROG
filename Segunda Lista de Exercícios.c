#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Exercício 1

	int anodenasc, idade, anoatual;
	
	printf("Quantos anos voce tem?: ");
	scanf("%d", &idade);
	printf("Em qual ano estamos?: ");
	scanf("%d", &anoatual);
	
	anodenasc = anoatual - idade;
	
	printf("Voce nasceu no ano de: %d ", anodenasc);	
	
	
//Exercício 2

	float kmh, conversao;
	
	printf("\nDigite a velocidade em km/h: ");
	scanf("%f", &kmh);
	
	conversao = kmh/3.6;
	
	printf("A velocidade convertida de km/h para m/s: %f ", conversao);
	
	
//Exercício 3

	float reais, cotacao, conv;
	
	printf("\nQuanto esta o valor do dolar hoje?: ");
	scanf("%f", &cotacao);
	printf("Qual o valor em real?: ");
	scanf("%f", &reais);
	
	conv = reais/cotacao;
	
	printf("Este e o valor em DOLAR: USD%f ", conv);


//Exercício 4

	float celsius, fahrenheint;
	
	printf("\nTemperatura em graus celcius: ");
	scanf("%f", &celsius);
	
	fahrenheint = celsius * (9.0/5.0) + 32.0;
	
	printf("A temperatura convertida para fahrenheint e igual a: %fF ", fahrenheint);


//Exercício 5

	float graus, radianos, pi;
	
	printf("\nDigite o angulo: ");
	scanf("%f", &graus);
	
	pi = 3.141592;
	radianos = graus * pi / 180;
	
	printf("A conversao do angulo de graus para radianos e de: %f rad ", radianos);





//Exercício 10:

	int a, b, c, d, maior, maior_temp1, maior_temp2;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//conta
	maior_temp1 = (a+b+abs(a-b))/2;
	maior_temp2 = (maior_temp1+c+abs(maior_temp1-c))/2;
	maior = (maior_temp2 +d+abs(maior_temp2-d))/2;
	


	printf("O maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
	
	return 0;

	
	
	
	
	
}
