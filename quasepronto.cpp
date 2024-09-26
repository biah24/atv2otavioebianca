#include <stdio.h>
#include <math.h>

int main(){
	int mes, semestre, trimestre, anos, op;
	float pre_juros, valor_inicial, valor_durante, valor_final, taxa_juros, M2, total, juros, Mtotal;
	
	printf("digite o capital aplicado: ");
	scanf("%f", &valor_inicial);
	
	printf("digite a taxa de juros: ");
	scanf("%f", &taxa_juros);
	
	printf("escolha entre as opcoes abaixo: \n");
	printf("1- mensal\n");
	printf("2- trimestral\n");
	printf("3- semestral\n");
	printf("4- anual\n");
	printf("escolha uma opcao\n");
	scanf("%i", &op);
	
	
		switch(op){
		case 1:
			printf("digite quantos meses: \n");
			scanf("%i", &mes);
			
			while(mes>0){
			pre_juros= valor_inicial/100;
			taxa_juros= pre_juros * taxa_juros;
			valor_durante= taxa_juros + valor_inicial;
			valor_inicial= valor_durante;
			mes--;
			}
			
			printf("%f \n", valor_inicial);
			break;
			
		case 2:
			
			
			
			break;
			
		case 3:
			
			
			
			break;
			
		case 4:
			printf("digite quantos anos: \n");
			scanf("%i", &anos);
			
			juros = 1 + taxa_juros/100;
			valor_final = valor_inicial * pow (juros, anos);
			M2 = valor_final - valor_inicial;
			Mtotal = valor_inicial + M2;
			
	printf("%.2f", Mtotal);
			
			break;
			
		default:
			printf("invalido");
	} 

	
	
}
