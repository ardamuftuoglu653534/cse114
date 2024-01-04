
#include <stdio.h>
#include <stdlib.h>


int num_of_Even(int A[],int size,int i);
int main()
{   int size;
    int A[]={1,5,8,10,13,16,19,24,26,27};
    size=sizeof(A)/sizeof(A[0]);
    printf("%d",num_of_Even(A,size,0));

    return 0;
}
int num_of_Even(int A[],int size,int i){
   // int count=1;
    
    if(i>=size){
        
        return 0;
       
    }
    if(A[i]%2==0){
    return 1 + num_of_Even(A,size,i+1);
    
    
    }
    return num_of_Even(A,size,i+1);
    //return num_of_Even(A,size,i);
    
}
