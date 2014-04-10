#include <iostream>
#include <cstdio>
#include <cmath>
#define sd(x) scanf("%d",&x)
int main(void){
	int n, t; 
	sd(t);
	while(t--){
		sd(n);
		int top = int(ceil(-0.5 + sqrt(1 + (n << 3))/2.0));
		int u = (top * (top + 1)) >> 1;
		if(top & 1) printf("TERM %d IS %d/%d\n", n, 1 + u - n, n - u + top);
		else printf("TERM %d IS %d/%d\n", n, n - u + top, 1 + u - n);
	}
	return 0;
}
