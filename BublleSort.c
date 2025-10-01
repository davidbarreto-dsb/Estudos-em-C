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
// crescente = 1  ordem crescente
// crescente = 0  ordem decrescente
void bubbleSort(float v[], int crescente) {
    float temp;
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if ((crescente && v[j] > v[j + 1]) || (!crescente && v[j] < v[j + 1])) {
                temp = v[j]; // temp armazena valor original   
                v[j] = v[j + 1]; // vetor recebe o valor novo no local correto 
                v[j + 1] = temp; // vetor recebe o valor antigo no lugar onde estava o novo
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valores[TAM];
    int i;
    int verificaFloat;
    printf("   ---------------------\n");
    printf("   Bem-vindo ao Organizador de Dados\n");
    printf("   ---------------------\n");
    

    // Entrada dos valores
    printf("Por favor, digite o valor de %d produtos:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf(" Produto  %d: ", i + 1);
        // Verificação de entrada válida
        verificaFloat = scanf("%f", &valores[i]); 

        if (verificaFloat != 1 || valores[i]< 0 ) //Verifica se é um número e se é positivo
        {
            printf("Valor inválido, tente novamente!\n");
            while (getchar() != '\n'); // limpa o buffer do teclado
            i--; // repete o mesmo produto
            
        }
    }

    // Vetor original
    printf("\n Valores originais:\n");
    imprimirVetor(valores);

    // Ordem crescente
    bubbleSort(valores, 1);
    printf("\n  Valores em ordem crescente:\n");
    imprimirVetor(valores);

    // Ordem decrescente
    bubbleSort(valores, 0);
    printf("\n  Valores em ordem decrescente:\n");
    imprimirVetor(valores);

    printf("\nObrigado por utilizar o programa! \n");

    return 0;
}
