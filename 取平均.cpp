#include<stdio.h>
int main()
{
int number=0,count=0,sum=0;

	scanf("%d",&number);
	while (number!=-1){
		count++;
		sum=sum+number;
		scanf("%d",&number);
	} 
	double answer=1.0*sum/count;
	printf("%lf",answer);
	return 0;

 } 
