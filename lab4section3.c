#include <stdio.h>
void print_multiplication_table(int num);
void print_pascal_triangle_pattern(int rows);
void print_arrow_pattern(int rows);

int main() {
    char choice;
    int num,rows;
    while(choice!='m' && choice!='p' && choice!='a'){
        printf("Please Enter a choice:(m,p,a):\n  ");
        scanf("%c",&choice);
        if(choice=='m'){
            printf("Please Enter number:\n");
            scanf("%d",&num);
            print_multiplication_table(num);
        }
        else if(choice=='p'){
            printf("Please Enter number of rows:\n");
            scanf("%d",&rows);
            print_pascal_triangle_pattern(rows);
        }
        else if(choice=='a'){
            printf("Please Enter number of rows:\n");
            scanf("%d",&rows);
            print_arrow_pattern(rows);
        }
        else{
            printf("Please Enter a valid choice (m,p,a): ");
            scanf("%c",&choice);
        }

    }
    return 0;
}
void print_multiplication_table(int num) {
    int i;
    for (i = 1; i <= num; i++) {
        printf("%d x %d = %d\n", i, num, i * num);
    }
}
void print_pascal_triangle_pattern(int rows){
    for(int i=0;i<rows;i++){
        int number=1;
        for(int j=0;j<=i;j++){
            printf(" %d ",number);
            number=number*(i-j)/(j+1);
        }
        printf("\n");
    }


}
void print_arrow_pattern(int rows){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<rows;i++){
        for(j=rows-1;i<=j;j--){
            printf("*");
        }
        printf("\n");
    }

}
