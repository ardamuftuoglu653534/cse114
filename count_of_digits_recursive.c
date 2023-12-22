int count_of_digits(int n);
#include <stdio.h>

int main()
{   int n=123;//1 + count_of digits(12)=1+1+count_of_digits(1)=1+1+1 
    printf("%d",count_of_digits(n));

    return 0;
}
int count_of_digits(int n){
    int count=1;
    if(n<10) return 1;
  
    return count + count_of_digits(n/10);
}
