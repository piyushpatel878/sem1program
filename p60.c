//Youngest Among Three Ages
#include<stdio.h>
int main()
{ 
    int p1,p2,p3;
    printf("Enter age of person 1:");
    scanf("%d",&p1);
    printf("Enter age of person 2:");
    scanf("%d",&p2);
    printf("Enter age of person 3:");
    scanf("%d",&p3);
    if (p1<p3 && p1<p2)
    printf("1st person is youngest");
    else if (p2<p3 && p2<p1)
    printf("2nd person is youngest");
    else 
    printf("3rd person is youngest");
    return 0;

}