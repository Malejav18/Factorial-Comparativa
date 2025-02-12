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

void factorial_iterativo(int n, int *resultado, int *tamano) {
    resultado[0] = 1;  // Inicializamos el factorial a 1
    *tamano = 1;  // El tamaño del número es 1 (un dígito)
    
    for (int i = 2; i <= n; i++) {
        multiplicar_arreglo(resultado, tamano, i);
    }
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
    
    int resultado_iterativo[MAX_DIGITOS];
    int tamano_iterativo;

    for (int j = 0; j < 3; j++) {
        int n = valores_n[j];
        double total_iterativo = 0.0;
        
        // Factorial iterativo
        double start_iterativo = get_time_in_seconds();
        factorial_iterativo(n, resultado_iterativo, &tamano_iterativo);
        double end_iterativo = get_time_in_seconds();
        total_iterativo = end_iterativo - start_iterativo;

        // Imprimir resultados
        printf("\nFactorial de %d:\n", n);
        printf("Iterativo:\n");
        imprimir_resultado(resultado_iterativo, tamano_iterativo);
        printf("Iterativo tiempo: %.8f segundos\n", total_iterativo);
    }
    getchar();
    return 0;
}

