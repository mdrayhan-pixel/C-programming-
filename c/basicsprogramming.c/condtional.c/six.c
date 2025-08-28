#include<stdio.h>
int main(){
    int m;
    printf("enter the number");
    scanf("%d",&m);
    if(m>=30 && m<100){
        printf("you pass");
       }
    else if(m<30){
        printf("you are fail");
    }
    else{
        printf("wrong marks");
    }
    return 0;
}
