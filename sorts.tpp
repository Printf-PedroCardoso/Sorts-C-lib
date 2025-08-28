#include "sorts.h"

#define maiorNumeroAleatorio 99

void vetorImprimir(int *vetor, int tamanho)
{
	for (int i=0 ; i<tamanho ; i++)
	{
		printf("%d - ",vetor[i]);
	}
	printf("\n");
}

void vetorAleatorio(int *vetor, int tamanho)
{
	for (int i = 0; i < tamanho; i++) {
		vetor[i] = rand() % maiorNumeroAleatorio+1; // NC:meros aleatorios entre 0 e 99
	}
}

void vetorCopia(int *vetOriginal, int *vetCopia, int tamanho)
{
	for (int i=0 ; i < tamanho ; i++)
	{
		vetCopia[i] = vetOriginal[i];
	}
}

void vetorCrescente(int *vetor, int tamanho)
{
	for (int i=0; i < tamanho ; i++)
	{
		vetor[i] = i;
	}
}

void vetorDecrescente(int *vetor, int tamanho)
{
	for (int i=0; i < tamanho ; i++)
	{
		vetor[i] = (tamanho-1) - i;
	}
}

int maiorNumero(int *V, int N)
{
	int maior = V[0];
	for (int i = 1; i < N; i++)
	{
		if (V[i] > maior)
		{
			maior = V[i];
		}
	}
	return maior;
}

void selectionSort (int * V, int n)
{
	//Algoritmo estavel - Melhor caso O(n^2) / Caso Medio O(n^2) / Pior caso O(n^2)
	int menor,aux;

	for (int i=0 ; i<n-1 ; i++)
	{

		menor = i;

		for (int j = i+1 ; j<n ; j++)
		{
			if (V[j] < V[menor])
			{
				menor = j;
			}
		}
		aux = V[i];
		V[i] = V[menor];
		V[menor] = aux;
	}
}

double selectionTempo (int *vetor, int tamanho)
{
	int inicio = clock();
	selectionSort(vetor, tamanho);
	int fim = clock();

	double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	return tempo;
}

void insertionSort (int * V, int n)
{
	//Algoritmo estavel - Melhor caso O(n) / Caso Medio O(n^2) / Pior caso O(n^2)
	int i,j;
	for  (i = 1 ; i < n ; i++)
	{
		int aux = V[i];
		for (j = i-1 ; j >= 0 && aux < V[j]; j--)
		{
			V[j+1] = V[j];
		}
		V[j+1] = aux;
	}
}
double insertionTempo (int *vetor, int tamanho)
{
	int inicio = clock();
	insertionSort(vetor, tamanho);
	int fim = clock();

	double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	return tempo;
}

void bubbleSort (int * V, int n)
{
	//Algoritmo estavel - Melhor caso O(n) / Caso MC)dio O(n^2) / Pior caso O(n^2)
	int i,j,aux;

	for  (i = 0 ; i < n-1 ; i++)
	{
		for (j = 0 ; j < n-1-i ; j++)
		{
			if (V[j] > V[j+1])
			{
				aux = V[j];
				V[j] = V[j+1];
				V[j+1] = aux;
			}
		}
	}
}

double bubbleTempo (int *vetor, int tamanho)
{
	int inicio = clock();
	bubbleSort(vetor, tamanho);
	int fim = clock();

	double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	return tempo;
}

void merge(int * V, int in, int M, int f)
{
	//Algoritmo estavel - Melhor caso O(n log(n)) / Caso MC)dio O(n log(n)) / Pior caso O(n log(n) / Usa 2x mais espaC'o)
	int A[f-in+1];
	int i, j, k;

	for (i = in, j = M+1, k = 0 ; i <= M && j <= f ; k++)
	{
		if (V[i] <= V[j])
		{
			A[k] = V[i];
			i++;
		}
		else
		{
			A[k] = V[j];
			j++;
		}

	}

	for ( ; j <= f ; j++, k++)
	{
		A[k] = V[j];
	}

	for ( ; i <= M ; i++, k++)
	{
		A[k]=V[i];
	}
	for ( k = 0, i = in ; i <= f ; i++, k++)
	{
		V[i] = A[k];
	}
}

void mergeSort(int *V, int i, int f)
{
	if (i<f)
	{
		int M = ( i + f) / 2;
		mergeSort(V, i, M);
		mergeSort(V, M+1, f);
		merge(V,i,M,f);
	}
}

