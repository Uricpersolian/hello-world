#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // 有n组数据
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
		
		
	    // 读入4个整数，对这4个整数排序，并输出结果
        // 请将排序代码写在这里，不能使用循环语句
    }
   
    return 0;
}
