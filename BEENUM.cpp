#include <iostream>
using namespace std;

int main() {
	long long int n,cells=1,i=0;
	scanf("%lld",&n);
	while(n!=-1)
	{
		for(cells=1;cells<=n;cells+=6*i){
			if(cells==n){
				printf("Y\n");
				break;
			}
			i++;
		}
		if(cells>n)
		printf("N\n");
		scanf("%lld",&n);
		i=0;
	}
	return 0;
}
