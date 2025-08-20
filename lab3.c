#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
       
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
            
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n = 1000; 
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 9000 + 1000;
    }

  
    clock_t start = clock();

  
    bubbleSort(arr, n);

    clock_t end = clock();

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;


    printf("Bubble sort of %d random 4-digit numbers took %f seconds.\n", n, time_spent);

    free(arr);
    return 0;
}
