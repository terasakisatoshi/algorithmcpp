#include <stdio.h>
#include <stdlib.h>

void trace(int a[], int N){
    for (int i =0 ; i<N; i++){
        if (i>0){
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");
}

void insertion(int a[], int N){
    int i, j, tmp;
    for (int i=0; i<N;i++){
        tmp=a[i];
        j=i-1;
        while(j>=0 && a[j]>tmp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
        trace(a,N);
    }
}

int main(int argc, char const *argv[])
{
    int N;
    int* A=(int*)malloc(N*sizeof(int));
    scanf("%d",&N);
    for(int i=0; i<N;i++){
        scanf("%d", &A[i]);
    }
    printf("input result is...\n");
    trace(A,N);
    printf("start algorithm insertion\n");
    insertion(A,N);
    free(A);
    return 0;
}