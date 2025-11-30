#include <stdio.h>

void limpar_buffer(void);

int main(void) {
    int opcao;

    printf("--- SISTEMA DO-WHILE ---\n");

    // A mágica acontece aqui: O bloco 'do' executa imediatamente.
    // O teste da condição só acontece no final.
    do {
        printf("\n[ MENU PRINCIPAL ]\n");
        printf("1. Exibir status do sistema\n");
        printf("2. Executar diagnóstico\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");

        // Validação de entrada (segurança)
        if (scanf("%d", &opcao) != 1) {
            printf("Erro: Entrada inválida!\n");
            limpar_buffer();
            continue; // Volta para o início do 'do'
        }

        // Processamento da escolha
        switch (opcao) {
            case 1:
                printf(">> Status: Tudo operando normalmente.\n");
                break;
            case 2:
                printf(">> Diagnóstico: Verificando memória... OK.\n");
                break;
            case 0:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf(">> Opção inválida! Tente 1, 2 ou 0.\n");
        }

    } while (opcao != 0); // O ponto e vírgula aqui é OBRIGATÓRIO no do-while!

    return 0;
}

// Função auxiliar para limpar sujeira do teclado (enter/letras)
void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
