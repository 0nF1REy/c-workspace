#include <stdio.h>
#include <stdbool.h>
#include "auth.h" // Importa nosso módulo

int main(void) {
    printf("=== MÓDULO DE AUTENTICAÇÃO (DEMO) ===\n");

    // Cenário 1: Tudo certo (Sucesso)
    printf("\n--- Teste 1: Credenciais Válidas ---\n");
    login_antigo(true, true, true, true);
    login_moderno(true, true, true, true);

    // Cenário 2: Erro de senha (Falha)
    printf("\n--- Teste 2: Senha Incorreta ---\n");
    // Note que na versão moderna, ele para de verificar assim que acha o erro
    login_moderno(true, false, true, true);

    // Cenário 3: Usuário Inativo (Falha)
    printf("\n--- Teste 3: Usuário Inativo ---\n");
    login_moderno(true, true, false, true);

    return 0;
}
