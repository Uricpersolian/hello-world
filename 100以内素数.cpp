#include<stdio.h>
int main()
{
	int x,y,z=0;
	for(x=0;;x++){
		for(y=2;y<=x;y++){
			if(x%y==0){
			break;
			}
			
		}
	if(y==x){
		printf("%d\t",x);//\t����ʹ�ַ����� 
		z++;
		if(z%5==0){//ÿ�������һ�� 
			printf("\n");
		}
		
	}
	if(z>=50){
		break;
	}
	}
	return 0;
}
