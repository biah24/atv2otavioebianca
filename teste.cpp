#include<stdio.h>
#include<math.h>

int main(){
	
	float capital, taxa_juros;
	float MvalorFinal, M2, juros, Mtotal;
	int meses;
	
	printf("Digite o Capital que deseja aplicar: ");
	scanf("%f", &capital);  //(irá investir inicialmente.)

	printf("Taxa de juros: "); //mensal, semestral, anual)
	scanf("%f", &taxa_juros);
	printf("Quantos meses: ");
	scanf("%i", &meses);

	juros = 1 + taxa_juros/100;
	MvalorFinal = capital * pow (juros, meses);
	M2 = MvalorFinal - capital;
	Mtotal = capital + M2;
			
	printf("%.2f", Mtotal);
	
	
/*while (ano > 0)

	
    juros = 1 + taxa_juros/100;
	MvalorFinal = capital * pow (juros, meses);
	ano++; 
	M2 = MvalorFinal - capital;
	Mtotal = capital + MvalorFinal;
	*/
	
}
