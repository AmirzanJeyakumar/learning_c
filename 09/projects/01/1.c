#include <stdio.h>

#define N 10

void selection_sort(int arr[], int n) {

    if (n<=1) {
        return;
    }

    int largest = arr[0];
    int largest_index = 0;
    int last_index = n-1;

    for (int i=1;i<n;i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            largest_index = i;
        }
    }

    // swap largest number and last number
    int *a = &arr[largest_index];
    int *b = &arr[last_index];

    int c = *a;
    *a = *b;
    *b = c;

    selection_sort(arr,n-1);
}

int main(void) {
    int arr[N];

    printf("Enter %d numbers \n",N);
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr,N);

    printf("Sorted array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}