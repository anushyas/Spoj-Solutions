#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;
long firstkmax(long a[],long start,long k){
	long int max=LONG_MIN;
	for(long int i=start;i<=k;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}	
int main() {
	long int n,k,i,max;
	scanf("%ld",&n);
	long int a[n];
	for(i=1;i<=n;i++)
		scanf("%ld",&a[i]);
	scanf("%ld",&k);
	max=firstkmax(a,1,k);
	printf("%ld",max);
	for(i=k+1;i<=n;i++){
		if(a[i-k]!=max){
			if(a[i]>max){
				max=a[i];
				printf(" %ld",max);
			}
			else{
				printf(" %ld",max);
			}
		}
		else{
			max=firstkmax(a,i-k+1,i);
			printf(" %ld",max);
		}
	}
	printf("\n");
	return 0;
}
