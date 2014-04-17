#include <iostream>
using namespace std;
long josephus(long n, long k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position 
       k%n + 1 as position 1 */
    return (josephus(n - 1, ++k) + (k-1)) % n + 1;
}
int main() {
	// your code goes here
	int t;
	long n;
	scanf("%d",&t);
	while(t--){
		scanf("%ld",&n);
		printf("%ld\n",josephus(n,0));
	}
	return 0;
}
