#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#define s(a,b) scanf("%s%s",a,b)
#define s2(c) printf("%c",c)

using namespace std;
int main() {
	char a[1001];
	char b[1001];
	int c[26],i;
	
	while(s(a,b)!=EOF){
		memset(c,0,sizeof(c));
		for(i=0;a[i];i++){
			c[a[i] - 'a']+=1;
		}
		sort(b,b+strlen(b));
		for(i=0;b[i];i++){
			if(c[b[i] - 'a']>0){
				c[b[i] - 'a']-=1;
				printf("%c",b[i]);
				
			}
		}
		

		printf("\n");
		
	}
	return 0;
}
