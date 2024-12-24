#include<stdio.h>
int main(){
    float a,b,c,d,e,s,p;
    printf("Enter your First Subject Number-");
    scanf("%f",&a);
    printf("Enter your Second Subject Number-");
    scanf("%f",&b);
    printf("Enter your Third Subject Number-");
    scanf("%f",&c);
    printf("Enter your Fourth Subject Number-");
    scanf("%f",&d);
    printf("Enter your Fifth Subject Number-");
    scanf("%f",&e);
    s= a+b+c+d+e;
    p=(a+b+c+d+e)/5;
    printf("Your Total Marks %.2f\n",s);
    printf("Your Total Percentage is %.2f",p);
}