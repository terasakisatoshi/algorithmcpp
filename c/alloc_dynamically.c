#include <stdio.h>
#include <stdlib.h>

/*
usage
clang alloc_dynamically.c
*/
int main(int argc, char const *argv[])
{
    int length;
    printf("input length\n");
    scanf("%d",&length);

    int* a=(int*)calloc(length,sizeof(int));
    if(a!=NULL){
        printf("input %d-integers\n",length);
        for (int i = 0; i < length; ++i)
        {
            printf("%d-th integer\n",i );
            scanf("%d",&a[i]);
        }
        printf("output data of array\n");
        for(int i=0;i<length;i++){
            printf("a[%d]=%d\n",i,a[i]);
        }
        free(a);
    }else{
        puts("failed to calloc");
    }
    
    return 0;
}