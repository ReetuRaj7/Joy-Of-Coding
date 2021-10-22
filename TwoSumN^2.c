#include<stdio.h>


int main(){
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n+1];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the target sum\n");
	int target;
	scanf("%d",&target);
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j] == target){
				printf("Sum found!\n");
				printf("Positions are -> %d %d\n",i+1,j+1);
				return 0;
			}
		}
	}
	printf("Sum not found\n");
}
		
