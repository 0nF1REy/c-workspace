#include <stdio.h>

#define SENHA_CORRETA 1234

int main(void) {
    int senha_digitada = 0;
    int tentativas = 0;
    
    printf("--- SISTEMA DE SEGURANÇA ---\n");

    // Loop executado enquanto a senha estiver errada
    while (senha_digitada != SENHA_CORRETA) {
        
        // Se já errou 3 vezes, bloqueia (Break forçado)
        if (tentativas >= 3) {
            printf("\nALERTA: Número máximo de tentativas excedido!\n");
            printf("Sistema bloqueado por segurança.\n");
            return 1; // Encerra o programa com código de erro
        }

        printf("Digite o PIN de acesso (4 dígitos): ");
        scanf("%d", &senha_digitada);

        if (senha_digitada != SENHA_CORRETA) {
            printf("x Senha incorreta! Tente novamente.\n\n");
            tentativas++;
        }
    }

    // O código só chega aqui se o loop terminar (senha correta)
    printf("\n>>> ACESSO PERMITIDO! Bem-vindo ao sistema. <<<\n");

    return 0;
}
