#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programa principal agrega todos os exercícios; arquivos são incluídos com macros para evitar colisões de símbolos.

// ------------------------- Tarefa 1 -------------------------
#include "assg1_prog1.c"
#include "assg1_prog2.c"
#include "assg1_prog3.c"
#include "assg1_prog4.c"
#include "assg1_prog5.c"
#include "assg1_prog6.c"

// ------------------------- Tarefa 2 -------------------------
#include "assg2_prog1.c"
#include "assg2_prog2.c"
#include "assg2_prog3.c"
#include "assg2_prog4.c"
#include "assg2_prog5.c"
#include "assg2_prog6.c"
#include "assg2_prog7.c"
#include "assg2_prog8.c"
#include "assg2_prog9.c"

// ------------------------- Tarefa 3 -------------------------
#define input input31
#define display display31
#define gross gross31
#include "assg3_prog1.c"
#undef input
#undef display
#undef gross

#include "assg3_prog2.c"
#include "assg3_prog3.c"

// ------------------------- Tarefa 4 -------------------------
#include "assg4_prog1.c"
#include "assg4_prog2.c"
#include "assg4_prog3.c"

#define head head44
#define tail tail44
#define size size44
#include "assg4_prog4.c"
#undef head
#undef tail
#undef size

#define head head45
#define last last45
#include "assg4_prog5.c"
#undef head
#undef last

#define start start46
#include "assg4_prog6.c"
#undef start

#include "assg4_prog7.c"

// ------------------------- Tarefa 5 -------------------------
#include "assg5_prog1.c"
#include "assg5_prog2.c"

#define start start53
#include "assg5_prog3.c"
#undef start

#include "assg5_prog4.c"

#define push push55
#define removeDuplicates removeDuplicates55
#define printList printList55
#include "assg5_prog5.c"
#undef push
#undef removeDuplicates
#undef printList

#include "assg5_prog6.c"
#include "assg5_prog7.c"
#include "assg5_prog8.c"
#include "assg5_prog9.c"

// ------------------------- Tarefa 6 -------------------------
#define top top61
#include "assg6_prog1.c"
#undef top

#define top top62
#define top1 top1_62
#define temp temp62
#define count count62
#include "assg6_prog2.c"
#undef top
#undef top1
#undef temp
#undef count

#define Stack Stack63
#define createStack createStack63
#define qqq qqq63
#define peek peek63
#define ooo ooo63
#define eee eee63
#define isOperand isOperand63
#define Prec Prec63
#define infixToPostfix infixToPostfix63
#include "assg6_prog3.c"
#undef Stack
#undef createStack
#undef qqq
#undef peek
#undef ooo
#undef eee
#undef isOperand
#undef Prec
#undef infixToPostfix

#define create create64
#include "assg6_prog4.c"
#undef create

#include "assg6_prog5.c"

#define Stack Stack66
#define st st66
#define initialize initialize66
#define isFull isFull66
#define isEmpty isEmpty66
#define push push66
#define pop pop66
#define printStack printStack66
#define insertAtBottom insertAtBottom66
#define reverse reverse66
#define getSize getSize66
#include "assg6_prog6.c"
#undef Stack
#undef st
#undef initialize
#undef isFull
#undef isEmpty
#undef push
#undef pop
#undef printStack
#undef insertAtBottom
#undef reverse
#undef getSize

#include "assg6_prog7.c"

// ------------------------- Tarefa 7 -------------------------
#define STACK STACK71
#define push push71
#define pop pop71
#define isEmpty isEmpty71
#define insSort insSort71
#define sort sort71
#define init init71
#define peekLow peekLow71
#define peekHigh peekHigh71
#define peekMiddle peekMiddle71
#include "assg7_prog1.c"
#undef STACK
#undef push
#undef pop
#undef isEmpty
#undef insSort
#undef sort
#undef init
#undef peekLow
#undef peekHigh
#undef peekMiddle

#define queue_arr queue_arr72
#define rear rear72
#define front front72
#define isFull isFull72
#define isEmpty isEmpty72
#define insert insert72
#define del del72
#define peek peek72
#define display display72
#include "assg7_prog2.c"
#undef queue_arr
#undef rear
#undef front
#undef isFull
#undef isEmpty
#undef insert
#undef del
#undef peek
#undef display

#define node node73
#define f f73
#define R R73
#define isEmpty isEmpty73
#define ins ins73
#define del del73
#define peek peek73
#define display display73
#include "assg7_prog3.c"
#undef node
#undef f
#undef R
#undef isEmpty
#undef ins
#undef del
#undef peek
#undef display

