#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int divisao; //Para realizarmos a opera��o de Par e Impar
    int *valor; //Cria��o de registro de ponteiro da struct

    int i, tamanho; //Variaveis para inverter o nome
    char strings[200];

    typedef struct {
        char nome[50];
        int n;
    } cadastro;

    cadastro a1;
    cadastro *ptrcadastro = &a1; //ptrcadastro � o ponteiro do tipo cadastro
    //Recebe o endere�o de a1

    printf("Digite seu nome: ");
    fgets(a1.nome, 50, stdin); //como estamos lendo do teclado a entrada � stdin (entrada padr�o),
    

    printf("Digite o nome para invers�o: ");
    fgets(strings, 200, stdin);
    tamanho = strlen(strings);

    printf("Digite um numero: ");
    scanf_s("%d", &a1.n);

    printf("Nome Invertido abaixo:");
    for (i = tamanho; i >= 0; i--)
    {
        printf("%c", strings[i]);
    }

    printf("\n");

    divisao = a1.n / 2;
    if (a1.n == divisao * 2){
    
        printf("%s O seu numero � par", a1.nome);
    }
    else
    {
        printf("%s O seu numero � Impar", a1.nome);
    }

    return 0;
}