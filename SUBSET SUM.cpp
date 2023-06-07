#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

void displaySubset(int subset[], int size)
{
    printf("Subset: ");
    int sum = 0;
    for (int i = 0; i < size; i++) {
        printf("%d ", subset[i]);
        sum += subset[i];
    }
    printf("(Sum: %d)\n", sum);
}

void generateSubsetsUtil(int set[], int subset[], int n, int sum, int currentSum, int index, int size)
{
    if (currentSum == sum) {
        displaySubset(subset, size);
        return;
    }

    if (index == n) {
        return;
    }

    // Include the current element in the subset
    subset[size] = set[index];
    generateSubsetsUtil(set, subset, n, sum, currentSum + set[index], index + 1, size + 1);

    // Exclude the current element from the subset
    generateSubsetsUtil(set, subset, n, sum, currentSum, index + 1, size);
}

void generateSubsets(int set[], int n, int sum)
{
    int subset[MAX_SIZE];
    generateSubsetsUtil(set, subset, n, sum, 0, 0, 0);
}

int main()
{
    int set[] = {1, 2, 3, 4, 5};
    int n = sizeof(set) / sizeof(set[0]);
    int sum = 7;

    generateSubsets(set, n, sum);

    return 0;
}

