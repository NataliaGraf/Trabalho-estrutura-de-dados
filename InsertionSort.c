#include <stdio.h>

// Função que implementa o Insertion Sort
void insertion_sort(int arr[], int n) {
    int i, j, key;
    
    // Começa do segundo elemento (índice 1)
    for (i = 1; i < n; i++) {
        // Elemento a ser inserido na posição correta
        key = arr[i];
        j = i - 1;
        
        // Move os elementos maiores que key uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // Insere o key na posição correta
        arr[j + 1] = key;
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
    
    printf("\nExemplo 1:\n");
    
    printf("Array original: ");
    print_array(arr, n);
    
    insertion_sort(arr, n);
    
    printf("Array ordenado: ");
    print_array(arr, n);
    
    // Exemplo adicional com array pequeno
    printf("\nExemplo 2:\n");
    int arr2[] = {5, 2, 8, 1, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Array original: ");
    print_array(arr2, n2);
    
    insertion_sort(arr2, n2);
    
    printf("Array ordenado: ");
    print_array(arr2, n2);
    
    return 0;
}