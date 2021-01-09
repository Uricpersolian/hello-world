//求出如何用一角，两角，五角表示十元以内的数
#include<stdio.h>
int main()
{
	int x;
	printf("请输入金额");
	scanf("%d",&x);
	int one,two,three;
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*5;two++){
			for(three=0;three<=x*2;three++){
				if(x==one/10+two/5+three/2){
					printf("你可以用%d个一毛，%d个二毛，%d个五毛代替%d元\n",one,two,three,x);
					
				}
			}
		}
	} 
	return 0;
 } 
