
//Copyright Pedro Augusto Resende Medeiros - Sistemas de Informação - 1B - UNIPAM/Patos de Minas - MG. 

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct Carro {
    char nome[100];
    char cor[100];
    char marca[100];
    char ano[100];
    char preco[100];
};

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    int opcao, opcao2, opcao3, quant;
    struct Carro carros[100];
    char nome[100], modelo_carro;
    int telefone, situacao_carros;
  
    printf("**************************************************\n");
    printf("*       Bem-vindo à Stander Motors Automóveis - SMA!       *\n");
    printf("**************************************************\n\n");

    system("color 1F");
    printf("Nome do Atendente:\n");
    fflush(stdin);
    scanf("%[^\n]s", nome);
    printf("Senha da Loja SMA:\n");
    scanf("%d", &opcao3);

    switch (opcao3) {
        case 147235689:
            while (opcao != 4) {
                system("cls");
                printf("Bem-vindo à loja Stander Motors, Atendente %s\n", nome);
                printf("+------------------------+\n");
                printf("|                        |\n");
                printf("|        SSS   M   M  AAAAA   |\n");
                printf("|       S      MM MM   A    A|\n");
                printf("|        SS    M M M   AAAAAAA  |\n");
                printf("|          S   M   M   A     A  |\n");
                printf("|       SSS    M   M  A       A   |\n");
                printf("|                                 |\n");
                printf("+---------------------------------+\n");
                printf("Seja bem-vindo ao nosso menu principal:\n");
                printf("Selecione uma opção abaixo:\n");
                printf("1. Cadastro no nosso sistema\n");
                printf("2. Lançamentos, Vendas e Movimentação de carros\n");
                printf("3. Relatório dos veículos e situação completa\n");
                printf("4. Sair\n");
                printf("---------------------------------------------\n");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        system("cls");
                        printf("Quantos cadastros você deseja realizar?\n");
                        scanf("%d", &quant);

                        for (int i = 0; i < quant; i++) {
                            system("cls");
                            printf("Iniciando Cadastro %d\n", i + 1);
                            printf("\n\n\t\t ------------------- \n\n");
                            printf("Nome do carro:\n");
                            fflush(stdin);
                            scanf(" %[^\n]s", carros[i].nome);
                            printf("Cor do carro:\n");
                            fflush(stdin);
                            scanf(" %[^\n]s", carros[i].cor);
                            printf("Marca do carro:\n");
                            fflush(stdin);
                            scanf(" %[^\n]s", carros[i].marca);
                            printf("Ano do carro:\n");
                            fflush(stdin);
                            scanf(" %[^\n]s", carros[i].ano);
                            printf("Preço do veículo:\n");
                            fflush(stdin);
                            scanf(" %[^\n]s", carros[i].preco);
                            system("pause");
                            system("cls");
                        }
                        break;

                        case 2:
                        system("cls");
                        printf("Lançamentos, Vendas e Movimentação de carros:\n");

                        for (int i = 0; i < quant; i++) {
                         system("cls");
                        printf("Exibindo Cadastro %d\n", i + 1);
                        printf("\n\n\t\t ------------------- \n\n");
                         printf("Nome do carro: %s\n", carros[i].nome);
                        printf("Cor do carro: %s\n", carros[i].cor);
                        printf("Marca do carro: %s\n", carros[i].marca);
                        printf("Ano do carro: %s\n", carros[i].ano);
                        printf("Preço do veículo: %s\n", carros[i].preco);
                        system("pause");
                            }
                        break;

                    case 3:
                        system("cls");
                        printf("Relatório dos veículos e situação completa:\n");

                        for (int i = 0; i < quant; i++) {
                        system("cls");
                        printf("Relatório do Veículo %d\n", i + 1);
                        printf("\n\n\t\t ------------------- \n\n");
                        printf("Nome do carro: %s\n", carros[i].nome);
                        printf("Cor do carro: %s\n", carros[i].cor);
                         printf("Marca do carro: %s\n", carros[i].marca);
                        printf("Ano do carro: %s\n", carros[i].ano);
                        printf("Preço do veículo: %s\n", carros[i].preco);
                        printf("Situação atual eh: ");

                        if (i < 4)
                        printf("O veículo %d ainda está disponível.\n", i + 1);
                        else if (i < 8)
                        printf("O veículo %d não está disponível, pois se encontra alugado por algum cliente.\n", i + 1);
                        else
                        printf("O veículo %d foi vendido para outro comprador.\n", i + 1);

                        system("pause");
                        }
                        break;

                    case 4:
                        printf("\nSaindo do programa... Obrigado por utilizar nosso sistema.\n");
                        return 0;

                    default:
                        printf("\nOpção inválida. Tente novamente.\n");
                        break;
                }

                printf("\nPressione ENTER ou qualquer tecla para continuar...\n");
                system("pause");
            }
            break;

        default:
            printf("\nSenha inválida. Encerrando o programa.\n");
            break;
    }

    system("pause");
    return 0;
}
