#include<stdio.h>
#include<stdlib.h>
struct stack{
int data;
struct stack*next;
};
struct stack*top;
void push(int data){
struct stack*new=(struct stack*)malloc(sizeof(struct stack));
new->data=data;
new->next=NULL;
if(top==NULL){
top=new;
}
else{
new->next=top;
top=new;}}
void pop(){
if(top==NULL){
printf("stack underflow\n");}
else{
printf("popped element: %d",top->data);
struct stack*temp;
temp=top->next;
top->next=NULL;
top=temp;}}
void display(){
struct stack*temp=top;
while(temp!=NULL){
printf("%5d\t",temp->data);
temp=temp->next;}}
void main(){
int i=1;
printf("\n1:push \n2:pop \n3:display \n4:exit");
while(i!=0){
int choice;
printf("\n enter the choice:");
scanf("%d",&choice);
switch(choice){
case 1: int data;
printf("enter the item: ");
scanf("%d",&data);
push(data);
break;
case 2: pop();
break;
case 3: display();
break;
case 4: i=0;
break;
default:printf("enter correct value: ");
return;
}}}



