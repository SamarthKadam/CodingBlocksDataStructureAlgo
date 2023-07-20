#include<iostream>
using namespace std;
class Node{

public:
	int data;
	Node* next;

	Node(int d)
	{
		data=d;
		next=NULL;
	}

};
void insertHead(Node*&ptr,int data)
{
	if(ptr==NULL)
	{
		ptr=new Node(data);
	}
	else{
	Node *temp=new Node(data);
	temp->next=ptr;
	ptr=temp;
   }
}
void display(Node*&ptr)
{

Node *temp=ptr;
while(temp!=NULL)
{
	cout<<temp->data<<endl;
	temp=temp->next;
}
}
void operator<<(ostream &os,Node* head)
{
	display(head);
	return;
}
Node* merge(Node* a,Node* b)
{

	if(a==NULL)
	{
		return b;
	}
	if(b==NULL)
	{
		return a;
	}

	Node* c;

	if(a->data<b->data)
	{
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}
int main()
{

	Node* head=NULL;
	insertHead(head,4);
	insertHead(head,5);
	insertHead(head,3);

	Node* head2=NULL;
	insertHead(head2,19);
	insertHead(head2,18);
	insertHead(head2,17);


  Node*ptr=merge(head,head2);
	cout<<ptr;
	return 0;
}