#include <stdio.h>
float calculate_bmi(int weight,int height);
char calculate_bmi_category(float bmi);
int main() {
    char name,B_M_I;
    int weight,height;
    printf("Please Enter Your Name: ");
    scanf("%s",&name);
    printf("\nPlease Enter Your weight(kg) height(cm): ");
    scanf("%d%d",&weight,&height);
    B_M_I =calculate_bmi_category(calculate_bmi(weight,height));
    printf("Your BMI is: %c",B_M_I);
    return 0;
}
float calculate_bmi(int weight,int height){
    return (float)weight/(float)((height/100.00)*(height/100.00));
}
char calculate_bmi_category(float bmi){
    char category;
    if(bmi < 18.50){
        category='U';
    }
    else if(bmi < 25.00){
        category='N';
    }
    else if(bmi < 30.00){
        category='O';
    }
    else if(bmi < 35.00){
        category='I';
    }else{
        category='E';
    }
    return category;
}
