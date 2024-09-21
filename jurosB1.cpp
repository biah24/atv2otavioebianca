#include<stdio.h>
#include<math.h>

int main(){
	float valor_inicial, valor_mensal, taxa_juros;
	float MvalorFinal, potencial;
	int meses, periodo;
	printf("Digite o valor inicial: ");
	scanf("%f", &valor_inicial);  //(irá investir inicialmente.)
	printf ("Digite o valor mensal: "); //preciso colocar o quanto você pretende investir por mês)
	scanf("%f", &valor_inicial);
	printf("Taxa de juros: "); //mensal, semestral, anual)
	scanf("%f", &taxa_juros);
	printf ("Periodo: (1, 2 ou 3): ");
	printf("1. Mensal: ");
	printf("2. Trimestral: ");
	printf("3. Semestral: ");
	printf("4. Anual: ");  //Periodo: mensal, semestreal, anual
	scanf("%f", &periodo);
	
	
	MvalorFinal = valor_inicial * (1 + (taxa_juros/100));
	potencial = (1 + (taxa_juros/100));
	
	switch(periodo);
		case 1:
			printf("Quantos meses: ");
			scanf("%i", &meses);
				MvalorFinal = valor_inicial * (1 + (taxa_juros/100));
				potencial = (1 + (taxa_juros/100));
				MvalorFinal = valor_inicial * pow(potencia, 3);
				printf("%.2f", MvalorFinal);
			
		
		case 2:
			
			MvalorFinal = valor_inicial * pow(potencia, 3);
			printf("%.2f", MvalorFinal);
		case 3:
			
			MvalorFinal = valor_inicial * pow(potencia, 3);
			printf("%.2f", MvalorFinal);
		case 4:
			MvalorFinal = valor_inicial * pow(potencia, 3);
			printf("%.2f", MvalorFinal);
		

}
