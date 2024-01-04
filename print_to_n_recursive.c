#include <stdio.h>
int print_to_n(int A[],int number,int i);
int main()
{   int A[]={1,2,3,4,5,6};
    int number=6;
    int i;
    printf("%d",print_to_n(A,number,1));

    return 0;
}
int print_to_n(int A[],int number,int i){
    if(i==number) return number;
    printf("%d",i);
    return  print_to_n(A,number,i+1);
}
