#include <stdio.h>
int reversDigits(int num)
{
   	int rev_num = 0;
   	while(num > 0)
   	{
       	rev_num = rev_num*10 + num%10;
       	num = num/10;
   	}
   	return rev_num;
}
int main(void) {
	// your code goes here
	int N,num1,num2,sum;
	scanf("%d",&N);
	while(N){
		scanf("%d",&num1);
		scanf("%d",&num2);
		sum=reversDigits(num1)+reversDigits(num2);
		printf("%d\n",reversDigits(sum));
		N--;
	}
	return 0;
}
