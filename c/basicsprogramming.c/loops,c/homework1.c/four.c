#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);

    int b;
    printf("enter the number : ");
    scanf("%d",&b);  


    int c;
    printf("enter the number : ");
    scanf("%d",&c);
    
    int ray;
    ray=(a>b)? a:b;

    int han;
    han=(ray>c)? ray: c;


    printf("THE LARGEST NUMBER IS : %d",han);
}