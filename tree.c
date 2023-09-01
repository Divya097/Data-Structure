#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	struct node*left;
	int data;
	struct node*right;
}*root=NULL,*newnode;



struct node*insert(struct node*root,int ele){
	if(root==NULL){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->left=NULL;
		newnode->data=ele;
		newnode->right=NULL;
	    return(newnode);
	}
	else if(ele<root->data){
	    root->left=insert(root->left,ele);
	}
	else if(ele>root->data){
	     root->right=insert(root->right,ele);
	 }
    return(root);
}


void inorder(struct node*root)
{
	if(root!=NULL){
	   inorder(root->left);
	   printf("%d\t",root->data);
	   inorder(root->right);
}
}


void preorder(struct node*root){
	if(root!=NULL){
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}


void postorder(struct node*root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}



int main(){
	int cho,ele;
	do{
		printf("***MAIN MENU***");
		printf("\n1.INSERT\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT");
		printf("Enter the choice:");
		scanf("%d",&cho);
	switch(cho){
	    case 1:	printf("Enter the element:");
				scanf("%d",&ele);
				root=insert(root,ele);
				break;
	    case 2:inorder(root);break;
	    case 3:preorder(root);break;
	    case 4:postorder(root);break;
	    case 5:exit(0);
	    default:printf("Enter a number between 1 and 5");
	}
}
while(cho>=1 && cho<=5);
}
