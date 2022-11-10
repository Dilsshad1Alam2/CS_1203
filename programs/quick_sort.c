#include <stdio.h>

void swap(int *x, int *y) // swapping algorithm
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int partition(int arr[], int low, int high)
{
  int pivot = arr[high]; // right most element as pivot
  int i = (low - 1);

  for (int j = low; j < high; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(&arr[i], &arr[j]); // swap element at i with element at j
    }
  }
  swap(&arr[i + 1], &arr[high]); // swapping pivot with greater element

  return (i + 1); // return the point of partition
}

void quick_sort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(arr, low, high);
    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high);
  }
}

void print(int arr[], int n) // Function to iterate through array and print current value
{
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main()
{
  int n;
  printf("No of Elements: ");
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) // Reading the elements in array
  {
    printf("Insert Element: ");
    scanf("%d", &arr[i]);
  }

  printf("Unsorted arr is: ");
  print(arr, n);

  quick_sort(arr, 0, n - 1);    //Calling the algorithm

  printf("Sorted arr is: ");
  print(arr, n);
}