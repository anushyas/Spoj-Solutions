#include <cstdio>
#include <cmath>
#define sd(x) scanf("%d",&x)

int gcd(int a,int b) {
	int c;
	while(b != 0) {
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}

int findfactors(int a) {
	int count = 0;
	int sqr = (int) sqrt(a);
	for(int i = 1; i <= sqr; i++) {
		if(a % i == 0) count+=2 ;
		if( i * i == a) count--;
	}
	return count;
}
int main() {
	int t,a,b;
	sd(t);
	while(t--) {
		sd(a);sd(b);
		printf("%d\n",(findfactors(gcd(a,b))));
	}
	return 0;
}
