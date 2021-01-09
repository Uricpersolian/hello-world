#include<stdio.h>
#include<string.h>
int main(){
	char str1[200] = {'\0'};
	int M,i,a;
	
	scanf ("%d\n",&M);
	
	fgets(str1,200,stdin);
	str1[strlen(str1)-1]='\0';
	
	char str2[M]= {'\0'};
	
	for(i=0;i<M;i++){
		str2[i] = str1[strlen(str1)-1-(M-i)];
	}
	
	char str3[200] = {'\0'};
	
	strcpy(str3,str1);
	
	for(a=1;a<=M;a++){
		str3[strlen(str3)-1-a] = '\0';
	}
	strcat (str2,str3);
	printf(str2);
	return 0;
	
	
}

