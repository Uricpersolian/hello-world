//��������һ�ǣ����ǣ���Ǳ�ʾʮԪ���ڵ���
#include<stdio.h>
int main()
{
	int x;
	printf("��������");
	scanf("%d",&x);
	int one,two,three;
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*5;two++){
			for(three=0;three<=x*2;three++){
				if(x==one/10+two/5+three/2){
					printf("�������%d��һë��%d����ë��%d����ë����%dԪ\n",one,two,three,x);
					
				}
			}
		}
	} 
	return 0;
 } 
