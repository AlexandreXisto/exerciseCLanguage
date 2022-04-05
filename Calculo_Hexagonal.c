#include <stdio.h> //Biblioteca para acessar os comandos básicos de STDIO
#include <stdlib.h>
#include <math.h>

void calc_hexa(float L, float *area, float* perimetro) { //Criado um ponteiro para receber o calculo da área
	*area = 3 * pow(L, 2) * sqrt(3) / 2; //area recebe o calculo feito do perimetro
	*perimetro = 6 * L;
}

int main()
{
	float L, perimetro, area;
	printf_s("Digite o lado: "); //Armazena o lado do hexagono
	scanf_s("%f", &L);

	if (L <= -1) { /*Caso o usuario não digite um valor válido
 é criada uma condição de sáida.*/

		printf_s("Digite um valor positivo!\n"); 
		system("pause");
		exit(1);

	}
	else {
		calc_hexa(L, &area, &perimetro);
		printf_s("A area eh de: %.2f\n", area);
		printf_s("O perimetro eh de: %.2f\n", perimetro);
	}
	system("pause");
	return 0;

}