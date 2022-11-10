#include <stdio.h>

void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
};

int main(void)
{
    int n, i;

    printf("No of Elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]); // Taking Input array.

    insertion_sort(a, n);

    printf("Sorted list is:");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);

    return 0;
}