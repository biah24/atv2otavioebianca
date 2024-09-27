#include<stdio.h>
#include<math.h>

int main(){
	int op, periodo, anos;
	float valor_inicial, taxa_juros, valor_final, t, meses, mes, i;
	
	do{
	
	printf("Digite o valor inicial (capital): ");
	scanf("%f", &valor_inicial);
	
	printf("Digite a taxa de juros: ");
	scanf("%f", &i);
	
	printf("Sua taxa de juros sera:\n");
	printf("1. Mensal\n");
	printf("2. Anual\n");
	printf("3. Sair\n");
	printf ("Escolha (1 - 3): ");
	scanf("%i", &op);


	
	taxa_juros = i/100;
	
	if (op == 1) {
        printf("Quantos meses: ");
        scanf("%f", &meses);
        mes = 0;
        valor_final = valor_inicial; // Inicializa valor_final

    while (mes < meses) {
        valor_final *= (1 + taxa_juros); // Atualiza o valor final
    	mes++;
            
	}printf("Aplicando a taxa de %.2f por cento ao mes, apos %.1f meses o valor sera de: R$%.2f\n", i, meses, valor_final);
	
	
	}else if(op == 2){
	printf("Periodo de Capitalizacao:\n");
	printf("1. Mensal (12 meses)\n");
	printf("2. Trimestral (4 Trimestre)\n");
	printf("3. Semestral (2 Semestres)\n");
	printf("4. Anual\n");
	printf("Escolha uma opcao (1 - 4): ");
	scanf("%i", &periodo);
			
	switch(periodo){
		case 1:
			t= taxa_juros/12;
			valor_final = valor_inicial * pow((1 + t), 1);
			printf("Aplicando a taxa de %.2f por cento ao ano, apos uma ano o valor sera de: R$%.2f\n", i, valor_final);
		break;
		case 2:
			t = taxa_juros/4;
			valor_final = valor_inicial * pow((1 + t), 1);
			printf("Aplicando a taxa de %.2f por cento ao ano, apos uma ano o valor sera de: R$%.2f\n", i, valor_final);
		break;
		case 3:
			t = taxa_juros/2;
			valor_final = valor_inicial * pow((1 + t), 1);
			printf("Aplicando a taxa de %.2f por cento ao ano, apos uma ano o valor sera de: R$%.2f\n", i, valor_final);
		break;
		case 4:
			printf("Qnts anos: ");
			scanf("%d", &anos);
			valor_final = valor_inicial * pow((1 + taxa_juros), anos);
			printf("Aplicando a taxa de %.2f por cento ao ano, apos %i o valor sera de: R$%.2f\n", i,anos, valor_final);
		break;
		
		default: 
		 	printf("Opcao invalida, digite 1 - 4:");

}
	}else
	printf("Encerrado");
}while(op != 3);
return 0;
		


}
