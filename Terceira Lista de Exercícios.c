#include <stdio.h>
#include <stdlib.h>


//Exercício 7 e 8: INSS, IRPF

float calc_inss (float salario){
    if (salario <= 1412.00) return salario * 0.075;
    else if (salario <= 2666.68) return salario * 0.09;
    else if (salario <= 4000.03) return salario * 0.12;
    else return salario * 0.14;
}

float calc_irpf (float salario_base){
    if (salario_base <= 2259.20) return (salario_base);
    else if (salario_base <= 2826.65) return (salario_base * 0.075) - 169.44;
    else if (salario_base <= 3751.05) return (salario_base * 0.15) - 381.44;
    else if (salario_base <= 4664.68) return (salario_base * 0.225) - 662.77;
    else return (salario_base * 0.275) - 896.77;
}

int main (){

    float salario, desconto, imposto, salario_base; 
    scanf("%f", &salario);

    desconto = calc_inss(salario);
    salario_base = salario - desconto;
    imposto = calc_irpf(salario_base);
    
    printf("\nDesconto INSS: %f", desconto);
    printf("\nSalário base: %f", salario_base);
    printf("\nImposto IRPF: %f", imposto);

    return 0;
}
