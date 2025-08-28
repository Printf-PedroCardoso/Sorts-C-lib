# Sorts-C-Lib

**Library of sorting algorithms implemented in pure C**

---

## 📌 Overview

This project provides a collection of classic sorting algorithms written in C.  
It’s designed to be **minimalistic**, **educational**, and **easy to integrate** into C projects—great for studying algorithm behaviors or as a foundation for more advanced developments.

---

## 📚 Included Algorithms

- Selection Sort  
- Insertion Sort  
- Bubble Sort  
- Merge Sort  
- Heap Sort  
- Quick Sort  
- Counting Sort  
- Radix Sort  

---

## ✨ Features

- Written entirely in **pure C**  
- Clean and minimal API  
- Ideal for **learning, testing, and experimentation**  
- Easily extendable with additional sorting techniques  

---

## 🚀 Usage Example

Here’s a simple way to use the library from your `main.c`:

```c
#include <stdio.h>
#include "sorts.h"

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sort:\n");
    print_array(arr, n);

    quick_sort(arr, 0, n - 1);  // Example: choose your preferred algorithm

    printf("After sort:\n");
    print_array(arr, n);

    return 0;
}
