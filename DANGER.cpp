#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int checkjosephus(int n){
	int pow2=1;
	while(pow2<=n){
		pow2=pow2<<1;
	}
	pow2=pow2>>1;
	if(n==1)
		return 1;
	else if(pow2==n)
		return 1;
	else
		return ((n-pow2)*2+1);
}
int main() {
	int n=0,sol;
	int x,y,z;
	char s[6];
	scanf("%s",s);
	x=s[0]-'0';
	y=s[1]-'0';
	z=s[3]-'0';
	while((x!=0)||(y!=0)||(z!=0)){
		n=x;
		n=(n*10)+y;
		n=(n*(pow(10,z)));
		sol=checkjosephus(n);
		printf("%d\n",sol);
		scanf("%s",s);
		x=s[0]-'0';
		y=s[1]-'0';
		z=s[3]-'0';
	}
	return 0;
}
