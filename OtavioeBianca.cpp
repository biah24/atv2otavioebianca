/*Implemente um programa que calcule o valor
futuro de um investimento com juros compostos. O usu�rio deve informar o valor
inicial, a taxa de juros e o per�odo de capitaliza��o (mensal, trimestral, semestral
ou anual). O programa deve calcular e exibir o valor final ap�s o per�odo de
investimento e perguntar se o usu�rio deseja realizar novas opera��es. O
programa deve encerrar quando o usu�rio escolher a op��o �sair�.*/


#include<stdio.h>
#include<math.h>

int main(){
	float capital, valor_mensal, taxa_juros;
	float MvalorFinal, M2, potencial;
	int meses, op;
	printf("Digite o Capital que deseja aplicar: ");
	scanf("%f", &capital);  //(ir� investir inicialmente.)
	printf("Taxa de juros: "); //mensal, semestral, anual)
	scanf("%f", &taxa_juros);
	printf ("Periodo: (1, 2, 3 ou 4):\n");
	printf("1. Mensal:\n 2.Trimestral\n3.Semestral\n4.Anual");
	printf("Digite qual opcao:");
	scanf("%f", &op);
	printf("Quantos meses: ");
	scanf("%i", &meses);
	
	
	switch(op){
		case 1:
			MvalorFinal = capital * pow ((taxa_juros/100), meses);
			M2 = capital + MvalorFinal;
			
			printf("%.2f", MvalorFinal);
		break;
		case 2:
			
			MvalorFinal = capital;
		break;
		case 3:
	
			MvalorFinal = capital;
			printf("%.2f", MvalorFinal);
		break;
		case 4:
			MvalorFinal = capital * pow ((taxa_juros/100), meses);
			M2 = capital + MvalorFinal;
			
			printf("%.2f", MvalorFinal);
		break;
		default:
			printf("Digite 1, 2, 3 ou 4");
		

}
}
