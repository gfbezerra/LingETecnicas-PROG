#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//int a, b, c, r;
	
	//printf("Entre com os valores para A B C: ");
	//scanf("%d %d %d", &a, &b, &c);
	
	//if (a>b){
		//r = a;
	//}else 
		//r = b;
//if(c>r){
	//	r = c;
//	}
	
//	printf("%d eh o maior", r);
	
	
//ÍMPAR OU PAR:	
	
	int a, par, impar;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	if (a % 2 != 0){
		a = impar;
		printf("O numero e IMPAR!");
	}
	else{
		a = par;
		printf("O numero e PAR!");	
	} 

	
	
	return 0;
