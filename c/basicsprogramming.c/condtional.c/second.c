#include<stdio.h>
int main(){
    int mark;
    printf("enter the marks :");
    scanf("%d",&mark);
    if(mark>=90){
        printf("very good");

    }
    else if(mark<90 && mark>=80){
        printf("good");
    }

    
    else if (mark<80 && mark>=70){
        printf("need to improve");

    }
    else{
        printf("waste fellow");
    }

    
    return 0;
}


