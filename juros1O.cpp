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


/*C�lculo de Juros Compostos: Implemente um programa que calcule o valor
futuro de um investimento com juros compostos. O usu�rio deve informar o valor
inicial, a taxa de juros e o per�odo de capitaliza��o (mensal, trimestral, semestral
ou anual). O programa deve calcular e exibir o valor final ap�s o per�odo de
investimento e perguntar se o usu�rio deseja realizar novas opera��es. O
programa deve encerrar quando o usu�rio escolher a op��o �sair�.*/
