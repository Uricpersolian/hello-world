#include<stdio.h>
int main()
{
int n=0;
int a,b,c,d,e,f;
scanf("%d",&n);
for(;n>0;n--){
	scanf("%d%d%d",&a,&b,&c);
	d=a*a;
	e=b*b;
	f=c*c;
	if(a<0||b<0||c<0){
		printf("No");
	} 
	else if((a<b+c||b<a+c||c<a+b)&&(d==e+f||e==d+f||f==d+e)){
		printf("Yes");
	}else{
		printf("No");
	}
}
return 0;
}
