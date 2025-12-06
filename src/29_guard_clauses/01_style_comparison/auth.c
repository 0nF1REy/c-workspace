#include <stdio.h>
#include "auth.h" // Inclui o próprio header para garantir que segue o contrato

// --- VERSÃO 1: CÓDIGO SETA (Arrow Code) ---
void login_antigo(bool email_valido, bool senha_correta, bool usuario_ativo, bool eh_admin) {
    printf("\n[Login Legado]: ");
    
    if (email_valido) {
        if (senha_correta) {
            if (usuario_ativo) {
                if (eh_admin) {
                    printf("Bem-vindo, Admin! (Mas que código difícil de ler...)\n");
                } else {
                    printf("Acesso negado: Requer privilégio Admin.\n");
                }
            } else {
                printf("Erro: Usuário inativo.\n");
            }
        } else {
            printf("Erro: Senha incorreta.\n");
        }
    } else {
        printf("Erro: Email inválido.\n");
    }
}

// --- VERSÃO 2: GUARD CLAUSES (Profissional) ---
void login_moderno(bool email_valido, bool senha_correta, bool usuario_ativo, bool eh_admin) {
    printf("[Login Moderno]: ");

    // Guard Clauses: "Matam" o problema logo na entrada
    if (!email_valido) {
        printf("Erro: Email inválido.\n");
        return;
    }

    if (!senha_correta) {
        printf("Erro: Senha incorreta.\n");
        return;
    }

    if (!usuario_ativo) {
        printf("Erro: Usuário inativo.\n");
        return;
    }

    if (!eh_admin) {
        printf("Acesso negado: Requer privilégio Admin.\n");
        return;
    }

    // Happy Path: Se sobreviveu até aqui, é sucesso.
    printf("Bem-vindo, Admin! (Código limpo e seguro)\n");
}
