#include <stdio.h>

int main(void) {
    float saldo = 1000.0;
    float valor = 0.0;
    int alertas_seguranca = 0;

    printf("=== PROCESSADOR DE TRANSAÇÕES ===\n");
    printf("Saldo Atual: R$ %.2f\n", saldo);
    printf("Comandos: [-999 para Sair] | [Valores altos bloqueiam]\n");
    printf("=================================\n");

    while (1) {
        printf("\n>> Valor da transação: ");

        // Validação de tipo (Input cleaning)
        if (scanf("%f", &valor) != 1) {
            printf("[!] Entrada inválida.\n");
            while (getchar() != '\n'); 
            continue;
        }

        // 1. Check de Saída
        if (valor == -999) {
            printf("Encerrando sessão...\n");
            break; 
        }

        // 2. Check de Nulidade
        if (valor == 0) continue;

        // 3. Check de Segurança (Anti-Fraude)
        if (valor > 10000 || valor < -10000) {
            printf("[!] BLOQUEIO: Valor suspeito detectado.\n");
            alertas_seguranca++;

            if (alertas_seguranca >= 3) {
                printf("[CRÍTICO] Conta bloqueada por segurança.\n");
                break;
            }
            continue; 
        }

        // 4. Check de Regra de Negócio (Saldo)
        if (saldo + valor < 0) {
            printf("[!] Saldo insuficiente.\n");
            continue; 
        }

        // --- Happy Path (Fluxo Principal) ---
        // Se chegou aqui, a transação é válida.
        saldo += valor;
        alertas_seguranca = 0; // Reseta alertas após sucesso
        printf("[OK] Novo saldo: %.2f\n", saldo);
    }

    printf("\n=== RESUMO FINAL ===\n");
    printf("Saldo em conta: R$ %.2f\n", saldo);
    
    return 0;
}
