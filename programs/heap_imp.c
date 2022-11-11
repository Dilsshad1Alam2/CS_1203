#include <stdio.h>

void swap(int *x, int *y)   //Swapping Algorithm
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void heapify(int a[], int n, int root)
{
  int largest = root;
  int left_child = 2 * root + 1;
  int right_child = 2 * root + 2;

  if (left_child < n && a[left_child] > a[largest]) // If left_child child is greater than root
    largest = left_child;

  if (right_child < n && a[right_child] > a[largest]) // If right_child child is greater than largest
    largest = right_child;

  if (largest != root)
  {
    swap(&a[root], &a[largest]);
    heapify(a, n, largest);
  }
}

void heapSort(int a[], int n)
{
  for (int i = n / 2 - 1; i >= 0; i--) // Rearrange Array
    heapify(a, n, i);

  for (int i = n - 1; i >= 0; i--) // Take one element at a time from heap
  {
    swap(&a[0], &a[i]); // swapping current root to end
    heapify(a, i, 0);
  }
}

void print(int a[], int n)
{
  for (int i = 0; i < n; ++i)
    printf("%d ", a[i]);
  printf("\n\n");
}

// Driver code
int main()
{
  int a[] = {16, 21, 3, 49, 18};
  int n = sizeof(a) / sizeof(a[0]);

  printf("Inserted array: \n");
  print(a, n);
  heapSort(a, n);

  printf("The sorted array is: \n");
  print(a, n);
}
