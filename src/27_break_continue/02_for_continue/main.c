#include <stdio.h>

int main(void) {
    
    int i;

    for (i = 1; i <= 10; i++) {
        
        // Verificação ANTES de imprimir
        if (i == 3) {
            printf(">> Pulando a impressão do 3 (continue acionado)...\n");
            
            // O continue força o loop a pular direto para o i++ (vira 4)
            // Tudo que estiver abaixo dessa linha será ignorado NESTA volta.
            continue; 
        }

        // Se o número for 3, esta linha NUNCA será executada.
        // Para os outros números (1, 2, 4, 5...), ela roda normal.
        printf("%d\n", i);
    }
    
    printf("--- Fim do programa (Note que foi até o 10) ---\n");
    
    return 0;
}
