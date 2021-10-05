#include <stdio.h>

// 1
void printArr(int *arr, int k) {
  printf("[ ");
  int i = 0;
  for (i = 0; i < k; i ++) printf("%d ", *(arr + i));
  printf("]\n");
}

double avgArr(int *arr, int k) {
  int sum = 0;
  int i = 0;
  for (i = 0; i < k; i ++) sum += *(arr + i);
  return sum / k;
}


int main() {
  int arr[5];
  int i = 0;
  for (i = 0; i < 5; i ++) arr[i] = i;

  printArr(arr, 5);
  printf("%lf\n", avgArr(arr, 5));
}
