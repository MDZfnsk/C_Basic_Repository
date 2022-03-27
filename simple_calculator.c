#include <stdio.h>
int main(){
float a,b;
char c;
printf("Enter 1st Number = ");
scanf("%f",&a);
printf("Enter Operator (+,-,*,/):-");
scanf(" %c",&c);
printf("Enter 2nd Number = ");
scanf("%f",&b);
switch(c){
case '+':printf("The Total Is = %.3f",(a+b));break;
case '-':printf("The Subtraction Is = %.3f",(a-b));break;
case '*':printf("The Multiplication Is = %.3f",(a*b));break;
case '/':printf("The Division Is = %.3f",(a/b));break;
default:printf("Invalid Operator");}}
