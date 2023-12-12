#include <stdio.h>
double calculateDrugA(int age);
double calculateDrugB(int age);
double calculateDrugC(int age,char gender);
int main() {
    int age;
    char gender;
    printf("Please Enter Your age and gender: ");
    scanf("%d%c",&age,&gender);
    printf("\nThe amount of pill A you should take: %lf",calculateDrugA(age));
    printf("\nThe amount of pill B you should take: %lf",calculateDrugB(age));
    printf("\nThe amount of pill C you should take: %lf", calculateDrugC(age,gender));
    return 0;
}
double calculateDrugA(int age){
    double necessary_amount;
    if (age<18){
        necessary_amount = 25.00;
    }else if (age<65){
        necessary_amount = 45.00;
    }else {
        necessary_amount = 30.00;
    }
    return necessary_amount;
}
double calculateDrugB(int age){
    double necessary_amount;
    if (age<18){
        necessary_amount = 2.00*calculateDrugA(age);
    }else if (age<65){
        necessary_amount = 5.00*calculateDrugA(age);
    }else {
        necessary_amount = 3.00*calculateDrugA(age);
    }
    return necessary_amount;

}
double calculateDrugC(int age,char gender){
    double necessary_amount,K;
    if(gender=='M'){
        K= calculateDrugA(age)/2.00;
    }else {
        K= calculateDrugA(age)/3.00;
    }

    if (age<18){
        necessary_amount = 30.00+calculateDrugB(age)+1.50*K;
    }else if (age<65){
        necessary_amount = 40.00+2*calculateDrugB(age)+3.00*K;
    }else {
        necessary_amount =35.00+calculateDrugB(age)-2.50*K;
    }
    return necessary_amount;
}
