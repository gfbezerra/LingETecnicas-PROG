#include <stdio.h>
#include <stdlib.h>


//Exercício 5: Terminal Infinity Cash
void calc_saque (int valor, int *n100, int *n50, int *n10, int *n5, int *n2, int *n1){

    *n100 = valor / 100;
    valor = valor % 100;

    *n50 = valor / 50;
    valor = valor % 50;

    *n10 = valor / 10;
    valor = valor % 10;

    *n5 = valor / 5;
    valor = valor % 5;

    *n2 = valor / 2;
    valor = valor % 2;

    *n1 = valor / 1;
    valor = valor % 1;
}


int main(){


int valor, n100, n50, n10, n5, n2, n1;

printf("Quanto você quer sacar?: ");
scanf("%d", &valor);

calc_saque(valor, &n100, &n50, &n10, &n5, &n2, &n1);

printf("Resumo da contagem de cada nota: \n");
if (n100 > 0) printf("%d nota(s) de R$100\n", n100);
if (n50 > 0) printf("%d nota(s) de R$50\n", n50);
if (n10 > 0) printf("%d nota(s) de R$10\n", n10);
if (n5 > 0) printf("%d nota(s) de R$5\n", n5);
if (n2 > 0) printf("%d nota(s) de R$2\n", n2);
if (n1 > 0) printf("%d moeda(s) de R$1\n", n1);


return 0;
    
}




//Exercício 7, 8 e 9: INSS, IRPF e Holerite

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

    float salario, desconto, imposto, salario_base, valor, horas, salario_liquido, salario_bruto; 
    scanf("%f", &salario);

    desconto = calc_inss(salario);
    salario_base = salario - desconto;
    imposto = calc_irpf(salario_base);
    
    printf("\nDesconto INSS: %f", desconto);
    printf("\nSalário base: %f", salario_base);
    printf("\nImposto IRPF: %f", imposto);

    printf("\nValor da hora trabalhada: ");
    scanf("%f", &valor);

    printf("\nQuantidade de horas no mês: ");
    scanf("%f", &horas);

    salario_bruto = horas * valor;
    salario_liquido = salario_bruto - desconto - imposto;

    printf(
    "========================================\n"
    "RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)\n"
    "========================================\n"
    "Salário Bruto (Horas x Valor):   R$ %0.2f\n"
    "(-) Desconto INSS:               R$ %0.2f\n"
    "(-) Desconto IRPF:               R$ %0.2f\n"
    "----------------------------------------\n"
    "LÍQUIDO A RECEBER:               R$ %0.2f\n"
    "========================================",
    salario_bruto, desconto, imposto, salario_liquido);

    return 0;
}
