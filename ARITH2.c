#include <stdio.h>
#include <ctype.h>
int main(void) {
	int i,opnum=1;
	char op=' ';
	long long a,b;
	scanf("%d",&i);
	while(i--){
		while(op!='='){
			if(opnum) 
				{scanf("%lld",&a);opnum=0;}
			scanf("%c",&op);
			if(op==' '||op=='=')
				continue;
			
			scanf("%lld",&b);
			
			switch(op){
				case '/':a=a/b;op=' ';break;
				case '*':a=a*b;op=' ';break;
				case '-':a=a-b;op=' ';break;
				case '+':a=a+b;op=' ';break;
			}
		}

		printf("%lld\n",a);
		op=' ';
		opnum=1;
		a=0;
	}
	return 0;
}
