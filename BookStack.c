#include<stdio.h>
#include<stdlib.h>

struct Books{
	int book_id;
	char book_name[100];
	char book_author[100];
	float book_price;
};

typedef struct Books book;

void insert(book *arr,int *top,book val){
	if(4 == *top){
		printf("Stack overflow\n");
		return;
	}
	arr[++(*top)] = val;
	printf("Item added\n");
}
void display(book *arr,int top){
	if(top == -1){
		printf("Stack underflow\n");
		return;
	}
	printf("The list of books in stack are->\n");
	int temp = top+1;
	while(temp){
		printf("Book name is %s\n",arr[temp-1].book_name);
		temp--;
	}
	
}

void remoe(book *arr,int *top){
	if(*top == -1){
		printf("Stack underflow\n");
		return;
	}
	book val = arr[(*top)--];
	printf("The book to be removed is %s\n",val.book_name);
}
		
int main(){
	book *arr;
	arr = (book*)malloc(sizeof(book)*6);
	
	int top = -1;
	while(1){
		printf("1.Insert\n2.Remove\n3.Display\n4.Exit\n");
		printf("Enter your choice\n");x
		int ch;
		scanf("%d",&ch);
		switch(ch){
			case 1:	printf("Enter the values\n");
					book val; scanf("%d%s%s%f",&val.book_id,val.book_name,val.book_author,&val.book_price);
					insert(arr,&top,val);
					break;
			case 2: remoe(arr,&top);
					break;
			case 3: display(arr,top);
					break;
			case 4:	exit(0);
		}
	}
}
