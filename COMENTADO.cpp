#include <stdio.h>  // Inclui a biblioteca padr�o de entrada e sa�da
#include <math.h>   // Inclui a biblioteca matem�tica, necess�ria para fun��es como pow()

int main() {
    int op, periodo, anos, meses, mes; // Vari�veis para op��es, per�odos e contadores
    float valor_inicial, taxa_juros, valor_final, t, i; // Vari�veis para o capital, taxa de juros e montante final

    do {
        // Solicita ao usu�rio o valor inicial do capital
        printf("Digite o valor inicial (capital): ");
        scanf("%f", &valor_inicial);
        
        // Solicita ao usu�rio a taxa de juros
        printf("Digite a taxa de juros: ");
        scanf("%f", &i);
        
        // Informa as op��es de taxa de juros
        printf("Sua taxa de juros ser�:\n");
        printf("1. Mensal\n");
        printf("2. Anual\n");
        printf("3. Sair\n");
        printf("Escolha (1 - 3): ");
        scanf("%i", &op);

        // Converte a taxa de juros de porcentagem para decimal
        taxa_juros = i / 100;

        // Op��o 1: C�lculo com taxa mensal
        if (op == 1) {
            printf("Quantos meses: ");
            scanf("%f", &meses); // Solicita o n�mero de meses
            mes = 0; // Inicializa o contador de meses
            valor_final = valor_inicial; // Inicializa o valor final com o capital inicial

            // Loop para calcular o montante ap�s os meses especificados
            while (mes < meses) {
                valor_final *= (1 + taxa_juros); // Aplica os juros compostos
                mes++; // Incrementa o contador de meses
            }

            // Exibe o resultado final ap�s os meses
            printf("Aplicando a taxa de %.2f por cento ao m�s, ap�s %d meses o valor ser� de: R$ %.2f\n", i, meses, valor_final);
        
        // Op��o 2: C�lculo com taxa anual
        } else if (op == 2) {
            // Solicita o per�odo de capitaliza��o
            printf("Per�odo de Capitaliza��o:\n");
            printf("1. Mensal (12 meses)\n");
            printf("2. Trimestral (4 Trimestres)\n");
            printf("3. Semestral (2 Semestres)\n");
            printf("4. Anual\n");
            printf("Escolha uma op��o (1 - 4): ");
            scanf("%i", &periodo);
            
            // Avalia o tipo de capitaliza��o selecionado
            switch (periodo) {
                case 1:
                    t = taxa_juros / 12; // Taxa mensal
                    valor_final = valor_inicial * pow((1 + t), 1); // C�lculo para 1 m�s
                    printf("Aplicando a taxa de %.2f por cento ao ano, ap�s um ano o valor ser� de: R$ %.2f\n", i, valor_final);
                    break;
                case 2:
                    t = taxa_juros / 4; // Taxa trimestral
                    valor_final = valor_inicial * pow((1 + t), 1); // C�lculo para 1 trimestre
                    printf("Aplicando a taxa de %.2f por cento ao ano, ap�s um ano o valor ser� de: R$ %.2f\n", i, valor_final);
                    break;
                case 3:
                    t = taxa_juros / 2; // Taxa semestral
                    valor_final = valor_inicial * pow((1 + t), 1); // C�lculo para 1 semestre
                    printf("Aplicando a taxa de %.2f por cento ao ano, ap�s um ano o valor ser� de: R$ %.2f\n", i, valor_final);
                    break;
                case 4:
                    printf("Quantos anos: ");
                    scanf("%d", &anos); // Solicita o n�mero de anos
                    valor_final = valor_inicial * pow((1 + taxa_juros), anos); // C�lculo para anos
                    printf("Aplicando a taxa de %.2f por cento ao ano, ap�s %i anos o valor ser� de: R$ %.2f\n", i, anos, valor_final);
                    break;
                default: 
                    printf("Op��o inv�lida, digite 1 - 4:\n");
            }
        } else if (op != 3) {
            printf("Op��o inv�lida. Tente novamente.\n"); // Trata op��es inv�lidas
        }
    } while (op != 3); // Repete at� que o usu�rio escolha sair

    printf("Encerrado.\n"); // Mensagem de encerramento
    return 0; // Retorno da fun��o principal
}

