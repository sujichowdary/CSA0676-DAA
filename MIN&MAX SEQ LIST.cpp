#include <stdio.h>

void printMinMaxSequence(int arr[], int size)
{
    if (size <= 0) {
        printf("Empty list\n");
        return;
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
}

int main()
{
    int size;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the list:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printMinMaxSequence(arr, size);

    return 0;
}

