#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor){

    return dig*valor;


}




int main () {

int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dgv, soma, resto, resto2;
/*int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;*/


printf("Digite o número do seu CPF: ");
scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dgv);



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
if (resto2 == 10) resto = 0;


printf("\nO segundo digito após o traco do seu CPF é: %d ", resto2);

return 0;







}
