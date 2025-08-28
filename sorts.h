#ifndef SORTS_H
#define SORTS_H

void vetorImprimir(int *vetor, int tamanho);
void vetorAleatorio(int *vetor, int tamanho);
void vetorCopia(int *vetOriginal, int *vetCopia, int tamanho);
void vetorCrescente(int *vetor, int tamanho);
void vetorDecrescente(int *vetor, int tamanho);
int maiorNumero(int *V, int N);

void selectionSort (int * V, int n);
double selectionTempo (int *vetor, int tamanho);
void insertionSort (int * V, int n);
double insertionTempo (int *vetor, int tamanho);
void bubbleSort (int * V, int n);
double bubbleTempo (int *vetor, int tamanho);
void merge(int * V, int in, int M, int f);
void mergeSort(int *V, int i, int f);
double mergeTempo (int *vetor, int tamanho);
void heapify (int *V, int N, int i);
void buildHeap (int *V, int N);
void heapSort (int *V,  int N);
double heapTempo (int *vetor, int tamanho);
int partition (int* v,int p, int r);
void quickSort(int* V, int p, int r);
double quickTempo (int *vetor, int tamanho);
void countingSort (int *V, int N, int k);
double countingTempo (int *vetor, int tamanho);

void countingSortRadix(int *T, int N, int k, int *V);
double radixTempo (int *vetor, int tamanho);

#include "sorts.tpp"
#endif // sorts.h