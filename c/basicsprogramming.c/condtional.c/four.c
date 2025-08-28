#include<stdio.h>
int main(){
    printf("enter the days :");
    int day;
    scanf("%d",&day);
    switch(day){
        case 1:printf("monday \n");
        break;
        case 2:printf("tuesday\n");
        break;
        case 3:printf("wed \n");
        break;
        case 4: printf("thrus \n");
        break;
        case 5:printf("friday\n");
        break;
        case 6:printf("saturday\n");
        case 7:printf("sunday \n");
        break;
        default:printf("not a vaild day \n");

     }
     return 0;
}