/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-09-08
Descrição: Criar um sistema em linguagem C para gerenciamento de numero de fogo em pneus de um caminhão
*/

/* descrição detalhada:
01 – Criar uma tela de login e senha para poder entrar no sistema. Login e senha devem ser
fixos: Exemplo: uniavan e senha 123
02 - Solicitar o tipo de EIXO que pode ser: Truck, Toco e Carreta 03 eixos.
03 - Vincular os pneus nos eixos. O pneu é sempre um número. Esse número deve ser único.
Ou seja, não pode ter números repetidos. Esse número de pneus é o que chamamos número
de fogo (marcação de fogo usado nos pneus).
04 - Permitir realizar o rodizio entre os pneus nos eixos que pode ser: Truck, Toco e Carreta
03 eixos. Exemplo: No pneu Dianteiro esquerdo tem o pneu de número 47 e o sistema deve
permitir trocar pelo pneu 72. Feito o processo, o sistema deve permitir listar a nova
disposição dos pneus.
05 – Criar uma tela de legenda
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// login e senha de acesso ao sistema
#define LOGIN "uniavan"
#define SENHA "123"

int main()
{
    system("cls || clear");
    setlocale(LC_ALL, "Portuguese");

    // sistema de login
    char login[20], senha[20];
    int tentativas = 1;

    do
    {
        printf("Digite o login: ");
        scanf("%s", login);
        printf("Digite a senha: ");
        scanf("%s", senha);
        
        if (strcmp(login, LOGIN) != 0 || strcmp(senha, SENHA) != 0)
        {
            system("cls || clear");
            printf("Login ou senha incorretos! Tente novamente.(%d)\n", tentativas++);
        }
    } while (strcmp(login, LOGIN) != 0 || strcmp(senha, SENHA) != 0); // verifica se login e senha estão corretos

    system("cls || clear");
    printf("Sistema acessado.\n");



    return 0;
}
