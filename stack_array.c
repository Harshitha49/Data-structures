#include<stdio.h>
int a[5];
int top=-1;
void push(int value){
if(top==5){
printf("stack overflow\n");
}
else{
top++;
a[top]=value;}}
void pop(){
if(top==-1){
printf("stack underflow\n");}
else{
printf("Deleted element:%d\n",a[top]);
top--;}}
void display(){
if(top==-1){
printf("stack is empty\n");}
else{
for(int i=0;i<=top;i++){
printf("%d\n",a[i]);}
printf("\n");}}
int main(){
int choice;
int i=1;
printf("\n1.push\n2.pop\n3.display\n4.Quit\n");
while(i!=0){
printf("enter the choice:");
scanf("%d",&choice);
switch(choice){
case 1:{
	int value;
	printf("enter the value to push:");
	scanf("%d",&value);
	push(value);
	break;}
case 2:pop();
	break;
case 3:display();
	break;
case 4:printf("exiting the program");
	i=0;
	break;
default:printf("Invalid choice");
return 0;
}}}

