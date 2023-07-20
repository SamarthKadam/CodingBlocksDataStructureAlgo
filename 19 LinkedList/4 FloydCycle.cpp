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


bool detectLoop(Node*ptr)
{
	Node* t1=ptr;
	Node* t2=ptr;
	//consider having ll of len greater then 3


	while(t2 && t2->next)
	{
		t1=t1->next;
		t2=t2->next->next;

		if(t1==t2)
			return true;

	}

	return false;


	//understand the algor

}
int main()
{

	Node* head=NULL;
	insertHead(head,4);
	insertHead(head,5);
	insertHead(head,3);
	display(head);
	return 0;
}
