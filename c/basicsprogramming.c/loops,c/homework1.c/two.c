#include<stdio.h>
int main(){
    printf("=====================Quizzes====================\n");
    int f;
    printf("enter the score of the frist quiz : \n");
    scanf("%d",&f);
    int se;
    printf("enter the score of the second quiz : \n");
    scanf("%d",&se);
    int th;
    printf("enter the score of third quiz :\n");
    scanf("%d",&th);
    printf("==============Mid term=============\n");
    int mi;
    printf("enter the score of the mid term :" );
    scanf("%d",&mi);
    printf("====================Final=====================\n");
    int fi;
    printf("enter the score of the final :\n");
    scanf("%d",&fi);
    printf("quiz total: %d \n",f+se+th);
    printf("mid term : %d \n",mi);
    printf("final : %d \n",fi);
    printf("...... ....... ...... .... ... .......\n");
    printf("total : %d \n",f+se+th+mi+fi);
    return 0;

}