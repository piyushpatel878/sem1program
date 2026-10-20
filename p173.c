//Quiz Record System
#include<stdio.h>
struct record{
    char name[100];
    int que,ans;
};

int main()
{
    float result=0;
    struct record h;
    printf("Enter student name:");
    scanf("%99s",h.name);
    printf("Enter number of correct answers:");
    scanf("%d",&h.ans);
    printf("Enter total questions:");
    scanf("%d",&h.que);

    printf("----- Quiz Result -----\n");
    printf("Student Name: %s\n",h.name);
    printf("Correct Answers:%d\n",h.ans);
    printf("Total Questions:%d\n",h.que);

    result=((h.ans*1.0)/h.que)*100;
    printf("Score:%.2f\n",result);

    return 0;
}