#define node node74
#define queue queue74
#define stackNode stackNode74
#define push push74
#define pop pop74
#define enQueue enQueue74
#define deQueue deQueue74
#define printer printer74
#include "assg7_prog4.c"
#undef node
#undef queue
#undef stackNode
#undef push
#undef pop
#undef enQueue
#undef deQueue
#undef printer

#define cqueue_arr cqueue_arr75
#define front front75
#define rear rear75
#define isFull isFull75
#define isEmpty isEmpty75
#define insert insert75
#define del del75
#define peek peek75
#define display display75
#include "assg7_prog5.c"
#undef cqueue_arr
#undef front
#undef rear
#undef isFull
#undef isEmpty
#undef insert
#undef del
#undef peek
#undef display

#define node node76
#define rear rear76
#define isEmpty isEmpty76
#define insert insert76
#define del del76
#define peek peek76
#define display display76
#include "assg7_prog6.c"
#undef node
#undef rear
#undef isEmpty
#undef insert
#undef del
#undef peek
#undef display

// ------------------------- Tarefa 8 -------------------------
#include "assg8_prog1.c"
#include "assg8_prog2.c"
#include "assg8_prog3.c"
#include "assg8_prog4.c"
#include "assg8_prog5.c"
#include "assg8_prog6.c"

// ------------------------- Tarefa 9 -------------------------
#include "assg9_prog1.c"

#define print print92
#define create create92
#define simple simple92
#define join join92
#include "assg9_prog2.c"
#undef print
#undef create
#undef simple
#undef join

#define print print93
#define create create93
#include "assg9_prog3.c"
#undef print
#undef create

#include "assg9_prog4.c"
#include "assg9_prog5.c"
#include "assg9_prog6.c"

#define print print97
#define create create97
#define simple simple97
#define add add97
#include "assg9_prog7.c"
#undef print
#undef create
#undef simple
#undef add

#define print print98
#define create create98
#define simple simple98
#define mul mul98
#include "assg9_prog8.c"
#undef print
#undef create
#undef simple
#undef mul

// ------------------------- Tarefa 10 -------------------------
#define del del101
#include "assg10_prog1.c"
#undef del

int input();

