#include <stdio.h>

// Definindo uma variável global
int variavel_global = 10;

void funcao_com_escopo_local() {
    // Definindo uma variável local com o mesmo nome da global
    int variavel_global = 20;

    // Exibindo os valores antes da atribuição local
    printf("Dentro da função (antes da modificação): global = %d, local = %d\n", ::variavel_global, variavel_global);

    // Modificando a variável local
    variavel_global = 30;

    // Exibindo os valores após a atribuição local
    printf("Dentro da função (depois da modificação): global = %d, local = %d\n", ::variavel_global, variavel_global);
}

void funcao_aninhada() {
    // Variável no escopo externo
    int variavel_externa = 50;

    // Função interna modificando a variável externa
    void funcao_interna() {
        // Modificando a variável externa (não temos 'nonlocal' em C, então a modificação é direta)
        variavel_externa = 100;
    }

    // Exibindo valores antes da modificação
    printf("Antes da modificação (variavel_externa): %d\n", variavel_externa);
    
    // Chamando a função interna para modificar a variável externa
    funcao_interna();
    
    // Exibindo valores depois da modificação
    printf("Depois da modificação (variavel_externa): %d\n", variavel_externa);
}

void funcao_com_parametro(int parametro) {
    // Variável local com o mesmo nome do parâmetro
    int parametro = 500;  // Re-declaração do parâmetro

    printf("Dentro da função (antes da re-declaração): parametro = %d\n", parametro);
}

int main() {
    printf("Escopo e Vinculação de Nomes:\n");

    // Exibindo a variável global antes e depois da chamada da função
    printf("Antes da chamada da função: variavel_global = %d\n", variavel_global);
    funcao_com_escopo_local();
    printf("Depois da chamada da função: variavel_global = %d\n", variavel_global);

    // Função aninhada
    funcao_aninhada();

    // Função com parâmetro
    int parametro = 100;
    funcao_com_parametro(parametro);

    return 0;
}
