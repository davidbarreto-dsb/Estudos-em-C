#include <stdio.h>

int main()
{
    int numero;
    float preco;
    char categoria;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Digite o preco: ");
    scanf("%f", &preco);

    printf("Digite a categoria: ");
    scanf(" %c", &categoria); // espaço antes de %c é importante!

    printf("Numero: %d, Preco: %.2f, Categoria: %c\n",
           numero, preco, categoria);

    return 0;
}