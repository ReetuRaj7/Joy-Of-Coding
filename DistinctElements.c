#include<stdio.h>
#include<string.h>

int main(){
	printf("Enter the elements one by one\n");
	int arr[100],ans[100];
	int k = 0;
	memset(arr,0,sizeof(arr));
	for(int i=0;i<8;i++){
		int y;
		scanf("%d",&y);
		arr[y]++;
		if(arr[y] > 1)continue;
		ans[k++] = y;
	}
	for(int i=0;i<k;i++){
		printf("%d ",ans[i]);
	}
	printf("\n");
}
