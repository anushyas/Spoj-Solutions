#include <stdio.h>

int main(void) {
	long long i,s,t1,t3,tl3,n,d;
	int j;
	scanf("%lld",&i);
	while(i--){
		scanf("%lld %lld %lld",&t3,&tl3,&s);
		n=(2*s)/(tl3+t3);
		d=(tl3-t3)/(n-5);
		t1=t3-2*d;
		printf("%lld\n",n);
		printf("%lld",t1);
		t1+=d;
		for(j=2;j<=n;j++,t1+=d)
		printf(" %lld",t1);
		printf("\n");
	}
	return 0;			
} 
