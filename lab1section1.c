#include <stdio.h>
float calculate_final_point(int midterm ,int final);
char calculate_letter_grade(float final_point);
int main() {
   float f_p;
   int midterm,final;
   printf("Please Enter your Midterm Point and Final Point: ");
   scanf("%d%d",&midterm,&final);
   f_p=calculate_final_point(midterm,final);
   printf("\nYour Letter Grade is: %c",calculate_letter_grade(f_p));
    return 0;
}
float calculate_final_point(int midterm ,int final){

    midterm=(float)midterm*0.4;
    final=(float)final*0.6;


    return ((float)midterm+(float)final)/25.00;
}
char calculate_letter_grade(float final_point){
 char letter;
 if(final_point>=3.00 ){
     letter='A';
 }else if(final_point>=2.00) {
        letter='B';
 }else if(final_point>=1.00){
        letter='C';

 }else if(final_point>=0.50 ){
        letter='D';
 }else{
        letter='F';
 }
return letter;
}
