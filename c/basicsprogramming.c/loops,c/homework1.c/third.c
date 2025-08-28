#include<stdio.h>
int main(){
    int n ;
    printf("enter the number of entries : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        char a;
        printf("enter your name :\n");
        scanf("%c",&a);
         printf(" name :%c\n",a);
        int r;
        printf("enter the roll no :\n");
        scanf("%d",&r);
         printf("roll no : %d\n",r);
        float c;
        printf("enter the cgpa : \n");
        scanf("%f",&c);
         printf(" cgpa : %f\n");
    }
    return 0;
}//doubt program 