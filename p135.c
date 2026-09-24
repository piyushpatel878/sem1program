//find highest subject and marks
#include<stdio.h>
int main()
{
    int m1[3]={30,15,35},m2[3]={28,16,5},m3[3]={27,17,21};
    int i,j,k,max1,min1,max2,min2,max3,min3;
    max1=m1[0];
    min1=m1[0];
    max2=m2[0];
    min2=m2[0];
    max3=m3[0];
    min3=m3[0];
    printf("  \tM \tB \tP\n");
    printf("s1\t30\t28\t27\n");
    printf("s2\t15\t16\t17\n");
    printf("s3\t35\t5\t21\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m1[i]>max1)
            max1=m1[i];

            if(m1[i]<min1)
            min1=m1[i];
        }
    }
    printf("\nMax and Min marks of subject M =%d ,%d",max1,min1);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m2[i]>max2)
            max2=m2[i];

            if(m2[i]<min2)
            min2=m2[i];
        }
    }
    printf("\nMax and Min marks of subject B =%d ,%d",max2,min2);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m3[i]>max3)
            max3=m3[i];

            if(m3[i]<min3)
            min3=m3[i];
        }
    }
    printf("\nMax and Min marks of subject C =%d ,%d",max3,min3);


    return 0;

}