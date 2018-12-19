#include <conio.h>
#include <stdio.h>
main()
{
	float valor, taxa, tempo, pres;
	
	printf("Divite o valor do boleto: ");
	scanf("%f",&valor);
	taxa = (valor /100) * 2;
	printf("Digite o numeros de dias em atraso: ");
	scanf("%f",&tempo);
	pres = valor + (valor * (taxa/100) * tempo);
	
	printf("Boleto: %f",valor);
	printf("\nTaxa: %f",taxa);
	printf("\nDias em atraso: %f",tempo);
	printf("\nPrestacao Atualizada: %f",pres);
	getch();
}
