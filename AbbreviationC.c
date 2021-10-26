#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char s[1000];
	char answer[100];
	int k = 0;
	printf("Enter the string you want to abbreviate\n");
	scanf("%[^\n]%*c",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i] < 97 && s[i] != ' ')
			answer[k++] = s[i];
	}
	printf("The abbreviations is %s\n",answer);
	return 0;
}
