#include <stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	 while(n--)
	 {
		scanf("%d%d",&a,&b);
		if(b%a==0)
		{
			printf("%d %d\n",a,b);
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}
