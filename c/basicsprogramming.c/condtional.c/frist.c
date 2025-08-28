#include<stdio.h>
int main(){
    int age;
    printf("enter the age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("adult\n") ;
        printf("they can drive \n");

    }
    else{
        printf("not an adult");
    }
    printf("thank you");
    return 0;
    
}