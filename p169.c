//Replace Word
#include<stdio.h>

int main()
{
    int i,j,n,k,m,flag;
    char word[100],x[50],y[50];

    printf("Enter your sentence: ");
    scanf("%[^\n]",word);

    printf("Enter word to replace and replacement word: ");
    scanf("%s %s",x,y);

    for(j=0; word[j]!='\0'; )
    {
        if(word[j]==' ')
        {
            j++;
            continue;
        }

        for(n=j; word[n]!=' ' && word[n]!='\0'; n++);

        k=0;
        flag=0;

        while(x[k]!='\0')
        {
            if(word[j+k]!=x[k])
            {
                flag=1;
                break;
            }
            k++;
        }

        if(flag==0 && n-j==k)
        {
            for(m=0; y[m]!='\0'; m++);

            if(m>k)
            {
                for(i=n; word[i]!='\0'; i++);

                while(i>=n)
                {
                    word[i+m-k]=word[i];
                    i--;
                }
            }

            if(m<k)
            {
                for(i=n; word[i]!='\0'; i++)
                {
                    word[i-k+m]=word[i];
                }
            }
                        for(i=0; y[i]!='\0'; i++)
            {
                word[j+i]=y[i];
            }

            j=j+m;
        }
        else
        {
            j=n;
        }
    }

    printf("Result: %s",word);

    return 0;
}