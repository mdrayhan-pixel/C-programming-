#include<stdio.h>
int main(){
    printf("enter a number: ");//printing out this statments 
    int a;
    scanf("%d",&a);//getting input 
    printf("enther the another number: ");
    int b;
    scanf("%d",&b);
    int ab;
    ab=a+b;
    printf("the sum of these two number is : %d ",ab);
    return 0;
}