// quiz game
#include<stdio.h>
int main()
{
    int a,b,c,d,wr,count=0;
    printf("===== MATH QUIZ =====\n");
    printf("Question 1:5 + 7 = \n");
    scanf("%d",&a);
    if(a==12 )
    count++;
    printf("Question 2:9 x 6= \n");
    scanf("%d",&b);
    if( b==54)
    count++;
    printf("Question 3:20 - 8 = \n");
    scanf("%d",&c);
    if(c==12 )
    count++;
    printf("Question 4:65 / 5 = \n");
    scanf("%d",&d);
    if( d==13)
    count++;
    wr=4-count;
    printf("===== RESULT =====\n");
    printf("Correct answers=%d\n",count);
    printf("wrong answers=%d\n",wr);
    printf("Score:%d/%d\n",count,4);
    if(count!=4)
    printf("Better luck next time!");
    return 0;

}