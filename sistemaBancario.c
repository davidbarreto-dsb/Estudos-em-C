#include <stdio.h>
// Feito por David Barreto

void exibirMenu()
{
    printf("------- Sistema Bancário -------\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Depósito\n");
    printf("3 - Realizar Saque\n");
    printf("4 - Sair\n");
    printf("Selecione a opção: ");
}

int verificarSenha()
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
            printf("Senha correta! Acesso liberado.\n");
            return 0; // senha correta
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

    printf("Transação não realizada.\n");
    printf("Número máximo de tentativas atingido. Tente novamente mais tarde.\n");
    return 1; // falhou
}

int main()
{
    int operador;
    float valor;
    float saldo = 2000;

    do
    {
        exibirMenu();
        scanf("%d", &operador);
        switch (operador)
        {
        case 1:
            if (verificarSenha() == 0) // Só realiza se a senha estiver correta
            {
                printf("Seu saldo atual é: R$ %.2f\n", saldo);
            }

            break;
        case 2:
            if (verificarSenha() == 0) // Só realiza se a senha estiver correta
            {
                printf("Seu saldo atual é: R$ %.2f\n", saldo);
                printf("Qual o valor do Déposito?\n");
                scanf("%f", &valor);
                if (valor > 0)
                {
                    saldo += valor;
                    printf("Seu saldo atual é: R$ %.2f\n", saldo);
                }
                else
                {
                    printf("Valor inválido");
                }
                break;
            }

            break;
        case 3:
            if (verificarSenha() == 0) // Só realiza se a senha estiver correta
            {
                printf("Seu saldo atual é: R$ %.2f\n", saldo);
                printf("Qual o valor do Saque?\n");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo)
                {
                    saldo -= valor;
                    printf("Seu saldo atual é: R$ %.2f\n", saldo);
                }
                else
                {
                    printf("Valor inválido ou Saldo insuficiente.");
                }
                break;
            }
        case 4:
            printf("Obrigado por usar nosso sistema!");
             break;
        default:
            printf("Opção Inválida!");
            break;
        }

    }

    while (operador != 4);
return 0;
}

