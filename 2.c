#include <stdio.h>
int main (){
    float principal,rate,time,simple_intrest;
    printf("enter the amount of principal =");
    scanf("%f",&principal);
    printf("enter the value of rate =");
    scanf("%f",&rate);
    printf("enter the time =");
    scanf("%f",&time);
    simple_intrest= (principal*rate*time)/100.0;
    printf("simple_intrest = %.2f",simple_intrest);
    return 0;
}