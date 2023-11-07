#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*head,*tail=NULL;
void create(int item)
{
struct node*newnode=(struct node*)malloc(sizeof(newnode));
newnode->data=item;
newnode->next=NULL;
X=head;
head=newnode;


