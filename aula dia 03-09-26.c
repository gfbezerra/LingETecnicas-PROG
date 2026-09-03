#include <stdio.h>
#include <stdlib.h>

/*
tipo nome (lista de parâmetros){
    comandos...
    comandos...
}
*/
void exec3 (){

    float tempc, tempf;
        printf("\nInsira a temperatura em C: \n");
        scanf("%f", &tempc);
        tempf = tempf * (9.0/5.0) + 32.0;
        printf("\nOs %f C sao %f F ", tempc, tempf);

}

void exec2 (){
    
    float reais, cota;
        printf("Insira a cotacao e o valor: \n");
        scanf("%f %f", &cota, &reais);
        printf("\nOs %f reais sao %f dolares", reais, (reais/cota));    


}

void exec8(){

    int sec, horas, min;
        printf("\nInsira o tempo em segundos: \n");
        scanf("%d", &sec);
        horas = sec/3600;
        min = (sec - (sec%3600))/60;
        sec = sec -((horas * 3600)+(min*60));
        printf("\t %d:%d:%d", horas, min, sec);


}

int main() {

    int op;
    printf("Insira qual exercicio quer resolver: [2|3|8]\n");
    scanf("%d", &op);


    switch(op){ 

    case 2:
        exec2();
    break;    

    
    case 3:
        exec3();
    break;

    
    case 8:
        exec8();
    break;
    }

    return 0;





}