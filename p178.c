
//Student Structure
#include <stdio.h>
struct student{
    char name[100];
    int roll;
    float marks;
};
int main()
{
    struct student h;    
    printf("Enter name");
    scanf("%[^\n]",h.name);

    printf("Enter roll number and marks");
    scanf("%d %f",&h.roll,&h.marks);

    printf("Student detail\n");
    printf("name=%s",h.name);
    printf("\nroll number=%d",h.roll);
    printf("\nmarks=%f",h.marks);
    
    return 0;
}