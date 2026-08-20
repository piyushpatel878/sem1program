//Prime Number Checker  
#include<stdio.h>
int main()
{
    int number,prime,Prime;  
    printf("enetr your number:");
    scanf("%d",&number);
    prime = number%2;
    Prime = number%3;
    if (number == 3)
    {printf("number is prime");
    }
    else if (Prime==0 || prime==0)
        printf("entered number is not prime");
    
    else{
    printf("entered number is  prime");
    }return 0;
}
/*{int i,num;
printf("enter your number");
scanf("%d",&num);
for(i=2;i<=num-1;i++){
if (num%i==0) 
{printf("enter num is not prime");
}else
{printf("enter num is prime");
}}return 0;

}*/