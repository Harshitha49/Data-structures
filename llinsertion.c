#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*head;
void createlist(int n);
void insertnodebeggining(int data);
void displaylist();
int main()
{
int n,data;
printf("enter the total number of nodes");
scanf("%d",&n);
createlist(n);
printf("\ndata is in the list\n");
displaylist();
printf("\nenter data to insert at the beginning\n");
scanf("%d",&data);
insertnodeatbeginning(data);
printf("\ndata in the list\n");
displaylist();
return 0;
}
void createlist(int n)
{
struct node*newnode,*temp;
int data,i;
head=(struct node*)malloc(sizeof(struct node));
if (head==NULL)
{
printf("unable to allocate memory");
}
else
{
printf("enter data of node: ",i);
scanf("%d",&data);
newnode->data=data;
newnode->next=NULL;
temp->next=newnode;
temp=temp->next;
}
}
printf("single linked list created sucessfully");
}
}
void insertnodeatbeginning(int data)
{
struct node
