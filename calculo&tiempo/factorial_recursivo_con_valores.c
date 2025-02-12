#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_DIGITOS 5000  // El número máximo de dígitos que puede tener el resultado del factorial

void multiplicar_arreglo(int *resultado, int *tamano, int multiplicador) {
    int acarreo = 0;
    for (int i = 0; i < *tamano; i++) {
        int producto = resultado[i] * multiplicador + acarreo;
        resultado[i] = producto % 10;
        acarreo = producto / 10;
    }
    while (acarreo > 0) {
        resultado[*tamano] = acarreo % 10;
        acarreo /= 10;
        (*tamano)++;
    }
}

void factorial_recursivo_helper(int n, int *resultado, int *tamano, int idx) {
    if (n == 1) {
        return;
    }
    factorial_recursivo_helper(n - 1, resultado, tamano, idx);
    multiplicar_arreglo(resultado, tamano, n);
}

void factorial_recursivo(int n, int *resultado, int *tamano) {
    resultado[0] = 1;
    *tamano = 1;
    factorial_recursivo_helper(n, resultado, tamano, 0);
}

double get_time_in_seconds() {
    LARGE_INTEGER frequency, start, end;
    QueryPerformanceFrequency(&frequency);  // Get the frequency
    QueryPerformanceCounter(&start);  // Get start time
    return (double)start.QuadPart / frequency.QuadPart;  // Convert to seconds
}

void imprimir_resultado(int *resultado, int tamano) {
    for (int i = tamano - 1; i >= 0; i--) {
        printf("%d", resultado[i]);
    }
    printf("\n");
}

int main() {
    int valores_n[] = {5, 50, 500};
    int repeticiones = 1;
    
    int resultado_recursivo[MAX_DIGITOS];
    int tamano_recursivo;

    for (int j = 0; j < 3; j++) {
        int n = valores_n[j];
        double total_recursivo = 0.0;
        
        // Factorial recursivo
        double start_recursivo = get_time_in_seconds();
        factorial_recursivo(n, resultado_recursivo, &tamano_recursivo);
        double end_recursivo = get_time_in_seconds();
        total_recursivo = end_recursivo - start_recursivo;

        // Imprimir resultados
        printf("\nFactorial de %d:\n", n);
        printf("Recursivo:\n");
        imprimir_resultado(resultado_recursivo, tamano_recursivo);
        printf("Recursivo tiempo: %.8f segundos\n", total_recursivo);
    }
    getchar();
    return 0;
}
