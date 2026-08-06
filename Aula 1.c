#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
		float r1, r2, r3;
	a = 8;
	b = 19;
	r1 = a/b;
	r2 = a-b;
	r3 = a+b;
	c = a*b;
	
	printf("As operacoes entre %f e %f sao / %f - %f + %f *%f", a,b, r1, r2, r2, c);

	
	return 0;
}
