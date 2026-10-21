#include <stdio.h>
#include <stdlib.h>

int main(){

/*Exercício 1:*/

    /*int n, i;

    
    for (i = 0; i > 5; i++){
        

        }


    }*/








/*Exercício 3:*/

int n, aux, mult=1;
scanf("%d", &n);
aux=0;
while(n>0){
    aux=aux+(n%2)*mult;
    n=n/2;
    mult=mult*10;
}
printf("%d", aux);





}
