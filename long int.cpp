
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu{
	char name[11];
	char num[19];
	char point[4];
}a[100];


int paixu(struct stu a[],int n){
	struct stu p;int temp=0;
	for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(((strlen(a[i].point)<strlen(a[j].point)))||((strlen(a[i].point)==strlen(a[j].point))&&((strcmp(a[i].point,a[j].point)==-1))))
		{
		 	p=a[i];
		 	a[i]=a[j];
		 	a[j]=p;
		}
		if((strlen(a[i].point)==strlen(a[j].point))&&(strcmp(a[i].point,a[j].point)==0)){
			if(strcmp(a[i].name,a[j].name)==1){
				p=a[j];
				a[j]=a[i];
				a[i]=p;}
		}
	}
	for(int k=0;k<n;k++){
		if(strcmp(a[k].point,"n/a")==0){
			temp++;
		}
	}
	if(n-temp==1){
		printf("%s %s\n",a[n-1].name,a[n-1].num);
		printf("%s %s\n",a[n-1].name,a[n-1].num);
		
		
	}
	if(n-temp>1){
		printf("%s %s\n",a[temp].name,a[temp].num);
		printf("%s %s\n",a[n-1].name,a[n-1].num);	
	}

	
}}
int main()
	{
	int n,temp;
	scanf("%d",&n);
	fflush(stdin);
	for(int i=0;i<n;i++){
	scanf("%s %s %s",a[i].name,a[i].num,a[i].point);
	fflush(stdin);
}
     paixu(a,n);
}
