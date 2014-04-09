#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define sl(x) scanf("%llu",&x)

int count[2000];
unsigned long long num[100000];
unsigned long long price[100000];

int main() {
	unsigned long long n,ans,i;
	sl(n);
	while(n) {
		ans = 0;
		for(i = 0; i < n; i++)
			sl(num[i]);
		for(i = 0; i < n; i++)
			sl(price[i]);
		sort(num , num+n);
		sort(price,price+n,greater<int>());
		for(i = 0; i < n; i++) 
			ans+=num[i] * price[i];
		printf("%llu\n",ans);
		sl(n);
	}
	return 0;
}
