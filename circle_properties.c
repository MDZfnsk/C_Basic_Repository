#include <stdio.h>
int main(){
    float radius;
    printf("Enter the Radius =");
    scanf("%f",&radius);
    printf("The Circle's Diameter is %.4f.\n",(2*radius));
    printf("The Circle's Circumference is %.4f.\n",(2*3.14159*radius));
    printf("The Circle's Area is %.4f.\n",(3.14159*radius*radius));
