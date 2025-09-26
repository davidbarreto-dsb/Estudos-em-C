#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int quantidadeCarros[7];
    int maior = 0;

    for (int i = 0; i < 7; i++)
    {
        switch (i)
        {
        case 0:
            printf("Informe a quantidade de carros que passou pelo pedágio na Segunda - Feira \n");
            break;
        case 1:
            printf("Informe a quantidade de carros que passou pelo pedágio na Terça - Feira \n");
            break;
        case 2:
            printf("Informe a quantidade de carros que passou pelo pedágio na Quarta - Feira \n");
            break;
        case 3:
            printf("Informe a quantidade de carros que passou pelo pedágio na Quinta - Feira \n");
            break;
        case 4:
            printf("Informe a quantidade de carros que passou pelo pedágio na Sexta - Feira \n");
            break;
        case 5:
            printf("Informe a quantidade de carros que passou pelo pedágio no Sábado \n");
            break;
        case 6:
            printf("Informe a quantidade de carros que passou pelo pedágio no Domingo \n");
            break;
        }

        scanf("%d", &quantidadeCarros[i]); // primeiro lê

        if (maior < quantidadeCarros[i])  // depois compara
        {
            maior = quantidadeCarros[i];
        }
    }

    printf("Dia de Pico: %d\n", maior);
}
