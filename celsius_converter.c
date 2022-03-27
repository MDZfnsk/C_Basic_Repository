#include<stdio.h>
int main(){
    float far,cel;
    printf ("Enter Fahrenheit Value=");
    scanf("%f",&far);
    cel= (((far-32)*5)/9);
    printf("Temperature is %.2f Celsius.",cel);}
