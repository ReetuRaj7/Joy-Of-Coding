#include<stdio.h>


int main(){
	int x;
	printf("ENTER THE NUMBER OF ELEMENTS\n");
	scanf("%d",&x);
	
	int arr[100010];
	for (int i=0;i<100000;i++)
		arr[i] = 0;
	int flag = 0,ans;
	for (int i=0;i<x;i++){
		int y;
		scanf("%d",&y);
		arr[y]++;
		if(arr[y]>1){
			flag = 1;
			ans = arr[y];
		}
	}
	if(flag == 1){
		printf("DUPLICATE ELEMENT EXIST %d TIMES\n",ans);
	}else{
		printf("NO DUPLICATES\n");
	}
	return 0;
}
	
