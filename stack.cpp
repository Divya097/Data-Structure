#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stk[size];
void push(){
	int ele;
	printf("Enter an element:");
	scanf("%d",&ele);
	if(top==size-1)
		printf("Stack is full");
	else
	{
		top=top+1;
		stk[top]=ele;
	}
}
void pop(){
	int ele;
	if(top==-1)
		printf("Empty stack");
	else
		ele=stk[top];
		top=top-1;
		printf("Element %d deleted",ele);
}
void peek(){
	if(top==-1)
	printf("stack empty");
	else
	printf("Top of stack=%d",stk[top]);
}
void display(){
	int i;
	if(top==-1)
	printf("Stack is empty");
	else
	
	for(i=top;i>=0;i--){
	printf("%d",stk[i]);
}
}

int main(){
	int cho;
	do{
		printf("****MAIN MENU****");
		printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT");
		printf("Enter your choice:");
		scanf("%d",&cho);
		switch(cho){
			case 1:push();break;
			case 2:pop();break;
			case 3:peek();break;
			case 4:display();break;
			case 5:exit(0);
			default:printf("Enter number 1 to 5");
		}
	}
	while(cho>=0 && cho<=5);
	
		}
		



