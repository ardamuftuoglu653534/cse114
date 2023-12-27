
// bir arrayda kendisinden küçük olan sayıları yazdıran rec. fonk.
#include <stdio.h>
int lessThanNum(int A[],int num,int i,int j,int size);
int main()
{   
    int num,size;
    int i=0;
    int j;
    
    printf("Please Enter num: ");
    scanf("%d",&num);
    int A[]={1,3,5,49,16,73,7,88,13,97};
    size=sizeof(A)/sizeof(A[0]);
    j=size-1;
    printf("%d",lessThanNum(A,num,i,j,size));
    
    

    return 0;
}
int lessThanNum(int A[],int num,int i,int j,int size){
    if (A[j]==A[0]) {if(A[0]<=num) return A[j];}
    
    
    
   
    //printf("%d ",A[i]);
    if(A[j]<num) printf("%d ",A[j]);
    return lessThanNum(A,num,i,j-1,size);
   
    
    
    
}
