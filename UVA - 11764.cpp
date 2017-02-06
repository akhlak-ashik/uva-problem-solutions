#include<stdio.h>
int main()
{
    int num[100],i,j=1,k=1,c_s,c_b,t,n,m,wall,z;
    scanf("%d",&m);
    for (z=1;z<=m;z++)
    {
        scanf("%d",&n);

        for (i=1,j=1;i<=n;i++)
        {
            scanf("%d",&num[i]);
        }
        c_s=0;
        c_b=0;
        wall=num[1];
        for (i=2;i<=n;i++)
        {
            if (num[i]>wall)
            {
                c_b++;
                wall=num[i];
            }
            else if (num[i]<wall)
            {
                c_s++;
                wall=num[i];
            }
            else if  (num[i]==wall)
            {
                c_b=c_b;
                c_s=c_s;
            }
        }
        printf("Case %d: %d %d\n",k++,c_b,c_s);
    }
    return 0;
}
