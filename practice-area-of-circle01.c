#include <stdio.h>
int main() {
float radius,hieght, area;
printf("enter the value of the radius=  ");
scanf("%f", &radius);
printf("enter te value of hieght  ");
scanf("%f", &hieght);
area= 3.14*radius*hieght;
printf("valoume of a cylender = %.2f\n",area);
return 0;
}