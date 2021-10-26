#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char s[1000],t[1000];
	printf("Enter the string 1\n");
	scanf("%[^\n]%*c",s);
	printf("Enter the string 2\n");
	scanf("%[^\n]%*c",t);
	
	if(strlen(s) != strlen(t)){
		printf("Not a rotation\n");
		return 0;
	}
	for(int i=0;i<strlen(t);i++){
		int j,k=i;
		for(j=0;j<strlen(s);j++){
			if(s[k] == t[j])k++;
			else break;
			k = k % strlen(s);
		}
		if(j == strlen(s)){
			printf("Yes!!!It is a rotation \n");
			return 0;
		}
	}
	 
	printf("Not a rotation\n");
}
		
