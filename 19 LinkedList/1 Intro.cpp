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

void insertTail(Node*&ptr,int data)
{

	Node *nc=new Node(data);
	Node *temp=ptr;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=nc;
}

void insertInMiddle(Node*&ptr,int data,int pos)
{
	int count=1;
	Node* temp=ptr;

	while(count!=pos-1)
	{
		temp=temp->next;
		count++;
	}

	if(count==pos)
	{
		insertHead(ptr,data);
	}
	else{

		Node *im=new Node(data);
		im->next=temp->next;
		temp->next=im;
	}
}


void deleteHead(Node*&ptr)
{

	if(ptr==NULL)
	{
		return;
	}

	Node* temp=ptr;
	ptr=ptr->next;

	delete temp;

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
int main()
{

	Node* head=NULL;
	insertHead(head,4);
	insertHead(head,5);
	insertHead(head,3);
	insertTail(head,99);
	insertInMiddle(head,69,5);
	deleteHead(head);
	display(head);

	//If we had passed the display function with passbyreference we wouldn't be getting list displayed 2 times


	return 0;
}

//Even search operations can be included,linear one, and recursive one