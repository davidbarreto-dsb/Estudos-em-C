#include <stdio.h>
#include <locale.h>

    setlocale(LC_ALL, "Portuguese_Brazil");
    int quantidadeCarros[7];
    char diaPico[];
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int quantidadeCarros[7];
    char diaPico[];

    for ( int i = 0; i < 7; i++);
    {
        switch (i)
        {
        case 0:
            printf("Informe a quantidade de carros que passou pelo pedágio na Segunda - Feira \n");
            scanf("%d",quantidadeCarros[i]);
            diaPico = quantidadeCarros[i];


            break;
        case 1:
            printf("Informe a quantidade de carros que passou pelo pedágio na Terça - Feira \n");
            scanf("%d",quantidadeCarros[i]);
            break;
        case 2:
            printf("Informe a quantidade de carros que passou pelo pedágio na Quarta - Feira \n");
            scanf("%d",quantidadeCarros[i]);
            break;
        case 3:
            printf("Informe a quantidade de carros que passou pelo pedágio na Quinta - Feira \n");
            scanf("%d",quantidadeCarros[i]);
            break;
        case 4:
            printf("Informe a quantidade de carros que passou pelo pedágio na Sexta - Feira \n");
            scanf("%d",quantidadeCarros[i]);
            break;
        case 5:
            printf("Informe a quantidade de carros que passou pelo pedágio no Sábado \n");
            scanf("%d",quantidadeCarros[i]);
            break;
        case 6:
            printf("Informe a quantidade de carros que passou pelo pedágio no Domingo \n");
            scanf("%d",quantidadeCarros[i]);
            break;
        
        default:
            break;
        }
    }
    
}