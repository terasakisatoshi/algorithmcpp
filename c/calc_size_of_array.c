#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    int length_a=sizeof(a)/sizeof(a[0]);
    printf("size of array a[]=%d\n",length_a);
}