
// bir arrayda kendisine kadar kendisinden küçük olan sayıları yazdıran rec. fonk.
#include <stdio.h>
int lessThanNum(int A[],int num,int i);
int main()
{
    int num;
    int i=0;
    printf("Please Enter num: ");
    scanf("%d",&num);
    int A[]={1,3,5,49,16,73,7,88,97};
    printf("%d",lessThanNum(A,num,i));


    return 0;
}
int lessThanNum(int A[],int num,int i){

    if (A[i]>=num) return 0;
    printf("%d ",A[i]);
    return lessThanNum(A,num,i+1);


}
