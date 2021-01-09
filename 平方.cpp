#include<stdio.h>
int main(void)
{
	int n,i;
	i=1;
	printf("n=");
	scanf("%d",&n);
	while (i<=n)
	
	{
	printf("%10d%10d\n",i,i*i);//%10d意为在打印字符前空十格 
	i+=1;
	}
	return 0;
}

