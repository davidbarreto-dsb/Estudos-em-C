#include <stdio.h>
#include<locale.h>
// Feito por David Barreto

void exibirMenu() //Fun��o para exibir o Menu
{
    printf("\n------- Sistema Banc�rio -------\n\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Dep�sito\n");
    printf("3 - Realizar Saque\n");
    printf("4 - Sair\n");
    printf("Selecione a op��o: ");
}

int verificarSenha() // Fun��o para verificar a senha
{
    int senha;
    const int senhaCorreta = 2444;
    int tentativas = 0;
    const int maxTentativas = 3;

    while (tentativas < maxTentativas)
    {
        printf("Digite a sua senha: ");
        scanf("%d", &senha);

        if (senha == senhaCorreta)
        {
            printf("Senha correta! Acesso liberado.\n\n");
            return 0; // Se a senha estiver correta o programa segue
        }
        else
        {
            tentativas++;
            if (tentativas < maxTentativas)
            {
                printf("Senha incorreta!\n");
                printf("Restam %d tentativa(s).\n", maxTentativas - tentativas);
            }
        }
    }

    printf("Transa��o n�o realizada.\n");
    printf("N�mero m�ximo de tentativas atingido. Tente novamente mais tarde.\n");
    return 1; // Se a senha estiver incorreta o programa da erro
}

int main()
{   
    setlocale(LC_ALL,"Portuguese_Brazil");
    int operador;
    float valor;
    float saldo = 2000;

    do
    {
        exibirMenu();
        scanf("%d", &operador);
        switch (operador)
        {
        case 1: // Mostra o saldo da conta
            if (verificarSenha() == 0) // S� realiza se a senha estiver correta
            {
                printf("Seu saldo atual �: R$ %.2f\n", saldo);
            }

            break;
        case 2: // Realiza um Dep�sito
            if (verificarSenha() == 0) // S� realiza se a senha estiver correta
            {
                printf("Seu saldo atual �: R$ %.2f\n\n", saldo);
                printf("Qual o valor do D�posito?\n");
                scanf("%f", &valor);
                if (valor > 0)
                {
                    saldo += valor;
                    printf("Seu saldo atual �: R$ %.2f\n\n", saldo);
                }
                else // Caso o valor esteja errado informa ao usu�rio
                {
                    printf("Valor inv�lido");
                }
                break;
            }

            break;
        case 3: // Realiza um saque
            if (verificarSenha() == 0) // S� realiza se a senha estiver correta
            {
                printf("Seu saldo atual �: R$ %.2f\n\n", saldo);
                printf("Qual o valor do Saque?\n");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo)
                {
                    saldo -= valor;
                    printf("Seu saldo atual �: R$ %.2f\n", saldo);
                }
                else
                {
                    printf("Valor inv�lido ou Saldo insuficiente.\n");
                    printf("Tente Novamente!\n");
                }
                break;
            }
        case 4: // Finaliza o acesso do prograa
            printf("Obrigado por usar nosso sistema!");
             break;
        default: // Informa ao cliente que a op��o � invalida
            printf("Op��o Inv�lida!");
            break;
        }

    }

    while (operador != 4);
return 0;
}

