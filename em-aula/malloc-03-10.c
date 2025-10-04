#include <stdio.h>    // Biblioteca padrão para entrada e saída (printf, getchar, etc.)
#include <stdlib.h>   // Biblioteca padrão para alocação dinâmica (malloc, free, etc.)
#include <string.h>   // Biblioteca para manipulação de strings (não usada aqui, mas comum em exemplos)
#include <unistd.h>   // Biblioteca POSIX (não usada neste código, poderia ser removida)

// Função principal: ponto de entrada do programa
int main()
{
    // Define o valor de 4 GB em bytes.
    // 4ULL = número inteiro "unsigned long long" (garante suporte a 64 bits, evitando overflow)
    // Multiplicações convertem GB -> MB -> KB -> Bytes
    const size_t QUATRO_GB = 4ULL * 1024 * 1024 * 1024;

    // Mensagem para o usuário
    printf("Alocando 4 GB de RAM...\n");

    // malloc tenta reservar 4 GB de memória contínua
    // Retorna um ponteiro para o bloco alocado ou NULL se não conseguir
    char *grande_buffer = (char*)malloc(QUATRO_GB);

    // Verifica se a alocação falhou
    if(grande_buffer == NULL)
    {
        printf("ERRO: Nao foi possivel alocar 4 GB!\n");
        return 1; // Encerra o programa com código de erro
    }

    // Explica o próximo passo para o usuário
    printf("Preenchendo TODA a memoria para forcar alocacao fisica...\n");
    printf("Isso vai demorar alguns segundos...\n");

    // Loop para escrever em toda a memória alocada
    // Avança de 4096 em 4096 bytes (tamanho típico de uma página de memória)
    // Isso garante que cada página seja fisicamente carregada na RAM
    for(size_t i = 0; i < QUATRO_GB; i += 4096)
    {
        // Escreve um valor no buffer para evitar que o compilador otimize o código
        grande_buffer[i] = (char)(i % 256);

        // Mostra progresso a cada 100 MB preenchidos
        if(i % (100 * 1024 * 1024) == 0)
        {
            printf("Preenchidos: %.2f GB\n", (double)i / (1024*1024*1024));
        }
    }

    // Mensagens finais antes de pausar
    printf("COMPLETO: 4 GB realmente alocados na RAM fisica!\n");
    printf("Verifique agora no gerenciador de tarefas...\n");
    printf("Pressione ENTER para liberar...");

    // Pausa até que o usuário pressione ENTER
    getchar();

    // Libera a memória previamente alocada
    free(grande_buffer);
    printf("Memoria liberada!\n");

    // Finaliza o programa com sucesso
    return 0;
}