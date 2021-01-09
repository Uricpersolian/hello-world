#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	
srand(time(0));
int n=rand();
int a,c=0;
scanf("%d",&a);
while(a!=n)
{
	c++;
	if(a>n){
		printf("big");
		scanf("%d",&a);
	}else{
		printf("small");
		
	}
}

	printf("zaizhongle,caile%d´Î",c);

	return 0;
}


