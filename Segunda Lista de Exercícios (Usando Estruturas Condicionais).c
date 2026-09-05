#include <stdio.h>
#include <stdlib.h>


void exec1 (){

    int anodenasc, idade, anoatual;
	
	printf("Quantos anos voce tem?: ");
	scanf("%d", &idade);
	printf("Em qual ano estamos?: ");
	scanf("%d", &anoatual);
	
	anodenasc = anoatual - idade;
	
	printf("Voce nasceu no ano de: %d ", anodenasc);


}

void exec2 (){

    float kmh, conversao;
	
	printf("\nDigite a velocidade em km/h: ");
	scanf("%f", &kmh);
	
	conversao = kmh/3.6;
	
	printf("A velocidade convertida de km/h para m/s: %f ", conversao);
	


}

void exec3 (){

    float reais, cotacao, conv;
	
	printf("\nQuanto esta o valor do dolar hoje?: ");
	scanf("%f", &cotacao);
	printf("Qual o valor em real?: ");
	scanf("%f", &reais);
	
	conv = reais/cotacao;
	
	printf("Este e o valor em DOLAR: USD%f ", conv);



}

void exec4 (){

    float celsius, fahrenheint;
	
	printf("\nTemperatura em graus celcius: ");
	scanf("%f", &celsius);
	
	fahrenheint = celsius * (9.0/5.0) + 32.0;
	
	printf("A temperatura convertida para fahrenheint e igual a: %fF ", fahrenheint);




}

void exec5 (){

    float graus, radianos, pi;
	
	printf("\nDigite o angulo: ");
	scanf("%f", &graus);
	
	pi = 3.141592;
	radianos = graus * pi / 180;
	
	printf("A conversao do angulo de graus para radianos e de: %f rad ", radianos);



}

void exec6 (){

    int numero, antecessor, sucessor;

	printf("\nDigite um numero: ");
	scanf("%d", &numero);

	antecessor = numero - 1;
	sucessor = numero + 1;

	printf("O antecessor do numero digitado e: %d e o sucessor: %d", antecessor, sucessor);



}

void exec7 (){

    float primeiro, segundo, terceiro;
	float total = 780.000;

	primeiro = total * 0.46;
	segundo = total * 0.32;
	terceiro = total * 0.22;

	printf("\nO valor dividido de R$%.3f, ficou R$%.3f para o primeiro ganhador, R$%.3f para o segundo e R$%.3f para o terceiro ", total, primeiro, segundo, terceiro);



}

void exec8 (){

    int tempo, segundos, minutos, horas;
	
	printf("Insira uma quantidade de tempo em segundos que durara o evento: ");
	scanf("%d", &tempo);
	
	segundos = tempo % 60;
	horas = tempo / 3600;
	minutos = (tempo % 3600) / 60;
	
	printf("O evento durara %d horas, %d minutos e %d segundos ", horas, minutos, segundos);




}

void exec9 (){

    float tempoviagem, velmedia, litrosnecessarios, distanciapercorrida;
	 
	printf("\nQual o tempo de viagem? (em horas): ");
	scanf("%f", &tempoviagem);
	
	printf("Qual a velocidade media do carro durante o percurso?: ");
	scanf("%f", &velmedia);
	
	distanciapercorrida = tempoviagem * velmedia;
	litrosnecessarios = distanciapercorrida / 12;
	
	printf("Distancia percorrida: %.3f km", distanciapercorrida);
	printf("\nLitros necessarios: %.3f litros", litrosnecessarios);



}

void exec10 (){

    int a, b, c, d, maior, maior_temp1, maior_temp2;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//conta
	maior_temp1 = (a+b+abs(a-b))/2;
	maior_temp2 = (maior_temp1+c+abs(maior_temp1-c))/2;
	maior = (maior_temp2 +d+abs(maior_temp2-d))/2;
	


	printf("O maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
	
	



}

int main(int argc, char *argv[]) {
	
int op;
printf("Escolha um exercício que deseja resolver: [1|2|3|4|5|6|7|8|9|10]\n");
scanf("%d", &op);

switch(op){

    case 1:
        exec1();
    break;

    case 2:
        exec2();
    break;

    case 3:
        exec3();
    break;

    case 4:
        exec4();
    break;

    case 5:
        exec5();
    break;

    case 6:
        exec6();
    break;

    case 7:
        exec7();
    break;

    case 8:
        exec8();
    break;

    case 9:
        exec9();
    break;

    case 10:
        exec10();
    break;

}

return 0;
}
