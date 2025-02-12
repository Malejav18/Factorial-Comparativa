#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned long long int factorial_recursivo(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial_recursivo(n - 1);
}

double get_time_in_seconds() {
    LARGE_INTEGER frequency, start, end;
    QueryPerformanceFrequency(&frequency);  // Get the frequency
    QueryPerformanceCounter(&start);  // Get start time
    return (double)start.QuadPart / frequency.QuadPart;  // Convert to seconds
}

int main() {
    int valores_n[] = {5, 50, 500};
    int repeticiones = 10;

    for (int j = 0; j < 3; j++) {
        int n = valores_n[j];
        double total_recursivo = 0.0;
        unsigned long long int valor_r;
        
        for (int i = 0; i < repeticiones; i++) {
            // Factorial recursivo
            double start_recursivo = get_time_in_seconds();
            valor_r = factorial_recursivo(n);
            double end_recursivo = get_time_in_seconds();
            total_recursivo += (end_recursivo - start_recursivo);
        }
        
        printf("\nFactorial de %d (Recursivo):\n", n);
        printf("Recursivo promedio: %.8f segundos\n", total_recursivo / repeticiones);
    }
    getchar();
    return 0;
}
