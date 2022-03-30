#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 void linear(int arr[5],int sk,int size){
     int flag=false;
     int index=0,pos;

     while (!flag && index<size){
            if(arr[index]==sk){
                flag=true;
                printf("Number Found at :- %d",index);
            }
            index++;
     }

     if(!flag){
        printf("Number %d is NOT in the set !!!",sk);
     }

 }

 int main(){
   int arr[5]={22,32,45,98,75};
   int size=5;
   int sk=41;

   linear(arr,sk,size);

 }
