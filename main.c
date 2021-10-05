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

void copyArr(int *arr1, int *arr2, int k) {
  int i = 0;
  for (int i = 0; i < k; i ++) *(arr2 + i) = *(arr1 + i);
}


int main() {
  int arr[5];
  int i = 0;
  for (i = 0; i < 5; i ++) arr[i] = i;

  printArr(arr, 5);
  printf("%lf\n", avgArr(arr, 5));

  int arrr[5];
  copyArr(arr, arrr, 5);
  for (i = 0; i < 5; i ++) printf("%d", arrr[i]);
  printf("\n");

  return 0;
}