int main()
{
    int choice, ch;

menu:
    while (1)
    {
        printf("\n================ MENU PRINCIPAL ================\n");
        printf("Pressione 1 para Tarefa 1 (Arrays I)\n");
        printf("Pressione 2 para Tarefa 2 (Arrays II)\n");
        printf("Pressione 3 para Tarefa 3 (Estruturas e Listas)\n");
        printf("Pressione 4 para Tarefa 4 (Lista Encadeada Simples)\n");
        printf("Pressione 5 para Tarefa 5 (Lista Dupla/Circular)\n");
        printf("Pressione 6 para Tarefa 6 (Pilha/Stack)\n");
        printf("Pressione 7 para Tarefa 7 (Fila/Queue)\n");
        printf("Pressione 8 para Tarefa 8 (Busca/Search)\n");
        printf("Pressione 9 para Tarefa 9 (Polinômios e Matrizes Esparsas)\n");
        printf("Pressione 10 para Tarefa 10 (Árvore Binária de Busca)\n");
        printf("Pressione 11 para Sair do Programa\n");
        printf("Digite sua escolha: ");

        ch = input();

        switch (ch)
        {
        case 1:
        {
            printf("\n--- TAREFA 1 ---\n");
            printf("1. Encontrar o menor e maior elemento em um array\n");
            printf("2. Inverter o conteúdo de um array\n");
            printf("3. Buscar um elemento em um array\n");
            printf("4. Ordenar um array\n");
            printf("5. Exibir elementos entre dois valores A e B\n");
            printf("6. Trocar o maior elemento com o menor elemento\n");
            printf("7. Voltar ao Menu Principal\n");
            printf("8. Sair\n");
            printf("Escolha: ");
            choice = input();

            switch (choice)
            {
            case 1:
            {
                assg1prog1();
                break;
            }
            case 2:
            {
                assg1prog2();
                break;
            }
            case 3:
            {
                assg1prog3();
                break;
            }
            case 4:
            {
                assg1prog4();
                break;
            }
            case 5:
            {
                assg1prog5();
                break;
            }
            case 6:
            {
                assg1prog6();
                break;
            }
            case 7:
                goto menu;
            case 8:
                printf("Encerrando...");
                exit(0);
            default:
                printf("Opção Inválida!\n");
            }
            break; // Fim do Case 1 Principal
        }

        case 2:
        {
            printf("\n--- TAREFA 2 ---\n");
            printf("1. Ordenar array de N números\n");
            printf("2. Distância mínima entre X e Y\n");
            printf("3. Segundo menor e segundo maior elemento\n");
            printf("4. Organizar: Pares seguidos por Ímpares\n");
            printf("5. Substituir elemento multiplicando vizinhos\n");
            printf("6. Maior número e sua contagem (loop único)\n");
            printf("7. Segregar 0s e 1s\n");
            printf("8. Elementos entre A e B (Array desordenado)\n");
            printf("9. K-ésimo menor e K-ésimo maior elemento\n");
            printf("10. Voltar ao Menu Principal\n");
            printf("11. Sair\n");
            choice = input();

            switch (choice)
            {
            case 1:
            {
                assg2prog1();
                break;
            }
            case 2:
            {
                assg2prog2();
                break;
            }
            case 3:
            {
                assg2prog3();
                break;
            }
            case 4:
            {
                assg2prog4();
                break;
            }
            case 5:
            {
                assg2prog5();
                break;
            }
            case 6:
            {
                assg2prog6();
                break;
            }
            case 7:
            {
                assg2prog7();
                break;
            }
            case 8:
            {
                assg2prog8();
                break;
            }
            case 9:
            {
                assg2prog9();
                break;
            }
            case 10:
                goto menu;
            case 11:
                exit(0);
            default:
                printf("Opção Inválida!\n");
            }
            break; // Fim do Case 2 Principal
        }

        case 3:
        {
            printf("\n--- TAREFA 3 ---\n");
            printf("1. Dados de funcionários e cálculo de salário bruto\n");
            printf("2. Somar duas distâncias (KM/M) usando estruturas\n");
            printf("3. Operações básicas em Lista Encadeada Simples\n");
            printf("4. Voltar\n");
            printf("5. Sair\n");
            choice = input();
            switch (choice)
            {
            case 1:
            {
                assg3prog1();
                break;
            }
            case 2:
            {
                assg3prog2();
                break;
            }
            case 3:
            {
                assg3prog3();
                break;
            }
            case 4:
                goto menu;
            case 5:
                exit(0);
            }
            break;
        }

        case 4:
        {
            printf("\n--- TAREFA 4 ---\n");
            printf("1. Inserir na lista (Frente, Fim, Qualquer Posição)\n");
            printf("2. Deletar da lista (Frente, Fim, Qualquer Posição)\n");
            printf("3. Buscar e mover elemento para o início\n");
            printf("4. Verificar se a lista é palíndromo\n");
            printf("5. Exibir lista em ordem reversa\n");
            printf("6. Rotacionar lista em K nós\n");
            printf("7. Remover duplicatas\n");
            printf("8. Voltar\n");
            printf("9. Sair\n");
            choice = input();
            switch (choice)
            {
            case 1:
            {
                assg4prog1();
                break;
            }
            case 2:
            {
                assg4prog2();
                break;
            }
            case 3:
            {
                assg4prog3();
                break;
            }
            case 4:
            {
                assg4prog4();
                break;
            }
            case 5:
            {
                assg4prog5();
                break;
            }
            case 6:
            {
                assg4prog6();
                break;
            }
            case 7:
            {
                assg4prog7();
                break;
            }
            case 8:
                goto menu;
            case 9:
                exit(0);
            }
            break;
        }

        case 5:
        {
            printf("\n--- TAREFA 5 ---\n");
            printf("1. Criar e exibir Lista Duplamente Encadeada\n");
            printf("2. Inverter Lista Duplamente Encadeada\n");
            printf("3. Menu completo DLL (Inserir, Deletar, Buscar)\n");
            printf("4. Criar e exibir Lista Circular\n");
            printf("5. Remover duplicatas em DLL ordenada\n");
            printf("6. Converter Lista Simples para Circular\n");
            printf("7. Implementar DLL usando Lista Simples\n");
            printf("8. Imprimir o meio da DLL\n");
            printf("9. Rotacionar DLL em K nós\n");
            printf("10. Voltar\n");
            choice = input();
            switch (choice)
            {
            case 1:
            {
                assg5prog1();
                break;
            }
            case 2:
            {
                assg5prog2();
                break;
            }
            case 3:
            {
                assg5prog3();
                break;
            }
            case 4:
            {
                assg5prog4();
                break;
            }
            case 5:
            {
                assg5prog5();
                break;
            }
            case 6:
            {
                assg5prog6();
                break;
            }
            case 7:
            {
                assg5prog7();
                break;
            }
            case 8:
            {
                assg5prog8();
                break;
            }
            case 9:
            {
                assg5prog9();
                break;
            }
            case 10:
                goto menu;
            }
            break;
        }

        case 6:
        {
            printf("\n--- TAREFA 6 (PILHA) ---\n");
            printf("1. Pilha usando Array (Push, Pop, Display)\n");
            printf("2. Pilha usando Lista Encadeada\n");
            printf("3. Converter Infira para Posfixa\n");
            printf("4. Converter Infixa para Prefixa\n");
            printf("5. Verificar parênteses balanceados\n");
            printf("6. Inverter uma Pilha\n");
            printf("7. Ordenar uma Pilha\n");
            printf("8. Voltar\n");
            choice = input();
            switch (choice)
            {
            case 1:
            {
                assg6prog1();
                break;
            }
            case 2:
            {
                assg6prog2();
                break;
            }
            case 3:
            {
                intopo();
                break;
            }
            case 4:
            {
                assg6prog4();
                break;
            }
            case 5:
            {
                assg6prog5();
                break;
            }
            case 6:
            {
                assg6prog6();
                break;
            }
            case 7:
            {
                assg6prog7();
                break;
            }
            case 8:
                goto menu;
            }
            break;
        }

        case 7:
        {
            printf("\n--- TAREFA 7 (FILA) ---\n");
            printf("1. Pilha com operações Extras (Menor, Maior, Meio)\n");
            printf("2. Fila usando Array Estático\n");
            printf("3. Fila usando Lista Encadeada\n");
            printf("4. Inverter uma Fila\n");
            printf("5. Fila Circular usando Array\n");
            printf("6. Fila Circular usando Lista\n");
            printf("7. Voltar\n");
            choice = input();
            switch (choice)
            {
            case 1:
            {
                assg7prog1();
                break;
            }
            case 2:
            {
                assg7prog2();
                break;
            }
            case 3:
            {
                assg7prog3();
                break;
            }
            case 4:
            {
                assg7prog4();
                break;
            }
            case 5:
            {
                assg7prog5();
                break;
            }
            case 6:
            {
                assg7prog6();
                break;
            }
            case 7:
                goto menu;
            }
            break;
        }

        case 8:
        {
            printf("\n--- TAREFA 8 (BUSCA) ---\n");
            printf("1. Busca Linear (Iterativa)\n");
            printf("2. Busca Binária (Iterativa)\n");
            printf("3. Verificar presença de elemento\n");
            printf("4. Encontrar elemento majoritário (>= n/2)\n");
            printf("5. Busca Linear (Recursiva)\n");
            printf("6. Busca Binária (Recursiva)\n");
            printf("7. Voltar\n");
            choice = input();
            switch (choice)
            {
            case 1:
            {
                assg8prog1();
                break;
            }
            case 2:
            {
                assg8prog2();
                break;
            }
            case 3:
            {
                assg8prog3();
                break;
            }
            case 4:
            {
                assg8prog4();
                break;
            }
            case 5:
            {
                assg8prog5();
                break;
            }
            case 6:
            {
                assg8prog6();
                break;
            }
            case 7:
                goto menu;
            }
            break;
        }

        case 9:
        {
            printf("\n--- TAREFA 9 (POLINÔMIOS E MATRIZES) ---\n");
            printf("1. Representar e exibir Polinômio\n");
            printf("2. Somar dois Polinômios\n");
            printf("3. Representar Matriz Esparsa (Lista)\n");
            printf("4. Transposta de Matriz Esparsa\n");
            printf("5. Verificar se Matriz é Esparsa\n");
            printf("6. Verificar tipo de Matriz (Triangular/Diagonal)\n");
            printf("7. Somar Matrizes Esparsas\n");
            printf("8. Multiplicar Matrizes Esparsas\n");
            printf("9. Voltar\n");
            choice = input();
            switch (choice)
            {
            case 1:
            {
                assg9prog1();
                break;
            }
            case 2:
            {
                assg9prog2();
                break;
            }
            case 3:
            {
                assg9prog3();
                break;
            }
            case 4:
            {
                assg9prog4();
                break;
            }
            case 5:
            {
                assg9prog5();
                break;
            }
            case 6:
            {
                assg9prog6();
                break;
            }
            case 7:
            {
                assg9prog7();
                break;
            }
            case 8:
            {
                assg9prog8();
                break;
            }
            case 9:
                goto menu;
            }
            break;
        }

        case 10:
        {
            assg10prog1();
            break;
        }

        case 11:
        {
            printf("Obrigado por usar o programa!\n");
            exit(0);
            break;
        }

        default:
        {
            printf("Entrada Inválida! Tente novamente.\n");
            break;
        }
        }
    }
    return 0;
}

int input()
{
    int number;
    if (scanf("%d", &number) != 1)
    {
        while (getchar() != '\n')
            ;
        return -1;
    }
    return number;
}

void output(float number)
{
    printf("%f", number);
}
