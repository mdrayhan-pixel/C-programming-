#include<stdio.h>
int main(){
    char letter;
    prinft("enter a letter");
    scanf("%c",&letter);
    if(letter >="a"&& letter <="z"){
        printf("lower case");

    }
    else if(letter >="A"&& letter <="Z"){
        printf("upper case");

    }
    else{
        printf("it is not an english");
    }
    return 0;
// this program is getting error 

}