#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <math.h>   // Inclui a biblioteca matemática, necessária para funções como pow()

int main() {
    int op, periodo, anos, meses, mes; // Variáveis para opções, períodos e contadores
    float valor_inicial, taxa_juros, valor_final, t, i; // Variáveis para o capital, taxa de juros e montante final

    do {
        // Solicita ao usuário o valor inicial do capital
        printf("Digite o valor inicial (capital): ");
        scanf("%f", &valor_inicial);
        
        // Solicita ao usuário a taxa de juros
        printf("Digite a taxa de juros: ");
        scanf("%f", &i);
        
        // Informa as opções de taxa de juros
        printf("Sua taxa de juros será:\n");
        printf("1. Mensal\n");
        printf("2. Anual\n");
        printf("3. Sair\n");
        printf("Escolha (1 - 3): ");
        scanf("%i", &op);

        // Converte a taxa de juros de porcentagem para decimal
        taxa_juros = i / 100;

        // Opção 1: Cálculo com taxa mensal
        if (op == 1) {
            printf("Quantos meses: ");
            scanf("%f", &meses); // Solicita o número de meses
            mes = 0; // Inicializa o contador de meses
            valor_final = valor_inicial; // Inicializa o valor final com o capital inicial

            // Loop para calcular o montante após os meses especificados
            while (mes < meses) {
                valor_final *= (1 + taxa_juros); // Aplica os juros compostos
                mes++; // Incrementa o contador de meses
            }

            // Exibe o resultado final após os meses
            printf("Aplicando a taxa de %.2f por cento ao mês, após %d meses o valor será de: R$ %.2f\n", i, meses, valor_final);
        
        // Opção 2: Cálculo com taxa anual
        } else if (op == 2) {
            // Solicita o período de capitalização
            printf("Período de Capitalização:\n");
            printf("1. Mensal (12 meses)\n");
            printf("2. Trimestral (4 Trimestres)\n");
            printf("3. Semestral (2 Semestres)\n");
            printf("4. Anual\n");
            printf("Escolha uma opção (1 - 4): ");
            scanf("%i", &periodo);
            
            // Avalia o tipo de capitalização selecionado
            switch (periodo) {
                case 1:
                    t = taxa_juros / 12; // Taxa mensal
                    valor_final = valor_inicial * pow((1 + t), 1); // Cálculo para 1 mês
                    printf("Aplicando a taxa de %.2f por cento ao ano, após um ano o valor será de: R$ %.2f\n", i, valor_final);
                    break;
                case 2:
                    t = taxa_juros / 4; // Taxa trimestral
                    valor_final = valor_inicial * pow((1 + t), 1); // Cálculo para 1 trimestre
                    printf("Aplicando a taxa de %.2f por cento ao ano, após um ano o valor será de: R$ %.2f\n", i, valor_final);
                    break;
                case 3:
                    t = taxa_juros / 2; // Taxa semestral
                    valor_final = valor_inicial * pow((1 + t), 1); // Cálculo para 1 semestre
                    printf("Aplicando a taxa de %.2f por cento ao ano, após um ano o valor será de: R$ %.2f\n", i, valor_final);
                    break;
                case 4:
                    printf("Quantos anos: ");
                    scanf("%d", &anos); // Solicita o número de anos
                    valor_final = valor_inicial * pow((1 + taxa_juros), anos); // Cálculo para anos
                    printf("Aplicando a taxa de %.2f por cento ao ano, após %i anos o valor será de: R$ %.2f\n", i, anos, valor_final);
                    break;
                default: 
                    printf("Opção inválida, digite 1 - 4:\n");
            }
        } else if (op != 3) {
            printf("Opção inválida. Tente novamente.\n"); // Trata opções inválidas
        }
    } while (op != 3); // Repete até que o usuário escolha sair

    printf("Encerrado.\n"); // Mensagem de encerramento
    return 0; // Retorno da função principal
}

