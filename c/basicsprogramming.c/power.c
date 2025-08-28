#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    int power = pow(a,8);
    printf("%d",power);
    return 0;
}