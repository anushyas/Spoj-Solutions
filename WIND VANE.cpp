#include <iostream>
using namespace std;
#include <cstdio>
#include <cstdlib>
#define s(x) scanf("%d",&x)
#define sc(x) scanf("%c",&x)
char clockwise[] = {'0','0','0','0','S','0','0','0','0','0','0','0','0','E','0','0','0','0','W','0','0','0','N','0','0','0'};
char anticlockwise[] = {'0','0','0','0','N','0','0','0','0','0','0','0','0','W','0','0','0','0','E','0','0','0','S','0','0','0'};

char city[2000][2000];		
int main() {
	int m,n,c,x1,x2,y1,y2,x,y,d;
	char command,ch;
	while(scanf("%d %d",&m,&n)==2){
	for(int i = 0; i < m;i++)
			scanf("%s",city[i]);

	
	s(c);getchar();
	while(c--){
		sc(command);
		if(command=='C'){
			s(x1);s(y1);s(x2);s(y2);s(d);
			for(int i=x1-1;i<x2;i++)
				for(int j=y1-1;j<y2;j++){
					if(d)	city[i][j] = anticlockwise[city[i][j] - 'A'];
					else 	city[i][j] = clockwise[city[i][j] - 'A'];
				}
		}
		if(command=='D'){
			s(x);s(y);
			printf("%c\n",city[x-1][y-1]);
		}
		getchar();
	} 
}
	return 0;
}
