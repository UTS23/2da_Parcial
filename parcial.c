#include <stdio.h>

void swap(int *c, int *b) {
  int temp = *c;
  *c = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {


      if (array[i] < array[min_idx])
        min_idx = i;
    }

    
    swap(&array[min_idx], &array[step]);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// 
int main() {
  int data[] = {10,20,34,22,16,18,1,25,23,100,41,18,27,32,70,2,0,-2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("ordenamiemto:\n");
  printArray(data, size);
}

