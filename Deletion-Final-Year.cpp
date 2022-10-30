#include<iostream>
using namespace std;
struct node{
 int data;
 struct node *next;
}*start;
void display();
void deleteNode(node*& head, int val)
{
 if (head == NULL) {
 return;
 }
 if (head->data == val) {
 node* t = head;
 head = head->next;
delete (t); 
 return;
 }
 deleteNode(head->next, val);
}
int main() {
 int n;
 scanf("%d",&n);
 struct node *temp, *p2;
 start=NULL;
 for(int i=0;i<n;i++){
 temp=(struct node *)malloc(sizeof(struct node));
 scanf("%d", &temp -> data);
 temp->next = NULL;
 if(start == NULL){
 start= temp;
 p2 = temp;
 }
 else
 {
 p2->next=temp;
 p2=p2->next;
 }
 }
 int x;
 cin>>x;
 //display();
 for(int i=0;i<n;i++)
 deleteNode(start,x);
 display();
 return 0;
 cout<<"void del()void create() ";
}
void display() {
 struct node *temp;
 temp = start;
 printf("Linked List:");
 while(temp != NULL)
 {
 printf("->%d",temp->data);
 temp = temp->next;
 } 
}
