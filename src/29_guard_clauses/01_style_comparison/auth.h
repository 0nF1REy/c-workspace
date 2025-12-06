#ifndef AUTH_H
#define AUTH_H

#include <stdbool.h> // Necessário para usar o tipo 'bool' no protótipo

// Simula um login com código "feio" (Arrow Code)
void login_antigo(bool email_valido, bool senha_correta, bool usuario_ativo, bool eh_admin);

// Simula um login com código "limpo" (Guard Clauses)
void login_moderno(bool email_valido, bool senha_correta, bool usuario_ativo, bool eh_admin);

#endif
