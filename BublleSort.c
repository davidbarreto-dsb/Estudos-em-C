#include <stdio.h>
#include <locale.h>

#define TAM 10  // tamanho do vetor

// Função para imprimir o vetor
void imprimirVetor(float v[]) {
    for (int i = 0; i < TAM; i++) {
        printf("%.2f  ", v[i]);
    }
    printf("\n");
}

// Função Bubble Sort
// crescente = 1 ? ordem crescente
// crescente = 0 ? ordem decrescente
void bubbleSort(float v[], int crescente) {
    float temp;
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if ((crescente && v[j] > v[j + 1]) || (!crescente && v[j] < v[j + 1])) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valores[TAM];
    int i;

    printf("=====================================\n");
    printf("   Bem-vindo ao Organizador de Dados\n");
    printf("   Método: Bubble Sort (Bolha)\n");
    printf("=====================================\n\n");

    // Entrada dos valores
    printf("Por favor, digite %d valores numéricos:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("? Valor %d: ", i + 1);
        // Verificação de entrada válida
        while (scanf("%f", &valores[i]) != 1) {
            printf("Entrada inválida! Digite um número válido para o valor %d: ", i + 1);
            // Limpar buffer caso o usuário digite letras
            while (getchar() != '\n');
        }
    }

    // Vetor original
    printf("\n?? Valores originais:\n");
    imprimirVetor(valores);

    // Ordem crescente
    bubbleSort(valores, 1);
    printf("\n??  Valores em ordem crescente:\n");
    imprimirVetor(valores);

    // Ordem decrescente
    bubbleSort(valores, 0);
    printf("\n??  Valores em ordem decrescente:\n");
    imprimirVetor(valores);

    printf("\nObrigado por utilizar o programa! ?\n");

    return 0;
}
