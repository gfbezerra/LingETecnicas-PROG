#include <stdio.h>
#include <stdlib.h>


/* PROVA ESOFT A*/

void esoft_a_ex0() {

    //Exercício 0 Prova ESOFT A:

    int n1, n2, n3, n4;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    if (n1 % 2 != 0 && n1 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n1);
    }
    if (n2 % 2 != 0 && n2 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n2);
    }
    if (n3 % 2 != 0 && n3 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n3);
    }
    if (n4 % 2 != 0 && n4 % 5 == 0) {
        printf("%d e impar e multiplo de 5\n", n4);
    }
}

void esoft_a_ex1() {

    //Exercício 1 Prova ESOFT A:

    int qtd_tot, capx, n_mochilas;

    printf("Entre com a quantidade e a capacidade: ");
    scanf("%d %d", &qtd_tot, &capx);

    if (capx > 0) {
        n_mochilas = qtd_tot / capx;
        printf("Voce precisara de %d mochilas\n", n_mochilas);
    } else {
        printf("Capacidade invalida!\n");
    }
}

void esoft_a_ex2() {

    //Exercício 2 Prova ESOFT A:

    double valor, resultado;
    int de, para;
    int valido = 1;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);
    printf("Digite o codigo da unidade do valor: ");
    scanf("%d", &de);
    printf("Digite o codigo da unidade de conversao: ");
    scanf("%d", &para);

    if (de == 1 && para == 2) {
        resultado = valor * 1.8 + 32;
    } else if (de == 2 && para == 1) {
        resultado = (valor - 32) / 1.8;
    } else if (de == 1 && para == 3) {
        resultado = valor + 273.15;
    } else if (de == 3 && para == 1) {
        resultado = valor - 273.15;
    } else if (de == 4 && para == 5) {
        resultado = valor / 1609.34;
    } else if (de == 5 && para == 4) {
        resultado = valor * 1609.34;
    } else if (de == 8 && para == 9) {
        resultado = valor * 2.205;
    } else if (de == 9 && para == 8) {
        resultado = valor / 2.205;
    } else if (de == 11 && para == 10) {
        resultado = valor / 1.609;
    } else if (de == 10 && para == 11) {
        resultado = valor * 1.609;
    } else {
        valido = 0;
    }

    if (valido) {
        printf("Valor convertido: %.2f\n", resultado);
    } else {
        printf("Unidade INEXISTENTE ou conversao INDISPONIVEL!\n");
    }
}

void prova_esoft_a() {

    int ex;

    printf("Escolha o exercicio (0, 1 ou 2): ");
    scanf("%d", &ex);

    switch (ex) {
        case 0: esoft_a_ex0(); break;
        case 1: esoft_a_ex1(); break;
        case 2: esoft_a_ex2(); break;
        default: printf("Exercicio INVALIDO!\n");
    }
}


/* PROVA ESOFT B*/

void esoft_b_ex0() {

    //Exercício 0 Prova ESOFT B:

    int qtd_tot, capx;

    printf("Entre com a quantidade total de itens: ");
    scanf("%d", &qtd_tot);
    printf("Entre com a capacidade de cada mochila: ");
    scanf("%d", &capx);

    if (capx > 0) {
        printf("Mochilas totalmente preenchidas: %d\n", qtd_tot / capx);
        printf("Itens que sobraram: %d\n", qtd_tot % capx);
    } else {
        printf("Capacidade invalida!\n");
    }
}

void esoft_b_ex1() {

    //Exercício 1 Prova ESOFT B:

    int a, b, c, temp;

    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
    } else {
        if (a > b) { temp = a; a = b; b = temp; }
        if (b > c) { temp = b; b = c; c = temp; }
        if (a > b) { temp = a; a = b; b = temp; }

        printf("%d %d %d\n", a, b, c);
    }
}

