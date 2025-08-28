#include<stdio.h>
int main(){
    int n;
    printf("enter the number of time to print ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=1){
        printf("hello world\n");
    }
    return 0;
}