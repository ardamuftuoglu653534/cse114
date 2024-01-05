
#include <stdio.h>
int lucas_sequence(int n);
int main()
{
    int n;
    printf("Please Enter a index: \n");
    scanf("%d",&n);
    printf("Lucas value at index n=%d is %d",n,lucas_sequence(n));

    return 0;
}
int lucas_sequence(int n){
    if(n==0) return 2;
    if (n==1) return 1 ;
    if(n>1)
    return lucas_sequence(n-1) + lucas_sequence(n-2);
    
    //return lucas_sequence(n-1);
}
