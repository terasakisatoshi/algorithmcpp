#include <stdio.h>
#include <stdlib.h>

int main(){
    int* x=(int*)calloc(1,sizeof(int));
    if (x!=NULL){
        *x=57;
        printf("*x=%d\n",*x);
        free(x);
    }else{
        puts("fail to calloc");
    }
    return 0;
}