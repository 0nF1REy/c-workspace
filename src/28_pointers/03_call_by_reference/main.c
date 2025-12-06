#include <stdio.h>

// Função que TENTA trocar (Por Valor) - NÃO FUNCIONA
// Ela recebe apenas CÓPIAS dos números. Mudar a cópia não muda o original.
void trocar_fake(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("   [Dentro da Fake]: A=%d, B=%d (Trocou aqui, mas...)\n", a, b);
}

// Função que REALMENTE troca (Por Referência/Ponteiro) - FUNCIONA
// Ela recebe os ENDEREÇOS de memória. Ela vai lá na "casa" e muda a mobília.
void trocar_real(int *a, int *b) {
    int temp = *a; // Pega o valor que está no endereço A
    *a = *b;       // Coloca no endereço A o valor que está no endereço B
    *b = temp;     // Coloca no endereço B o valor salvo
}

int main(void) {
    int x = 10;
    int y = 99;

    printf("--- CALL BY VALUE vs CALL BY REFERENCE ---\n");
    printf("Inicio: X = %d, Y = %d\n\n", x, y);

    // TESTE 1: Passagem por Valor (Cópia)
    trocar_fake(x, y);
    printf("Após trocar_fake: X = %d, Y = %d (Nada mudou!)\n\n", x, y);

    // TESTE 2: Passagem por Referência (Ponteiro)
    // Passamos &x e &y (os endereços)
    trocar_real(&x, &y);
    printf("Após trocar_real: X = %d, Y = %d (Sucesso!)\n", x, y);

    return 0;
}
