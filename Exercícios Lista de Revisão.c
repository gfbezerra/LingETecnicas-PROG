#include <stdio.h>
#include <stdlib.h>

//Exercício 1:

int multDigito(int dig, int valor){

    return dig*valor;


}




int main () {

int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dgv, dgv2, soma, resto, resto2;
/*int num1, num2, num3, num4, num5, num6, num7, num8, num9;*/

printf("Digite os números do seu CPF: ");
scanf("%d %d %d . %d %d %d . %d %d %d - %d %d",
      &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dgv, &dgv2);


/*num1 = dig1 * 10;
num2 = dig2 * 9;
num3 = dig3 * 8;
num4 = dig4 * 7;
num5 = dig5 * 6;
num6 = dig6 * 5;
num7 = dig7 * 4;
num8 = dig8 * 3;
num9 = dig9 * 2;
*/

soma = multDigito(dig1,10)+multDigito(dig2,9)+multDigito(dig3,8)+multDigito(dig4,7)+multDigito(dig5,6)+multDigito(dig6,5)+multDigito(dig7,4)+multDigito(dig8,3)+multDigito(dig9,2);
soma *= 10;
resto = soma % 11;
if (resto == 10) resto = 0;



printf("\nO primeiro digito após o traco do seu CPF é: %d ", resto);

soma = multDigito(dig1,11)+multDigito(dig2,10)+multDigito(dig3,9)+multDigito(dig4,8)+multDigito(dig5,7)+multDigito(dig6,6)+multDigito(dig7,5)+multDigito(dig8,4)+multDigito(dig9,3)+multDigito(dgv,2);
soma *= 10;
resto2 = soma % 11;
if (resto2 == 10) resto2 = 0;


printf("\nO segundo digito após o traco do seu CPF é: %d ", resto2);

return 0;

}


//Exercício 2: Conversor Dinâmico

int main () {
int temperatura, fahrenheit, celsius;
char conversao;

printf("Digite uma temperatura, seja ela em fahrenheit ou celsius: ");
scanf("%d", &temperatura);

printf("Para qual tipo de medição quer converter? (f/c): ");
scanf(" %c", &conversao);



if (conversao == 'f' ){
   
    celsius = temperatura;
    fahrenheit = (celsius * 9/5) + 32;
   
    printf("Sua conversão de celsius para fahrenheit é igual a: %d F", fahrenheit);
        
        
} else if (conversao == 'c' ){

    fahrenheit = temperatura;
    celsius = (fahrenheit - 32) * 5/9;

   printf("Sua conversão de fahrenheit para celsius é igual a: %d C", celsius); 
}
else {
    printf("Opção inválida.");
}

return 0;



//Ecercício 3: Média Escolar

int main(){


float primeiranota, segundanota, terceiranota, media, calcpara10, total;
char nome[50];

printf("Digite o nome do aluno(a): ");
scanf(" %s", nome);

printf("Digite sua primeira nota: ");
scanf(" %f", &primeiranota);

printf("Digite sua segunda nota: ");
scanf(" %f", &segundanota);

printf("Digite sua terceira nota: ");
scanf(" %f", &terceiranota);

media = (primeiranota + segundanota + terceiranota) / 3;
total = 10.0;
calcpara10 = total - media;

if (media < 4.0) {
    printf("\033[0;31mVocê está REPROVADO!\033[0m");
} else if (media >= 4.0 && media < 7.0) {
    printf("\033[0;32mVocê está de EXAME!, Falta %.2f para atingir 10\033[0m", calcpara10);
} else if (media >= 7.0 && media <= 10.0) {
    printf("\033[0;34mVocê está APROVADO!\033[0m");
}

return 0;
    
}



