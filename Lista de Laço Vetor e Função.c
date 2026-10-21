#include <stdio.h>
#include <stdlib.h>

int main(){

/*Exercício 1:
Faça um programa que leia 100 números inteiros e depois os imprima na ordem
inversa em que eles foram lidos, e ordenados do maior para o menor.
*/

    /*int n, i;

    
    for (i = 0; i > 5; i++){
        

        }


    }*/



/*Exercício 2:
Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica no formato padrão é A x 10^n, onde o número A é maior ou
igual a 1 e menor que 10 (1 <= A < 10), e o expoente n é um número inteiro.
Considerem somente valores positivos.
*/




/*Exercício 3:
Implemente um programa que leia um número n [com n positivo & n <= 64] e
mostre na tela o seu valor em base binária (bits).
*/

int n, aux, mult=1;
scanf("%d", &n);
aux=0;
while(n>0){
    aux=aux+(n%2)*mult;
    n=n/2;
    mult=mult*10;
}
printf("%d", aux);



/*Exercício 4:
(URI 1013) Faça um programa que leia 10 valores e apresente o maior dos 10
valores lidos seguido da mensagem "eh o maior". Utilize a fórmula:

MaiorAB = (a + b + abs(a - b)) / 2

Obs.: A fórmula apenas calcula o maior entre os dois primeiros (A e B). Um
segundo passo, portanto, é necessário para chegar no resultado esperado.
*/


double valores[10];
double maior;

for (int i = 0; i < 10; i++){
    printf("Digite 10 valores: ", i + 1);
    scanf("%lf", &valores[i]);

}

maior = valores[0];

for (int i = 1; i < 10; i++){
    if (valores[i] > maior){
        maior = valores[i];
    }
}

printf("O número %.2f é o maior", maior);



/*Exercício 5:
Faça um programa que tenha um vetor de 100 inteiros e para cada item do vetor
verifique sua paridade e sua primalidade.
*/

int ehPrimo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int vetor[100];

    
    for (int i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    for (int i = 0; i < 100; i++) {
        printf("%d: ", vetor[i]);

        if (vetor[i] % 2 == 0) {
            printf("par");
        } else {
            printf("impar");
        }

        printf(" e ");

        if (ehPrimo(vetor[i])) {
            printf("primo\n");
        } else {
            printf("nao primo\n");
        }
    }

    return 0;
}


/*Exercício 6:
Faça um programa que leia do usuário 4 vetores com 10 posições,
correspondentes às coordenadas em um plano cartesiano, p1(x1,y1) e p2(x2,y2) e
calcule e mostre a distância entre eles, aplicando a distância euclidiana,
segundo a fórmula: d = sqrt((x2-x1)^2 + (y2-y1)^2)

Dica: Utilize a função sqrt(); da biblioteca math.h para realizar o cálculo da
raiz quadrada.
*/




/*Exercício 7:
Faça um programa que receba um vetor de 100 números inteiros do teclado,
verifique se em algum dos números presentes no vetor estão em ordem
consecutiva, e mostre os valores que estão em ordem consecutiva.
*/

}
