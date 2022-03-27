#include<stdio.h>
int main(){
    int no1,no2,no3;
    int max,min;
    printf("Enter Three Numbers=");
    scanf("%d %d %d",&no1,&no2,&no3);
     if (no2>no1){
        if(no2>no3){
            max=no2;
            if(no1>no3)
                min=no3;
            else
                min=no1;}
        else{
            max=no3;
            min=no1;}}
    else{
        if(no1>no3){
            max=no1;
            if(no2>no3)
                min=no3;
            else
                min=no2;}
        else{
            max=no3;
            min=no2;}}
    printf ("The Largest Value is %d\n",max);
    printf ("The Smallest Value is %d",min);  }
