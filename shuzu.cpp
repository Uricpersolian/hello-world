#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // ��n������
    for (i = 0; i < n; i++) {
        int a, b, c, d,temp;
 		scanf("%d%d%d%d",&a,&b,&c,&d);
   	//f(a>b){
		  temp=a;
		   
		   }else{
		   	temp=b;
		   }
		if(temp>c){
			temp=temp;
	
		}else{
			temp=c;
		}	
		if(temp>d){
		
			temp=temp;
	
		}else{
			temp=d;
		}
		printf("%d",temp);
		
		
	    // ����4������������4���������򣬲�������
        // �뽫�������д���������ʹ��ѭ�����
    }
   
    return 0;
}
