#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int bubble(int a[], int N) {
    int swap_count = 0;
    bool flag = true;
    for (int i = 0; i < N; ++i) {
        flag = false;
        for (int j = N - 1; j >= i + 1; j--) {
            if (a[j - 1] > a[j]) {
                swap(&a[j - 1], &a[j]);
                flag = true;
                swap_count += 1;
            }
        }
        if (!flag) {
            break;
        }
    }
    return swap_count;
}

void trace(int a[], int N) {
    for (int i = 0 ; i < N; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int N;
    int swap_count;
    scanf("%d", &N);
    int* A = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    trace(A, N);
    swap_count = bubble(A, N);
    trace(A, N);
    printf("%d\n", swap_count);
    free(A);
    return 0;
}