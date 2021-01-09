#include<stdio.h>
#include<stdlib.h>
int max(const int *a,int n){
	int i=0;int max;
	int *b;
	b=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	b[i]=a[i];
	for(int i=0;i<n;i++){
		if(b[i]<0) {
		b[i]=-b[i];
		} 
	}
	int k=b[0];
	for(i;i<n;i++){
    if(k<b[i]){
    	k=b[i];
    max=i; 
}
}
 return max;
}
int main(){
	int m;
	int *p;
	scanf("%d",&m);
	p=(int*)malloc(sizeof(int)*m);
	for(int i=0;i<m;i++){
		scanf("%d",&p[i]);
	}
	int b=max(p,m);
	printf("%d\n",p[b]);
}
