#include <stdio.h>

void swap(int *x, int *y)       //swapping algorithm
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int arr[], int n) // Selection sort Algorithm
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(&arr[i], &arr[min]);
    }
}

void print(int array[], int n)  //Function to iterate through array and print current value
{
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(void)
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

    printf("Unsorted array is: ");
    print(arr, n);

    sort(arr, n);

    printf("Sorted array is: ");
    print(arr, n);
}