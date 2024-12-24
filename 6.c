#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your First Number-");
    scanf("%d",&a);
    printf("Enter your Second Number-");
    scanf("%d",&b);
    if(a==b)
        printf("Both Numbers are Equal");
    else
        printf("Both Numbers are Not Equal");
}