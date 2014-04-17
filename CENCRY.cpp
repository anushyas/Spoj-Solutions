#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int occurence[26];
char alpha[22]="bcdfghjklmnpqrstvwxyz";
char vowel[6]="aeiou";
char msg[50001];
int vowelfirstpos(char c){
		for(int i=0;i<=4;i++)
			if(vowel[i]==c)
				return i;
}
int alphafirstpos(char c){
		for(int i=0;i<=20;i++)
			if(alpha[i]==c)
				return i;
}

int main() {
	int t;
	int msgc,vpos,apos;
	int vencr,aencr;
	scanf("%d",&t);
	while(t--){
		memset(occurence,0,sizeof(occurence));
		scanf("%s",msg);
		for(int i=0;msg[i];i++){
			msgc=msg[i]-'a';
			occurence[msgc]++;
			if(msg[i]=='a'||msg[i]=='e'||msg[i]=='i'||msg[i]=='o'||msg[i]=='u'){
				vpos=vowelfirstpos(msg[i]);
				vencr=(vpos+5*(occurence[msgc]-1))%21;
				printf("%c",alpha[vencr]); 
			}
			else{
				apos=alphafirstpos(msg[i]);
				aencr=(apos+21*(occurence[msgc]-1))%5;
				printf("%c",vowel[aencr]);
			}
		}
		printf("\n");
	}		
	return 0;
}
