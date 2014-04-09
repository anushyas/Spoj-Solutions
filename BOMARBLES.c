#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	long marbles;
	scanf("%d",&n);
	while(n){
		if(n==1)
			marbles=5;
		else
			marbles=5+4*(n-1)+3*((n*(n-1))/2);
		printf("%ld\n",marbles);
		scanf("%d",&n);
	}
	return 0;
}

