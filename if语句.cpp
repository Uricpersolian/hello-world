#include<stdio.h>//比较大小 
int main(void)
{int i,k,j,max; 
printf("i=");
scanf("%d",&i);
printf("\nj=");
scanf("%d",&j);
printf("\nk=");
scanf("%d",&k);
if(i>j&&i>k)
 max=i;
 else
 if(j>k)
  max=j;
  else
  max=k;
printf("max=%d",max);
return 0;
}
