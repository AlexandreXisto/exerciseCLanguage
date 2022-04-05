#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define tam 6

int main()
{
    setlocale(LC_ALL, "portuguese");
    int* prt; //criando um ponteiro
    int vet[tam]; //variavel para armazenar elementos
    int i = 0; //variavel auxiliar do FOR
    int menor, maior = 0;
    prt = vet[tam];


    for (i = 0; i <= tam; i++)
    {   //preenchendo o vetor
        printf("Digite seu RU de 7 digitos: ");
        scanf_s("%d", &vet[i]);
    }
    //encontrando o maior vetor
    maior = vet[0];
    for (i = 1; i < tam; i++) {
        if (vet[i] > maior) { //verifica se o valor é maior que o valor e atualiza
            maior = vet[i];
        }
    }

    //encontrando o menor vetor
    menor = vet[0];
    for (i = 1; i < tam; i++) {
        if (vet[i] < menor) { //verifica se o valor é menor que o valor e atualiza
            menor = vet[i];
        }
    }

    printf("\nVetor: ");
    for (i = 0; i < tam; i++) {
        printf("%i ", vet[i]);

    }

    printf("\nMaior valor: %i\n", maior);
    printf("\nMenor valor: %i\n", menor);


    system("pause");
    return 0;
}