double mergeTempo (int *vetor, int tamanho)
{
	int inicio = clock();
	mergeSort(vetor, 0, tamanho-1);
	int fim = clock();

	double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	return tempo;
}

void heapify (int *V, int N, int i)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int aux, maior;

	if (l < N && V[l] > V[i])
	{
		maior = l;
	}
	else
	{
		maior = i;
	}
	if (r < N && V[r] > V[maior])
	{
		maior = r;
	}

	if (maior != i)
	{
		aux = V[maior];
		V[maior] = V[i];
		V[i] = aux;
		heapify(V,N,maior);
	}
}

void buildHeap (int *V, int N)
{
	for (int i = (N-2) / 2 ; i >= 0 ; i--)
	{
		heapify(V,N,i);
	}
}

void heapSort (int *V,  int N)
{
	int aux;
	buildHeap(V, N);

	while (N)
	{
		aux = V[N-1];
		V[N-1] = V[0];
		V[0] = aux;
		N--;
		heapify(V, N, 0);
	}
}

double heapTempo (int *vetor, int tamanho)
{
	int inicio = clock();
	heapSort(vetor, tamanho);
	int fim = clock();

	double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	return tempo;
}

int partition (int* v,int p, int r)
{
	int x = v[p]; // can be a function
	int i = p - 1;
	int j = r + 1;
	int aux;

	while(1)
	{
		do
		{
			j--;
		} while (v[j] > x);

		do
		{
			i++;
		} while (v[i] < x);

		if (i < j)
		{
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
		}
		else
		{
			return j;
		}
	}
}

void quickSort(int* V, int p, int r)
{
	if ( p < r )
	{
		int q = partition(V, p, r);
		quickSort(V,p,q);
		quickSort(V,q+1,r);
	}
}

double quickTempo (int *vetor, int tamanho)
{
	int inicio = clock();
	quickSort(vetor, 0, tamanho-1);
	int fim = clock();

	double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	return tempo;
}

void countingSort (int *V, int N, int k)
{
	//Algoritmo estavel - Melhor caso O(n+k) / Caso MC)dio O(n+k) / Pior caso O(n+k) - Usa 3x mais espaC'o)
	// V = vetor - N = tamanho - k : maior numero
	int i;
	int C[k+1];
	int A[N];

	//Inicializa Vetor C zerando todas as posiC'C5es
	for (i = 0 ; i < k+1 ; i++)
	{
		C[i] = 0;
	}

	//Faz a contagem
	for (i = 0 ; i < N ; i++)
	{
		C[V[i]]++;
	}

	//Faz o acumulo
	for (i = 1 ; i <= k ; i++)
	{
		C[i] = C[i-1] + C[i];
	}

	//Ordena no vetor A
	for (i = N-1 ; i >= 0 ; i--)
	{
		A[C[--V[i]]] = V[i];
	}

	//CC3pia em vetor original
	for (i = 0 ; i < N ; i++)
	{
		V[i] = A[i];
	}
}

double countingTempo (int *vetor, int tamanho)
{
	int maior = maiorNumero(vetor, tamanho);

	int inicio = clock();
	countingSort(vetor, tamanho, maior);
	int fim = clock();

	double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
	return tempo;
}

void countingSortRadix(int *T, int N, int k, int *V) {
	int i;
	int C[k + 1];
	int A[N];

	// Inicializa Vetor C zerando todas as posiC'C5es
	for (i = 0; i <= k; i++) {
		C[i] = 0;
	}

	// Faz a contagem
	for (i = 0; i < N; i++) {
		C[T[i]]++;
	}

	// Faz o acC:mulo
	for (i = 1; i <= k; i++) {
		C[i] += C[i - 1];
	}

	// Ordena no vetor A
	for (i = N - 1; i >= 0; i--) {
		A[--C[T[i]]] = V[i];
	}

	// CC3pia no vetor original
	for (i = 0; i < N; i++) {
		V[i] = A[i];
	}
}

void radixSort(int *V, int N, int maior)
{

	for (int exp = 1; maior / exp > 0; exp *= 10)
	{
		int T[N];
		for (int i = 0; i < N; i++)
		{
			T[i] = (V[i] / exp) % 10;
		}
		countingSortRadix(T, N, 9, V);
	}
}

double radixTempo (int *vetor, int tamanho) 
{
    int maior = maiorNumero(vetor, tamanho);
    
    int inicio = clock();
    radixSort(vetor, tamanho, maior);
    int fim = clock();
    
    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    return tempo;
}