#include <stdio.h>
#include <time.h>

int maxof(const int *a,int length){
    int max=a[0];
    for(int i=1;i<length;i++)
        if(a[i]>max) max=a[i];

    return max;
}

int main(){
    int N=2000000;
    int a[N];
    for (int i = 0; i < N; ++i)
    {
        a[i]=i;
    }
    clock_t start = clock();
    int max=maxof(a,sizeof(a)/sizeof(a[0]));
    clock_t end = clock();
    printf("maxof %d\n",max);
    printf("elapsed time %f\n",(double)(end-start)/CLOCKS_PER_SEC);

}