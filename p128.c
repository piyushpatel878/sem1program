// 2-player Tic-Tac-Toe
#include<stdio.h>
int win[8][3] = 
{
    {0,1,2},{3,4,5},{6,7,8},
    {0,3,6},{1,4,7},{2,5,8},
    {0,4,8},{2,4,6}
};
int main()
{
    char board[9] = {'1','2','3','4','5','6','7','8','9'};
    int i,a,b,flag=0;
    
    label1:
    for(i=0;i<=8;i++)
    {
    printf("%c|",board[i]);
    if(i==2 || i==5)
    {
    printf("\n");
    printf("------");
    printf("\n");
    }
    }
    printf("\n");

    printf("p1 have O enter your number");
    scanf("%d",&a);
    board[a - 1] = 'O';
    printf("p2 enter X  your number");
    scanf("%d",&b);
    board[b - 1] = 'X'; 
    for(i=0; i<8; i++)
    {
        if(board[win[i][0]] == board[win[i][1]] &&
       board[win[i][1]] == board[win[i][2]])
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    goto label1;
    if (board[win[i][0]] == 'X')
    printf("X wins");
    else
    printf("O wins");

    return 0;
}