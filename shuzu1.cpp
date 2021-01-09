#include<stdio.h>
int main(){
	int n=0,m=0,a=0,b;
	scanf("%d",&n);
	
	
		for(;n>0;n--){ 
		scanf("%d%d",&m,&a);
		if(100<=m&&m<=a&&a<=999){
		
		for(b=m;b<=n;b++){
			if(b=b/100*b/100*b/100+b/10%10*b/10%10*b/10%10+b%10*b%10*b%10){
				printf("%d",b);
			}else{
				printf("-1");
			}
			}
		}	else{
		printf("-1");
		} 
		} 

	
	return 0;
}
