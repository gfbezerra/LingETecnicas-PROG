#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

//Exercicio 1: Soma

int main () {
	int a,b,c;
	
	a = 2;
	b = 4;
	a + b = c;
		
	printf("A soma de %d + %d = %d",a,b,c);
	
	return 0;
	
	
}


// Exercicio 2: Triangulo Retangulo

int main(int argc, char *argv[]) {
	int base = 10;
	int altura = 4;
	int area = base*altura/2;
		
		
	printf("A area do triangulo retangulo e de: %d ", area);
	
	
	return 0;
	
		
}


//Exercicio 3: Media Aritmetica

int main () {
	int media1 = 60;
	int media2 = 50;
	int media3 = 40;
	int result = (media1+media2+media3)/3;
	
	
	printf("A media aritmetica e de %d + %d + %d/3 = %d ",media1,media2,media3,result);
	
	
    return 0;
    
}


//Exercicio 4: Raio de um circulo

int main(int argc, char *argv[]) {
	
	
	float area, raio, basemaior, basemenor, altura, areatrapezio;
	
	printf("\n Insira o raio do circulo: ");
	scanf("%f", &raio);
	
	//(utilizando a biblioteca math.h): area = M_PI* pow(raio,2);
	area = pi*(raio*raio);
	
	printf("\n A area do circulo de raio %f = %f", raio, area);
	
//Área do trapézio:

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
