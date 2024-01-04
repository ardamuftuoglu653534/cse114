
#include <stdio.h>
#include <stdlib.h>


int sum_of_Even(int A[],int size,int i);
int main()
{   int size;
    int A[]={1,5,8,10,13,16,19,24,26,27};
    size=sizeof(A)/sizeof(A[0]);
    printf("%d",sum_of_Even(A,size,0));

    return 0;
}
int sum_of_Even(int A[],int size,int i){
  
    
    if(i>=size){
        
        return 0;
       
    }
    if(A[i]%2==0){
    return A[i] + sum_of_Even(A,size,i+1);
    
    
    }
    return sum_of_Even(A,size,i+1);
    
    
}
