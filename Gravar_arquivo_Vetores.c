#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h> //Acrescentando esta biblioteca para pausar o programa.

#define TAMANHO_NOME 150
#define TAMANHO_TELEFONE 20
#define TAMANHO_EMAIL 255

#define QUANTIDADE_MATRICULAS 10

// Estrutura com os dados da matricula
struct matricula
{
    char nome[TAMANHO_NOME];
    char telefone[TAMANHO_TELEFONE];
    char email[TAMANHO_EMAIL];
    int numero;
};

int main(void)
{
    FILE* pont_arq;
    pont_arq = fopen_s("3228231.txt", "w");

    setlocale(LC_ALL, "portuguese");
    int contador;
    struct matricula matriculas[QUANTIDADE_MATRICULAS];

    // Pega as informações 
    for (contador = 0; contador < QUANTIDADE_MATRICULAS; contador++) {
        printf("Digite seu nome:");
        fgets(matriculas[contador].nome, TAMANHO_NOME, stdin);
        printf("Digite seu RU:");
        scanf_s("%d%*c", &matriculas[contador].numero);
        printf("Digite seu telefone:");
        fgets(matriculas[contador].telefone, TAMANHO_TELEFONE, stdin);
        printf("Digite seu email:");
        fgets(matriculas[contador].email, TAMANHO_EMAIL, stdin);
    }

    // Mostra as informações
    for (contador = 0; contador < QUANTIDADE_MATRICULAS; contador++) {
        printf("\n\tInformacoes do aluno\n");
        printf("RU:%d\n", matriculas[contador].numero);
        fprintf(pont_arq, matriculas[contador].numero);
        printf("Nome:%s", matriculas[contador].nome);
        fprintf(pont_arq, matriculas[contador].nome);
        printf("Telefone:%s", matriculas[contador].telefone);
        fprintf(pont_arq, matriculas[contador].telefone);
        printf("Email:%s", matriculas[contador].email);
        fprintf(pont_arq, matriculas[contador].email);
    }

    getchar();
    return(0);
}