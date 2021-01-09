#include<stdio.h> 
int main(void)
{int n,a,k,age;

printf("请输入n，a，k三个正整数，n大于等于二，k小于等于100\n"); 
while(1)
{
printf("n=");
scanf("%d",&n);
fflush(stdin);
if(n>=1) break;
		else printf("Wrong number\n");
		}
while(1){
		
printf("\na=");
scanf("%d",&a);
fflush(stdin);
if(a>=0) break;
		else printf("Wrong number\n");
}
while(1)
{
printf("\nk=");
scanf("%d",&k);
fflush(stdin);
if(k>=0&&k<=100) break;
		else printf("Wrong number\n");

}

age=a+k*(n-1);
printf("age=%d",age);






return 0;
}
