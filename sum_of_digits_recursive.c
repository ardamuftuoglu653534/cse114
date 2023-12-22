
#include <stdio.h>
int sum_of_digits(int n);
int main()
{   int n=14555;
    printf("%d",sum_of_digits(n));

    return 0;
}
int sum_of_digits(int n){
    int result;
    if(n<=9) return n;
    return n%10 + sum_of_digits(n/10);
}
