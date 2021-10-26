#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char s[10000];
	printf("Enter the string\n");
	scanf("%[^\n]%*c",s);
	int freq[10001];
	memset(freq,0,sizeof freq);
	for(int i=0;i<strlen(s);i++){
		if(s[i] != ' '){
			freq[s[i]-'a']++;
		}
	}
	char val;
	int answer = -1;
	for(int i=0;i<26;i++){
		if(freq[i] > answer){
			answer = freq[i];
			val = 'a'+i;
		}
	}
	printf("The letter with the most occurances is %c with %d counts\n",val,answer);

	return 0;
}
	
