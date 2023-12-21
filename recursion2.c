
#include <stdio.h>
int factorial(int num);
int main()
{   
    int result,num;
    printf("Please Enter The Number: ");
    scanf("%d",&num);
    result= factorial(num);
    printf("%d! = %d ",num,result);
    
    return 0;
}
int factorial(int num){
    if(num==0) return 1;
    return num * factorial(num-1);
}
