//===== BANK BALANCE GAME =====
#include<stdio.h>
int main()
{
    int n,b,c,a,choice;
    printf("Enter starting balance = ");
    scanf("%d",&n);
    label:
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    if(choice==1){
        printf("Enter deposit amount:\n");
        scanf("%d",&a);
        printf("Amount deposited:%d\n",a);
        n=n+a;
        printf("Current balance:%d\n",n);
        goto label;
    }
    else if(choice==2){
        
        printf("Enter withdrawal amount:\n");
        scanf("%d",&b);
        if(b<=n){
        printf("Amount withdrawn:%d\n",b);
        n=n-b;
        printf("Current balance:%d\n",n);}
        else
        printf("Enter valid amount");
        goto label;
    }
    else if(choice==3){
        printf("Current balance:%d\n",n);
        goto label;
    }
    else if(choice==4)
    printf("Thank you\n");
    else{
    printf("Enter valid choice\n");
    goto label;}
    printf("game over");
    return 0;
}