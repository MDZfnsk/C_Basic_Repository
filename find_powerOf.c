#include<stdio.h>
int find_power(){
    int base,expo,power=1,i;
    printf("Enter Base Number =");
    scanf("%d",&base);
    if (base >= 1){
        printf("Enter Exponent Value =");
        scanf("%d",&expo);
        if(expo >= 1){
            for(i=1;i<=expo;i++){
                power=power*base;
            }
        }
        else
         printf("Please Enter a Positive integer value as Exponent.");
    }
    else
      printf("Please Enter a Positive Integer number as Base.");
    return power;
}
int main(){
    int base,expo;

    printf("Answer is %d.",find_power());
}

