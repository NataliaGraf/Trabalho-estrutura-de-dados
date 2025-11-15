#include <stdio.h>

// Função para trocar dois elementos
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Função que implementa o Bubble Sort
void bubble_sort(int arr[], int n) {
	int i, j;

	// Percorre todo o array
	for (i = 0; i < n - 1; i++) {
		// Os últimos i elementos já estão na posição correta
		for (j = 0; j < n - i - 1; j++) {
			// Troca se o elemento atual for maior que o próximo
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

// versão otimizada do Bubble Sort
// Para se o array já estiver ordenado
void bubble_sort_optimized(int arr[], int n) {
	int i, j, swapped;

	for (i = 0; i < n - 1; i++) {
		swapped = 0; // Flag para verificar se houve troca

		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
		}

		// Se não houve troca, o array já está ordenado
		if (swapped == 0)
			break;
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

	bubble_sort(arr, n);

	printf("Array ordenado (Bubble Sort): ");
	print_array(arr, n);

	// Testando a versão otimizada
	printf("\nExemplo 2 (versão otimizada):\n");
	int arr2[] = {5, 2, 8, 1, 9};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	printf("Array original: ");
	print_array(arr2, n2);

	bubble_sort_optimized(arr2, n2);

	printf("Array ordenado: ");
	print_array(arr2, n2);

	// Testando com array já ordenado
	printf("\nExemplo 3 (array já ordenado - otimizado):\n");
	int arr3[] = {1, 2, 3, 4, 5};
	int n3 = sizeof(arr3) / sizeof(arr3[0]);

	printf("Array original: ");
	print_array(arr3, n3);

	bubble_sort_optimized(arr3, n3);

	printf("Array ordenado: ");
	print_array(arr3, n3);

	return 0;
}