#include<stdio.h>


int main(){
	int x;
	printf("ENTER THE NUMBER OF ELEMENTS\n");
	scanf("%d",&x);
	
	int arr[100010];
	for (int i=0;i<100000;i++)
		arr[i] = 0;
	int flag = 0;
	for (int i=0;i<x;i++){
		int y;
		scanf("%d",&y);
		arr[y]++;
	}
	printf("FREQUENCY ARRAY\n");
	for(int i=0;i<100000;i++){
		if(arr[i] != 0){
			printf("%d -> %d\n",i,arr[i]);
		}
	}
	return 0;
	
}
