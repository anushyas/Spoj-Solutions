//hard dp

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <string>
#include <cmath>
 
using namespace std;

int countsubseqways(string str,string seq,int start,int end){
	int s=start-1,i,j;
	int e=end-1;
	int M=str.size(),N=end-start+1;
	int dp[M+1][N+1];
	for(i=0;i<=M;i++)
		dp[i][0]=1; //subsequence of zero length
	for(j=1;j<=N;j++)
		dp[0][j]=0; //suint main()
{
	int n,i;
	
	
	
	while(cin>>n&&n){
		//cout<<n<<endl;
		map<string,bool> insig;
		stringstream ss;
		for(i=0;i<n;i++)
		{
			string s;
			cin>>s;
			insig[s]=true;
		}
		string s;
		getline(cin,s);
		while(getline(cin,s) && s.compare("LAST CASE")){
			//cout<<s<<endl;
			istringstream ss( s );
			string acr,tempacr,temp;
			ss>>acr;
			tempacr=acr;
			for(i=0;i<acr.size();i++)
				acr[i]=tolower(acr[i]);
			vector<string> v;
			while(ss>>temp){
				if(insig.find(temp)==insig.end())
					v.push_back(temp);
			}
			ss.str(std::string());
			int ways=dpcalculate(v,acr);
			if(ways==0)
				cout<<tempacr<<" is not a valid abbreviation"<<endl;
			else
				cout<<tempacr<<" can be formed in "<<ways<<" ways"<<endl;
		}
	}
    return 0;
}bsequence non empty sequence empty
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			dp[i][j]=dp[i-1][j]; //ignore first string char
			if(str[M-i]==seq[e-j+1])
				dp[i][j]+=dp[i-1][j-1]; //match 1st chars recur for rest
		}
	}
	
	//cout<<dp[M][N];
	return dp[M][N];
}	
int dpcalculate(vector<string> &v, string acr){
	int i,j,k,M,N;
	M=v.size();
	N=acr.size();
	int dp[M+1][N+1];
	
	for(i=0;i<=M;i++)
		for(j=0;j<=N;j++)
			dp[i][j]=0;
	dp[0][0]=1;
	for(i=1;i<=M;i++)
		dp[i][0]=0;
	for(i=1;i<=N;i++)
		dp[0][i]=0;
	for(i=0;i<M;i++)
	{
		//cout<<v[i]<<endl;
		for(j=0;j<=N;j++)
		{
			for(k=j+1;k<=N;k++)
				//cout<<"seq "<<acr[k-1]<<endl;
				dp[i+1][k]+=countsubseqways(v[i],acr,j+1,k)*dp[i][j];
		}
	}
	/*for(i=0;i<=M;i++){
		for(j=0;j<=N;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/	
	return dp[M][N];
}
