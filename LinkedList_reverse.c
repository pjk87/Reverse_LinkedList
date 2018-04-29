#include <stdio.h>
#include <stdlib.h> 
typedef struct node{
    
    int data;
    struct node *next;
}Node;

Node *Top=NULL;
Node *Bottom=NULL;
void enque(Node *s,int d){
    
    Node *temp=(Node*)malloc(sizeof(Node));
    temp->data=d;
    temp->next=NULL;
    if(Top==NULL){
        Bottom=temp;
        Top=temp;
        
    }else{
        Bottom->next=temp;
        Bottom=temp;
        
    }
    
    
}


int main() {
	
	int n,i;
	Node *st;
	Node *prev,*curr,*next1;
    
    for(i=0;i<10;i++){
        
        enque(st,i);
    }
Node *temp;
temp=Top;
while(temp){
    
    printf("%d\n",temp->data);
    temp=temp->next;
    
}
prev=NULL;
curr=Top;
next1=Top->next;
while(next1){
    
    curr->next=prev;
    prev=curr;
    curr=next1;
    next1=next1->next;
    
}
curr->next=prev;

temp=Bottom;
printf("+++++++++\n");
while(temp){
    
    printf("%d\n",temp->data);
    temp=temp->next;
    
}

	return 0;
}