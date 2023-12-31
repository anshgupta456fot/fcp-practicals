#include <stdio.h>

void array_transpose(int, int (*)[]);
int main(void) {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the details of a 2D array\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the value of a%d%d at the place: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    array_transpose(n, arr);
    printf("Transposed array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void array_transpose(int n, int (*arr)[n]) {
    int temp[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = arr[j][i]; // Transpose the elements
        }
    }
    // Copy the transposed elements back to the original array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}