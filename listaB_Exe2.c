#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float altura, raio, areac, qtlitros, qtlatas, custo;
	printf("\nDigite o valor da altura em metros: ");
	scanf("%f",&altura);
	printf("\nDigite o valor do raio em metros: ");
	scanf("%f",&raio);
	areac=3.14*raio*raio+2*3.14*raio*altura;
	printf("\nA area do cilindro e de %.2f metros quadrados", areac);
	qtlitros=areac/3;
	printf("\nA quantidade de litros necessarios e de %.2f", qtlitros);
	qtlatas=qtlitros/5;
	printf("\nA quantidade de latas necessarias e de %.2f", qtlatas);
	custo=qtlatas*20;
	printf("\nO valor total das tintas e de R$ %.2f\n\n\n\n", custo);
	
	system("pause");
	return 0;
}
