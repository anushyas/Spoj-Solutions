#include <iostream>
#include <cstdio>
#include <cstdlib>
#define s(x) scanf("%d",&x)
using namespace std;
int compare(const void *a,const void *b){
	return (*(int *)a - *(int *)b);
}
int main() {
	int n,i;
	long long mean,sum,count;
	s(n);
	while(n!=-1){
		sum=0;count=0;
		int a[n];
		for(i=0;i<n;i++){
			s(a[i]);
			sum+=a[i];
		}
		qsort(a,n,sizeof(int),compare);
		if(sum%n){
			printf("-1\n");
			s(n);
			continue;
		}
		mean=sum/n;
		for(i=0;i<n,a[i]<mean;i++){			
			count+=mean-a[i];
		}
		printf("%lld\n",count);
		s(n);
	}
	return 0;
}
