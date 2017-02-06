#include<stdio.h>
int main()
{
    int m,n,res,t;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%c%d%d",&ch,&m,&n);
        ch=getchar();
        if(ch=='r'||ch=='Q')
        {
            scanf("%d%d",&m,&n);
            if(m>n)
            {
                res=n;
            }
            else
            {
                res=m;
            }
        }
        else if(ch=='k')
        {
            scanf("%d%d",&m,&n);
            res=(n*m+1)/2;
        }
        else if(ch=='K')
        {
            scanf("%d%d",&m,&n);
            res=(((m+1)/2)*((n+1)/2));
        }
        printf("%d\n",res);
    }
    return 0;
}
