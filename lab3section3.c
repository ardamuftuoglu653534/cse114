#include <stdio.h>
#define PI 3.14
float calculate_volume_of_sphere(int radius);
float calculate_volume_of_cylinder(int radius,int height);
float calculate_volume_of_cone(int radius,int height);
int main() {
    int radius,height;
    char choice;
   while(choice!='s' && choice!='c' && choice!='o'){
       printf("Please Enter Your Choice(s,c,o):\n ");
       scanf("%c",&choice);
       if(choice=='s'){
           printf("Please Enter radius of the sphere:\n ");
           scanf("%d",&radius);
           printf("Volume of Sphere:%f",calculate_volume_of_sphere(radius));
       }
       else if(choice=='c'){
           printf("Please enter radius and height of the cylinder:\n ");
           scanf("%d%d",&radius,&height);
           printf("Volume of the Cylinder is:%f",calculate_volume_of_cylinder(radius,height));
       }
       else if(choice=='o'){
           printf("Please enter radius and height of the cone:\n ");
           scanf("%d%d",&radius,&height);
           printf("Volume of the cone is:%f",calculate_volume_of_cone(radius,height));
       }
       else{
           printf("Please Enter A Valid Choice! such that:s,c,o :\n");
           scanf("%c",&choice);
       }
   }
    return 0;
}
float calculate_volume_of_sphere(int radius){
    return (4.00/3.00)*PI*(float)radius*(float)radius*(float)radius;
}
float calculate_volume_of_cylinder(int radius,int height){
    return PI*(float)radius*(float)radius*(float)height;
}
float calculate_volume_of_cone(int radius,int height){
    return (1.00/3.00)*PI*(float)radius*(float)radius*(float)height;
}
