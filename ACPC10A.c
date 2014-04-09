#include <stdio.h>

int main(void) {
	int firstterm,secterm,thirdterm,diff;
	while(1){
		scanf("%d",&firstterm);
		scanf("%d",§erm);
		scanf("%d",&thirdterm);
		if(firstterm==0&§erm==0&&thirdterm==0)
			break;
		diff=secterm-firstterm;
		if(diff==thirdterm-secterm)
			{printf("%s %d\n","AP",thirdterm+diff);continue;}
		diff=secterm/firstterm;
		if(diff==thirdterm/secterm)
			{printf("%s %d\n","GP",thirdterm*diff);continue;}
		}
		
	return 0;
}
