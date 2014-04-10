#include <iostream>
#include <cstdio>
#include <cstdlib>
#define s(x) scanf("%lld",&x)
using namespace std;

int main() {
	long long t,n,i,eachone;
	long long sum;
	s(t);
	while(t--){
		sum=0;
		s(n);
		for(i=0;i<n;i++){
			s(eachone);
			sum+=eachone;
			sum%=n;
		}
		if(sum)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
