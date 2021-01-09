#include<stdio.h>
int main(void)
{int n,sum =0 ;
printf("输入一个数字");
scanf("%d",&n);
while(n!=0){
	sum+=n;
	scanf("%d",&n);
} 
printf("the sum is:%d\n",sum);
return 0;
 } 
