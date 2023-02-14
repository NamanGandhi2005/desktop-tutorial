#include <stdio.h>

void reverseArray(int *array, int size) {
  int *start = array;
  int *end = array + size - 1;
  while (start < end) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main() {
  int size, i;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int array[size];
  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
  reverseArray(array, size);
  printf("The reversed array is: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  return 0;
}
