#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int multiplica(int valor, int base, int cont, int exp);

int main() {
    setlocale(LC_ALL, "portuguese"); 

    int base, expoente, resultado; //As variaveis para criar o calculo de potenciação

    printf("Digite a base: "); //Entrada de dados
    scanf_s("%d", &base);
    printf("Digite o expoente: ");
    scanf_s("%d", &expoente);

    resultado = multiplica(base, base, 2, expoente);

    printf("%d", resultado); //imprimi o resultado do calculo
    return 0;
}

int multiplica(int valor, int base, int cont, int exp) { //função para o calculo da potenciação.
    if (exp == 0) {
        return 1;
    }
    if (exp == 1) {
        return base;
    }
    if (exp == 2) { //calculo da potenciação inicia aqui.
        return base * base;
    }
    while (cont <= exp) {
        if (cont == 2) {
            valor = base * base;
            cont++;
            multiplica(valor, base, cont, exp);
        }
        else {
            valor = valor * base;
            cont++;
            multiplica(valor, base, cont, exp);
       }
    }
    return valor;
    system("pause");
}