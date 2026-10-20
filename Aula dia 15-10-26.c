#include <stdio.h>
#include <stdlib.h>

/*int main() {
    int i, j, k, n, r;*/

    /*Vamos relembrar algumas estruturas que vimos essa semana*/

    /*Laço FOR repete um conjunto de instruções, de um valor inicial(inicialização), 
    até uma determinada condição, realizando uma operação (incremento) a cada execução [sempre]*/

    /*for(i=0, j=1; i<10; i++, j--){
        printf("esse e o laço for");
    }*/

    /*Laço WHILE (enquanto), que testa se uma condição é verdadeira, 
    caso seja executa um bloco de comandos repetindo o processo enquanto
    a condição for avaliada como verdadeira.*/

    /*while(i<10){
        printf("%d, laco WHILE", i);
        if(n%2 == 0)i++;
    }*/

    /*Laço DO WHILE, semelhante ao laço while, porém antes de realizar a verificação
    ele executa o conjunnto de instruções para após a execução realizar a verificação da condição.*/
    
    /*do{
        printf("%d, laco DO", i);
        if(n%2 == 0) i++;
        n++;
    } while (i<10);*/



    //Exercicio 1;
	/*Elabore um programa que permita a entrada de 3 valores. 
	E conte do primeiro valor inserido, até o segundo valor, com o
	passo da contagem dado pelo terceiro valor  */
	//ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.


  int main() {
      int i, a, b, passo;

      printf("Digite o valor inicial, o valor final e o passo: ");
      scanf("%d %d %d", &a, &b, &passo);

      if (passo <= 0) {
          printf("O passo deve ser maior que zero.\n");
      } else {
          for (i = a; i <= b; i += passo) {
              printf("%d ", i);
          }
          printf("\n");
      }

      return 0;
  }

	
	// Exercicio 2;
	/* Faça um programa que receba um nuumero n e realize a soma dos
	n primeiros termos da sequência definda como: 
	[S = 1/2; 1/4; 1/8 1/16... N] */

	int main(){

        	int i, n;
        	double soma = 0, termo = 0.5;
        
        	printf("Digite um número: ");
        	scanf("%d", &n);

        	for (i = 1; i <= n; i++){
            	soma += termo;
            	termo /= 2;

        	}

        	printf("Soma dos %d primeiros termos: %lf\n", n, soma);

        	return 0;
	}

	// Exercicio 3;
	/*Crie um programa que exiba na tela, o trîangulo de pascal. */

	int main() {
        	int n, i, j, k;
        	int valor;

        	printf("Quantas linhas do triangulo de Pascal? ");
        	scanf("%d", &n);

        	for (i = 0; i < n; i++) {
            	for (k = 0; k < n - i - 1; k++) {
                	printf("  ");
         	}
            	valor = 1; 

            	for (j = 0; j <= i; j++) {
                	printf("%3d ", valor);
                	valor = valor * (i - j) / (j + 1); 
            	}
            	printf("\n");
        	}

        	return 0;
    	}
	/*return 0;*/

    
}
