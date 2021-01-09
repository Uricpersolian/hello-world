#include<stdio.h>
int main()
{
    int a[11];
    int i,n,max;
   
    scanf("%d",&n);
 
    for(i=1;i<=n;i++){
         
		scanf("%d",&a[i]);
	}
	max=a[1]; //假定第一个是最大du
	for(i=2;i<=n;i++){ //与剩余zhi的比较
		if(a[i]>max){
			max=a[i];
		}
	}
	
	printf("max=%d\n",max );
		return 0;
}
