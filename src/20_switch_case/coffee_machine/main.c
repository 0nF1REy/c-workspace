#include <stdio.h>

// Protótipos das funções
void exibir_menu(void);
void preparar_espresso(void);
void preparar_longo(void);
void preparar_cappuccino(void);
void limpar_buffer(void);

int main(void) {
    int opcao = 0;

    printf("--- INICIANDO SISTEMA DA CAFETEIRA ---\n");

    do {
        exibir_menu();
        
        // Tenta ler um número inteiro
        if (scanf("%d", &opcao) != 1) {
            printf("Erro: Entrada inválida! Digite apenas números.\n");
            limpar_buffer(); // Limpa o "lixo" se digitar letras
            continue;        // Pula para a próxima iteração do loop
        }

        printf("\n"); // Pula linha para estética

        // A ESTRUTURA SWITCH CASE
        switch (opcao) {
            case 1:
                preparar_espresso();
                break; // O break é essencial para não "vazar" para o caso de baixo
            
            case 2:
                preparar_longo();
                break;

            case 3:
                preparar_cappuccino();
                break;

            case 4:
                printf("Desligando o sistema...\n");
                break;

            default:
                // Executado se a opção não for 1, 2, 3 ou 4
                printf("Opção %d desconhecida. Tente novamente.\n", opcao);
        }
        
        printf("\n-------------------------------\n");

    } while (opcao != 4); // Repete até o usuário escolher sair (4)

    return 0;
}

// --- Implementação das Funções ---

void exibir_menu(void) {
    printf("\nEscolha sua bebida:\n");
    printf("1 - Espresso\n");
    printf("2 - Café Longo\n");
    printf("3 - Cappuccino\n");
    printf("4 - Sair\n");
    printf("Opção: ");
}

void preparar_espresso(void) {
    printf(">> Moendo grãos...\n");
    printf(">> Extraindo café sob alta pressão...\n");
    printf(">> [PRONTO] Seu Espresso está servido!\n");
}

void preparar_longo(void) {
    printf(">> Moendo grãos...\n");
    printf(">> Adicionando mais água quente...\n");
    printf(">> [PRONTO] Seu Café Longo está servido!\n");
}

void preparar_cappuccino(void) {
    printf(">> Aquecendo o leite...\n");
    printf(">> Criando espuma...\n");
    printf(">> Adicionando café...\n");
    printf(">> [PRONTO] Seu Cappuccino está servido!\n");
}

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
