#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592



//Exercício 4  - Área de um círculo

int main(int argc, char *argv[]) {
	
	
	float area, raio, basemaior, basemenor, altura, areatrapezio;
	
	printf("\n Insira o raio do circulo: ");
	scanf("%f", &raio);
	
	//(utilizando a biblioteca math.h): area = M_PI* pow(raio,2);
	area = pi*(raio*raio);
	
	printf("\n A area do circulo de raio %f = %f", raio, area);

	printf("\n Agora a do trapezio");
	
	printf("\n Insira a Base maior:");
	scanf("%f", &basemaior);
	
	printf("\n Insira a Base menor:");
	scanf("%f", &basemenor);
	
	printf("\n Insira a altura:");
	scanf("%f", &altura);
	
	areatrapezio = ((basemaior+basemenor)*altura)/2;
	printf("\n A area do trapezio e (%f + %f )* %f /2: %f ", basemaior, basemenor, altura, areatrapezio);
	
		

	
	
	
	return 0;
	
	
}
