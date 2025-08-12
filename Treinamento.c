#include <stdio.h> 

    int main() {
        int numero;
        char repetir;
        printf("\n\\~\\~\\~\\~\\ SISTEMA DE IMPAR/PAR /~/~/~/~/");
        do {
            printf("\nSelecione até que número irá contar: ");
            scanf("%d", &numero);
            printf("\n");
            for (int i = 1; i <= numero; i++) {
                if (i % 2 == 0) {
                    printf("%d - par\n", i);
                } else {
                    printf("%d - impar\n", i);
                }
            }
            printf("Gostaria de repetir o programa? (s/n): ");
            scanf(" %c", &repetir);
                while (repetir != 's' && repetir != 'S' && repetir != 'n' && repetir != 'N') {
                    printf("\nA resposta deve ser 's' (Sim) ou 'n' (Não). Tente novamente.\n");
                    printf("Gostaria de repetir o programa? ");
                    scanf(" %c", &repetir);
            }
        } while (repetir == 's' || repetir == 'S');
    }