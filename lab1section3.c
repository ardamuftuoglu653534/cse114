#include <stdio.h>
float calculate_bill(int consumption, int price);
char calculate_bill_category(float bill);
int main() {
    char name;
    int  consumption,price;
    printf("Please Enter Your Name Sir: ");
    scanf("%s",&name);
    printf("\nPlease Enter your consumption and price (per kwh) Sir: ");
    scanf("%d%d",&consumption,&price);
    printf("\nYour bill category is : %c sir...",calculate_bill_category(calculate_bill(consumption,price)));
    printf("\nHave a nice day sir...");
    return 0;
}
float calculate_bill(int consumption, int price){
    return (float)consumption*(float)price;

}
char calculate_bill_category(float bill){
    char category;
    if(bill<50){
        category='L';

    }
    else if(bill<100){
        category='M';

    }
    else if(bill<200){
        category='H';

    }
    else{
        category='V';

    }
    return category;
}
