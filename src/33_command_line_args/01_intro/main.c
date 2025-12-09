#include <stdio.h>

// argc: Argument Count (Quantos argumentos)
// argv: Argument Vector (O texto dos argumentos)
int main(int argc, char *argv[]){
    int i;

    if(argc > 1){
        printf("Foram inseridos %d argumentos:\n", argc);
        for(i = 0; i < argc; i++){
            // argv[0] é sempre o nome do programa
            printf("Argumento %d: %s\n", i, argv[i]);
        }
    } else {
        printf("Não foram inseridos argumentos no programa.\n");
        printf("Tente rodar assim: ./app teste 123\n");
    }
    
    return 0;
}
