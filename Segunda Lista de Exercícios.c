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
