#include<stdio.h>
int main()
{int n,b;
printf("n=");
scanf("%d",&n);
for(b=2;b<n;b+=1)
if(n%b==0)
break;
if(b<n)
printf("%dΪ����",n);
else
printf("%d������",n);
return 0; 
 } 
