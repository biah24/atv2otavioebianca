#include <stdio.h>
#include <math.h>
//1.0
//pedir: valor, taxa e periodo

int main(){
	
	float valor, taxa, final;
	int i, resg;
	
	printf("#=========================# \n");
	printf("Qual sera o valor inicial:");
	scanf("%f", &valor);
	
	printf("#=========================# \n");
	printf("Qual vai ser o periodo:");
	scanf("%i", &i);
	
	resg = i;
	
	printf("#=========================# \n");
	printf("Qual sera a taxa:");
	scanf("%f", &taxa);
	
	//final = valor*pow ((1+taxa), i);
	
	while(i<resg){
		
		//final = valor*pow((1+taxa), i);
		final = valor*pow(1+(taxa/100), i);
		i++;
		
	}	
	
	printf("o valor ao final do periodo de %i meses eh: %.2f", resg, final );
	
	
}


/*Cálculo de Juros Compostos: Implemente um programa que calcule o valor
futuro de um investimento com juros compostos. O usuário deve informar o valor
inicial, a taxa de juros e o período de capitalização (mensal, trimestral, semestral
ou anual). O programa deve calcular e exibir o valor final após o período de
investimento e perguntar se o usuário deseja realizar novas operações. O
programa deve encerrar quando o usuário escolher a opção “sair’.*/
