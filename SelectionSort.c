#include <stdio.h>

// Função para trocar dois elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função que implementa o Selection Sort
void selection_sort(int arr[], int n) {
    int i, j, min_idx;
    
    // Percorre toda a lista
    for (i = 0; i < n - 1; i++) {
        // Assume que o primeiro elemento não ordenado é o menor
        min_idx = i;
        
        // Encontra o menor elemento na parte não ordenada
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Troca o menor elemento encontrado com o primeiro elemento não ordenado
        swap(&arr[min_idx], &arr[i]);
    }
}

// Função para imprimir o array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int arr[] = {64, 25, 12, 22, 11, 90, 45, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array original: ");
    print_array(arr, n);
    
    selection_sort(arr, n);
    
    printf("Array ordenado: ");
    print_array(arr, n);
    
    return 0;
}