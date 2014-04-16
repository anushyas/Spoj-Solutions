#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int dp[1005][2][1005];
int n;
char track[1005];
int min(int a,int b){
	if(a<=b)
		return a;
	else
		return b;
}
int findMin(int i, int trackId, int bullets){
    if(i==n-1){	//end point of the race
        if(trackId==0)	//on track
            return 0;
        else return 2;	//off track
    }
    if(dp[i][trackId][bullets]!=-1)
        return dp[i][trackId][bullets]; //return the answer if already found
    int minn=(int)1e5;
 
    //move forward
    if(trackId == 0 && track[i+1]!='#')
        minn = min(minn, 1+findMin(i+1,0,bullets));
 
    //shoot and move forward
    if(trackId == 0 && bullets>0)
        minn = min(minn, 1+findMin(i+1,0,bullets-1));
 
    //move out of the track
    if(trackId == 0)
        minn = min(minn,4+findMin(i+1,1,bullets));
 
    //movement in off track
    if(trackId == 1)
        minn = min(minn, 2+findMin(i+1,1,bullets));
 
    //off track to track
    if(trackId == 1 && track[i]!='#')
        minn = min(minn,2+findMin(i,0,bullets));   
 
    return dp[i][trackId][bullets]=minn;
}
int main() {
	// your code goes here
	int t,b,i;
	char s,e;
 
	scanf("%d",&t);
	while(t--){
		memset(dp,-1,sizeof(dp));
		memset(track,'\0',sizeof(track));
		scanf("%d%d",&n,&b);
		scanf("%s",track);
		printf("%d\n",findMin(0,0,b));
		}
	return 0;
}
