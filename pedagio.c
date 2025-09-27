#include <stdio.h>
#include <locale.h>

// Função para imprimir o dia da semana
void imprimirDia(int dia)
{
    switch(dia)
    {
        case 0: printf("Segunda - Feira\n"); break;
        case 1: printf("Terça - Feira\n"); break;
        case 2: printf("Quarta - Feira\n"); break;
        case 3: printf("Quinta - Feira\n"); break;
        case 4: printf("Sexta - Feira\n"); break;
        case 5: printf("Sábado\n"); break;
        case 6: printf("Domingo\n"); break;
        default: printf("Dia inválido!\n"); break;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int quantidadeCarros[7];
    int maior = 0;
    int dia = 0;
    int verificaInteiro;

    printf("\033[33m--- Pedágios Skol - Relatório ---\033[0m\n"); // Titulo na cor Amarela
    


    for (int i = 0; i < 7; i++)
    {
        switch(i)// Preeenchendo o Vetor
        {
            case 0: printf("Informe a quantidade de carros que passou pelo pedágio na Segunda - Feira: "); break;
            case 1: printf("Informe a quantidade de carros que passou pelo pedágio na Terça - Feira: "); break;
            case 2: printf("Informe a quantidade de carros que passou pelo pedágio na Quarta - Feira: "); break;
            case 3: printf("Informe a quantidade de carros que passou pelo pedágio na Quinta - Feira: "); break;
            case 4: printf("Informe a quantidade de carros que passou pelo pedágio na Sexta - Feira: "); break;
            case 5: printf("Informe a quantidade de carros que passou pelo pedágio no Sábado: "); break;
            case 6: printf("Informe a quantidade de carros que passou pelo pedágio no Domingo: "); break;
        }

        verificaInteiro = scanf("%d", &quantidadeCarros[i]); 

        if (verificaInteiro != 1 || quantidadeCarros[i]< 0 ) //Verifica se é um número e se é positivo
        {
            printf("Valor inválido, tente novamente!\n");
            while (getchar() != '\n'); // limpa o buffer do teclado
            i--; // repete o mesmo dia
        }
        else
        {
            if (quantidadeCarros[i] > maior) // Verifica qual dia teve mais carros
            {
                maior = quantidadeCarros[i];
                dia = i;
            }
        }
    }

    printf("\033[31mDia de Pico: %d\033[0m\n", maior); // Cor vermelha 
    imprimirDia(dia); // Declara qual foi o dia de Pico

    return 0;
}