void esoft_b_ex2() {

    //Exercício 2 Prova ESOFT B:

    double v1, v2;
    int codigo;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &v1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &v2);
    printf("Digite o codigo da operacao (1 a 4): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("%s\n", (v1 > v2) ? "Verdadeiro" : "Falso");
            break;
        case 2:
            printf("%s\n", (v1 < v2) ? "Verdadeiro" : "Falso");
            break;
        case 3:
            printf("%s\n", (v1 == v2) ? "Verdadeiro" : "Falso");
            break;
        case 4:
            printf("%s\n", (v1 != v2) ? "Verdadeiro" : "Falso");
            break;
        default:
            printf("operador invalido\n");
    }
}

void prova_esoft_b() {

    int ex;

    printf("Escolha o exercicio (0, 1 ou 2): ");
    scanf("%d", &ex);

    switch (ex) {
        case 0: esoft_b_ex0(); break;
        case 1: esoft_b_ex1(); break;
        case 2: esoft_b_ex2(); break;
        default: printf("Exercicio INVALIDO!\n");
    }
}


/* PROVA ADSIS A*/

void hanoi(int n, int origem, int destino, int auxiliar, int pino[]) {
    if (n == 0) return;

    hanoi(n - 1, origem, auxiliar, destino, pino);

    pino[origem]  -= n;
    pino[destino] += n;
    printf("Mover disco %d de %c para %c -> A=%d B=%d C=%d\n",
           n, 'A' + origem, 'A' + destino, pino[0], pino[1], pino[2]);

    hanoi(n - 1, auxiliar, destino, origem, pino);
}

void adsis_a_ex0() {

    //Exercício 0 Prova ADSIS A:

    int v[5], marcado[5] = {0};
    int i, j, temp, ultimo = 0, achou = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j]; v[j] = v[j + 1]; v[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        if (v[i + 1] - v[i] == 1) {
            marcado[i] = 1;
            marcado[i + 1] = 1;
            achou = 1;
        }
    }

    if (achou) {
        printf("Valores consecutivos: ");
        for (i = 0; i < 5; i++) {
            if (marcado[i] && (i == 0 || v[i] != ultimo)) {
                printf("%d ", v[i]);
                ultimo = v[i];
            }
        }
        printf("\n");
    } else {
        printf("Nao ha numeros consecutivos.\n");
    }
}

void adsis_a_ex1() {

    //Exercício 1 Prova ADSIS A:

    double peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%lf", &peso);
    printf("Digite a altura (m): ");
    scanf("%lf", &altura);

    if (altura > 0) {
        imc = peso / (altura * altura);
        printf("IMC = %.1f - ", imc);

        if (imc < 18.5) {
            printf("Abaixo do peso\n");
        } else if (imc < 25.0) {
            printf("Normal\n");
        } else if (imc < 30.0) {
            printf("Acima do peso\n");
        } else {
            printf("Obeso\n");
        }
    } else {
        printf("Altura invalida!\n");
    }
}

void adsis_a_ex2() {

    //Exercício 2 Prova ADSIS A:

    int pino[3] = {6, 0, 0};

    printf("Estado inicial: A=%d B=%d C=%d\n", pino[0], pino[1], pino[2]);
    hanoi(3, 0, 2, 1, pino);
}

void prova_adsis_a() {

    int ex;

    printf("Escolha o exercicio (0, 1 ou 2): ");
    scanf("%d", &ex);

    switch (ex) {
        case 0: adsis_a_ex0(); break;
        case 1: adsis_a_ex1(); break;
        case 2: adsis_a_ex2(); break;
        default: printf("Exercicio INVALIDO!\n");
    }
}


int main() {

    int op;

    printf("Escolha a prova a ser resolvida (1 - esoft A, 2 - esoft B ou 3 - adsis A): ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            prova_esoft_a();
            break;
        case 2:
            prova_esoft_b();
            break;
        case 3:
            prova_adsis_a();
            break;
        default:
            printf("Prova INVALIDA!\n");
    }

    return 0;
}
