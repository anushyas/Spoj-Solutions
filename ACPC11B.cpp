#include <iostream>
using namespace std;
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <climits>
int cmp (int *num1, int *num2)
{
  if (*num1 < *num2) return -1;
  else if (*num1 == *num2) return 0;
  return 1;
} 
int main()
{
    int T,t,N,M,i,j,nm,mn;
	long sub = LONG_MAX;
    int n[1005];
    int m[1005];
    scanf("%d",&T);
    for(t = 0; t < T; t++)
    {
        sub = LONG_MAX;
        scanf("%d",&N);
        for(i = 0; i< N; i++)
            scanf("%d",&n[i]);
        scanf("%d",&M);
		qsort (n,N,sizeof(int),
                    (int (*)(const void *, const void *)) cmp);

		for(i = 0; i< M; i++)
            scanf("%d",&m[i]);
		qsort (m,M,sizeof(int),
                    (int (*)(const void *, const void *)) cmp);
		i=0;j=0;
		while(i<N&&j<M){
			nm=n[i]-m[j];
			mn=m[j]-n[i];
			//printf("%d %d\n",n[i],m[j]);
			if(n[i]==m[j])
			{sub=0;break;}

			else if(nm<sub&&nm>=0)
			{
				sub=nm;
				j++;
			}
			else if(mn<sub&&mn>=0)
			{
				sub=mn;
				i++;
			}
			else if(n[i]>m[j])
			{j++;}
			else if(n[i]<m[j])
			{i++;}

		}
		printf("%d\n",sub);
    }


	// your code goes here
	return 0;
}

