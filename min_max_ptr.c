#include <stdio.h>
#include <limits.h>
#define SIZE 10

int find_max(int *ptr,int size);
int find_min(int *ptr,int size);
int main() {
    int A[SIZE];
    printf("Please Enter Items of the ARRAY!: \n");
    for(int i=0;i<SIZE;i++) {
        scanf("%d", &A[i]);
    }
    printf( "Max of ARRAY is:%d\n",find_max(A,SIZE));
    printf( "Min of ARRAY is:%d",find_min(A,SIZE));
    return 0;
}
int find_max(int *ptr,int size){
    int i=0,max;
    max=INT_MIN;
    for(i=0;i<size;i++){
        if(max<*(ptr+i)){
            max=*(ptr+i);
        }
    }
    return max;
}
int find_min(int *ptr,int size){
    int i=0,min;
    min=INT_MAX;
    for(i=0;i<size;i++){
    if(*(ptr+i)<min){
    min=*(ptr+i);
    }
    }
    return min;
}
