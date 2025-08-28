#include<stdio.h>
int main(){
    printf("enter a number: ");
    int a;
    scanf("%d",&a);
    printf("%d",a%2==0);
    return 0;
}