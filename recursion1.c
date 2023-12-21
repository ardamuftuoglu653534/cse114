
#include <stdio.h>
int sum_up_to(int number);
int main()
{
  int number;
  int x;
  printf("Please Enter The Number: ");
  scanf("%d",&number);
  //x=sum_up_to(number);
  printf("Sum up to %d=%d:",number,sum_up_to(number));

    return 0;
}
int sum_up_to(int number){
   
   if(number<0)
   return 0;

   return  number + sum_up_to(number-1);;
}
