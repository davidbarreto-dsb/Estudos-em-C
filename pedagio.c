#include <stdio.h>
#include <locale.h>

// Fun��o para imprimir o dia da semana
void imprimirDia(int dia)
{
    switch(dia)
    {
        case 0: printf("Segunda - Feira\n"); break;
        case 1: printf("Ter�a - Feira\n"); break;
        case 2: printf("Quarta - Feira\n"); break;
        case 3: printf("Quinta - Feira\n"); break;
        case 4: printf("Sexta - Feira\n"); break;
        case 5: printf("S�bado\n"); break;
        case 6: printf("Domingo\n"); break;
        default: printf("Dia inv�lido!\n"); break;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int quantidadeCarros[7];
    int maior = 0;
    int dia = 0;
    int verificaInteiro;

    printf("\033[33m--- Ped�gios Skol - Relat�rio ---\033[0m\n"); // Titulo na cor Amarela
    


    for (int i = 0; i < 7; i++)
    {
        switch(i)// Preeenchendo o Vetor
        {
            case 0: printf("Informe a quantidade de carros que passou pelo ped�gio na Segunda - Feira: "); break;
            case 1: printf("Informe a quantidade de carros que passou pelo ped�gio na Ter�a - Feira: "); break;
            case 2: printf("Informe a quantidade de carros que passou pelo ped�gio na Quarta - Feira: "); break;
            case 3: printf("Informe a quantidade de carros que passou pelo ped�gio na Quinta - Feira: "); break;
            case 4: printf("Informe a quantidade de carros que passou pelo ped�gio na Sexta - Feira: "); break;
            case 5: printf("Informe a quantidade de carros que passou pelo ped�gio no S�bado: "); break;
            case 6: printf("Informe a quantidade de carros que passou pelo ped�gio no Domingo: "); break;
        }

        verificaInteiro = scanf("%d", &quantidadeCarros[i]); 

        if (verificaInteiro != 1 || quantidadeCarros[i]< 0 ) //Verifica se � um n�mero e se � positivo
        {
            printf("Valor inv�lido, tente novamente!\n");
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
