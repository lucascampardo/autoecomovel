#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGaso, float vEta);

int main()
{
	printf("##### Auto-ECO-Movel ##### \n");

	float precoGasolina, precoEtanol;

	printf("Qual o preco atual da Gasolina? \n");
	scanf("%f", &precoGasolina);

	printf("Qual o preco atual do Etanol? \n");
	scanf("%f", &precoEtanol);

	int resultado = Calculo(precoGasolina, precoEtanol);

	if(resultado == 0)
	{
		printf("Compensa abastecer com Gasolina. \n");
	}
	else if(resultado == 1)
	{
		printf("Compensa abastecer com Etanol. \n");
	}
	else
	{
		printf("Sao equivalentes. \n");
	}

	system("pause");

	return 0;
}

int Calculo(float vGaso, float vEta)
{
	// Preço Gasolina * 0.70 = Preco Máximo do Etanol

	if((vGaso * 0.70) < vEta)
	{
		// Compensa abastecer com Gasolina
		return 0;
	}
	else if((vGaso * 0.70) > vEta)
	{
		// Compensa abastecer com Etanol
		return 1;
	}
	else
	{
		// Valores equivalentes
		return 2;
	}
}
