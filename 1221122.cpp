
#include <stdio.h>
#include <string.h>
#define n 100
int main ()
{
	char ch[n];
	int a,b,c,d,e,f;
	scanf("%d",&a);
	for( b=0; b<a; b++ ){
		scanf("%s",&ch);
		f=strlen(ch);
		//printf("%d\n",f);
	  if( f==3 ){
	  	if( ch[0]=='S' && ch[1]=='C' && ch[2]=='U' ){
		  printf("YES\n");
		  }
		else {
		  printf("NO\n");
		  }  
		}
	  else {
			for( c=0; c<f; c++ ){
				if( ch[c]=='S' && ch[c+1]=='C' && ch[c+2]=='U')
				break;
		}
					for( d=c; ch[d-1]=='A' ; d-- );
					for( e=c+3; ch[e]=='A' ; e++ );
					if( d==0 && e==f ){
						printf("YES\n"); 
					}else {
						printf("NO\n"); 
					}
               }
			}

		
	return 0;
}
