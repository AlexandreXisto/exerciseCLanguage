#include<stdio.h>
#include<stdlib.h>

int main(void) {

	FILE* arquivo;
	errno_t err;
	int numero;
	int i;

	err = fopen_s(&arquivo, "uninter.txt", "a");

	for (i = 0; i <= 10; i++); {
		if (err == 0) {
			printf("Digite seu nome: ");
			do {
				numero = getchar();
				fputc(numero, arquivo);

			} while (numero != '\n');
		}
	}
	if (arquivo) {
		err = fclose(arquivo);
		if (err == 0) {
			printf("\n Arquivo fechado! \n\n");
		}
		else {
			printf("Arquivo nao foi fechado!\n\n");
		}
	
	}
}