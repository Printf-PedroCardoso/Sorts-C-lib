#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorts.h"

#define qntdVet1k 1000
#define qntdVet10k 10000
#define qntdVet100k 100000

int main()
{
	int vet1k[qntdVet1k]; //Inicializa Vetor de mill elementos
	int vet10k[qntdVet10k]; //Inicializa Vetor de 10 mil elementos
	int vet100k[qntdVet100k]; //Inicializa Vetor de 100 mil elementos

	int tempVet1k[qntdVet1k]; //Inicializa Vetor temporario de mil elementos
	int tempVet10k[qntdVet10k]; //Inicializa Vetor temporario de 10 mil elementos
	int tempVet100k[qntdVet100k]; //Inicializa Vetor temporario de 100 mil elementos

	double tempo_execucao;
	srand(time(NULL)); // Inicializa a semente do gerador de nC:meros aleatorios

	// Preenche Vetores aleatoriamente
	vetorAleatorio(vet1k,qntdVet1k);
	vetorAleatorio(vet10k,qntdVet10k);
	vetorAleatorio(vet100k,qntdVet100k);


	// Selection Sort

	//Melhor caso (ordenado/crescente)

	printf("\nSelection Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = selectionTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = selectionTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = selectionTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nSelection Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = selectionTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = selectionTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = selectionTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nSelection Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = selectionTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = selectionTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = selectionTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	// Insertion Sort

	//Melhor caso (ordenado/crescente)

	printf("\nInsertion Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = insertionTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = insertionTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = insertionTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nInsertion Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = insertionTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = insertionTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = insertionTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nInsertion Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = insertionTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = insertionTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = insertionTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	// Bubble Sort

	//Melhor caso (ordenado/crescente)

	printf("\nBubble Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = bubbleTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = bubbleTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = bubbleTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nBubble Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = bubbleTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = bubbleTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = bubbleTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nBubble Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = bubbleTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = bubbleTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = bubbleTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	//Merge Sort

	//Melhor caso (ordenado/crescente)

	printf("\nMerge Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = mergeTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = mergeTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = mergeTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nMerge Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = mergeTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = mergeTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = mergeTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nMerge Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = mergeTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = mergeTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = mergeTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	//Heap Sort

	//Melhor caso (ordenado/crescente)

	printf("\nHeap Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = heapTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = heapTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = heapTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nHeap Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = heapTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = heapTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = heapTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nHeap Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = heapTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = heapTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = heapTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	//Quick Sort

	//Melhor caso (ordenado/crescente)

	printf("\nQuick Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = quickTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = quickTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = quickTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nQuick Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = quickTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = quickTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = quickTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nQuick Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = quickTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = quickTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = quickTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	//Counting Sort

	//Melhor caso (ordenado/crescente)

	printf("\nCounting Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = countingTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = countingTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = countingTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nCounting Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = countingTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = countingTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = countingTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nCounting Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = countingTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = countingTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = countingTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	//Radix Sort

	//Melhor caso (ordenado/crescente)

	printf("\nRadix Sort - Melhor caso - ordenado crescente\n");

	vetorCrescente(tempVet1k,qntdVet1k);
	vetorCrescente(tempVet10k,qntdVet10k);
	vetorCrescente(tempVet100k,qntdVet100k);

	tempo_execucao = radixTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = radixTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = radixTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Medio caso (desordenado/aleatorio)

	printf("\nRadix Sort - Medio caso - desordenado aleatorio\n");

	vetorCopia(vet1k,tempVet1k,qntdVet1k);
	vetorCopia(vet10k,tempVet10k,qntdVet10k);
	vetorCopia(vet100k,tempVet100k,qntdVet100k);

	tempo_execucao = radixTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = radixTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = radixTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);

	//Pior caso (ordenado/decrescente)

	printf("\nRadix Sort - Pior caso - ordenado decrescente\n");

	vetorDecrescente(vet1k,qntdVet1k);
	vetorDecrescente(vet10k,qntdVet10k);
	vetorDecrescente(vet100k,qntdVet100k);

	tempo_execucao = radixTempo(tempVet1k,qntdVet1k);
	printf("Tempo de execucao Vetor1k: %f\n", tempo_execucao);
	tempo_execucao = radixTempo(tempVet10k,qntdVet10k);
	printf("Tempo de execucao Vetor10k: %f\n", tempo_execucao);
	tempo_execucao = radixTempo(tempVet100k,qntdVet100k);
	printf("Tempo de execucao Vetor100k: %f\n", tempo_execucao);


	return 0;
}