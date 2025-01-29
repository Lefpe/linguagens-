#include <stdio.h>

// Função que calcula o quadrado de um número
int quadrado(int num) {
    int resultado = num * num; // Variável local
    return resultado;
}

// Função que calcula o dobro de um número sem modificar o original
int dobro_sem_modificar(int num) {
    return num * 2;
}

// Função que modifica o valor original usando ponteiro
void dobro_modificando(int *num) {
    *num *= 2;
}

// Funções sobrecarregadas para soma
int soma(int a, int b) {
    return a + b;
}

int soma3(int a, int b, int c) {
    return a + b + c;
}

double soma_double(double a, double b) {
    return a + b;
}

int main() {
    int num = 5;
    printf("Quadrado de %d: %d\n", num, quadrado(num));

    printf("Dobro de %d sem modificar: %d\n", num, dobro_sem_modificar(num));
    
    dobro_modificando(&num);
    printf("Dobro de %d modificando: %d\n", num, num);

    printf("Soma de 2 e 3: %d\n", soma(2, 3));
    printf("Soma de 1, 2 e 3: %d\n", soma3(1, 2, 3));
    printf("Soma de 1.5 e 2.5: %.2f\n", soma_double(1.5, 2.5));
    
    return 0;
}
