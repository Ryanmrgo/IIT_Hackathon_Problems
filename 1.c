#include <stdio.h>
#include <stdlib.h>

// Function to check if a subarray with sum k exists
int checkSubarraySum(int *arr, int n, int k) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n, k;
    
    while (scanf("%d", &n) != EOF) {
        int *arr = (int*)malloc(n * sizeof(int));  // Dynamic memory allocation
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &k);

        // Check if a subarray with sum k exists
        if (checkSubarraySum(arr, n, k)) {
            printf("1\n");
        } else {
            printf("0\n");
        }

        free(arr);  // Freeing the allocated memory
    }
    
    return 0;
}
