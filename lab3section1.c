#include <stdio.h>
#define PI 3.14
float calculate_area_of_circle(int radius);
float calculate_area_of_rectangle(int width,int height);
float calculate_area_of_triangle(int base,int height_of_triangle);
int main() {
    int radius,width,height,base,height_of_triangle;
    char choice;

    while(choice!='c' && choice!='r' && choice !='t' ){
        printf("Please enter your choice (c,r or t) : \n" );
        scanf("%c",&choice);
        if(choice=='c'){
            printf("Please enter radius of circle: ");
            scanf("%d",&radius);
            printf("Area of circle:%f",calculate_area_of_circle(radius));
        }
        else if(choice=='r'){
            printf("Please enter width and height of rectangle: ");
            scanf("%d%d",&width,&height);
            printf("Area of rectangle:%f",calculate_area_of_rectangle(width,height));
        }
        else if(choice=='t'){
            printf("Please enter base and height of triangle: ");
            scanf("%d%d",&base,&height_of_triangle);
            printf("Area of triangle: %f", calculate_area_of_triangle(base,height_of_triangle));
        }
        else{
            printf("\nPlease enter a valid choice (c,r,t): ");
            scanf("%c",&choice);
        }
    }

return 0;
}
float calculate_area_of_circle(int radius){
  return  PI*(float)radius*(float)radius;
}
float calculate_area_of_rectangle(int width,int height){
    return (float)width*(float)height;
}
float calculate_area_of_triangle(int base, int height_of_triangle){
    return base*height_of_triangle/2.00;
}
