#include<stdio.h>
int divide (int a,int b,int *c);
int main()

{int a,b,c;
scanf("%d%d",&a,&b);
if(divide(a,b,&c))
{printf("%d",c);
}
return 0;


}
int divide (int a,int b,int *c)
{
	int ret=1;
	if(b==0){
		ret=0;
	}else{
		*c=a/b;
	}
	return ret; 
}
