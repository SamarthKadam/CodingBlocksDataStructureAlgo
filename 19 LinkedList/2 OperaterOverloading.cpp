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
int main()
{

	Node* head=NULL;
	insertHead(head,4);
	insertHead(head,5);
	insertHead(head,3);
	cout<<head;
	return 0;
}

//then we have reversing and finding the mid point and kth node from the end of the list those are pretty standard and easy problems