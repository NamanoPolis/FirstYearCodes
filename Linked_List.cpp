#include<iostream>
#include<stdlib.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

class List
{
	public:
	Node *head=new Node;
	
	List()
	{
		head=NULL;
	}

	void Insert(int x)
	{
		Node*temp=new Node;
		temp->data=x;
		temp->next=NULL;
		if(head==NULL)
			head=temp;
		else{
		int ch2;
		cout<<"Enter the position of insertion:\n1.Beginning\n2.End\n3.Other\nChoice:";
		cin>>ch2;
		Node*temp2=new Node;
		temp2=head;
		if(head!=NULL)
		{
		switch(ch2)
		{
			case 1://beginning
				temp->next=head;
				head=temp;
				break;
			case 2://end
				while(temp2->next!=NULL)
					temp2=temp2->next;
				temp2->next=temp;
				break;
			case 3://anywhere between
				int k;
				cout<<"\nEnter the number to insert after:";
				cin>>k;
				while(temp2->data!=k)
					temp2=temp2->next;
				if(temp2->data==k)
				{
					temp->next=temp2->next;
					temp2->next=temp;
				}
				break;			
		}//switch
		}//if
		else
		{
		head=temp;
		head->next=NULL;
		}//else
		cout<<"\n...Done\n";}
	}
	
	void Display()
	{
		Node *temp2=head;
		while(temp2!=NULL)
		{
			cout<<temp2->data<<"\n";
			temp2=temp2->next;
		}
		cout<<"...Done";
	}
	
	void Delete(int x)
	{
		Node *temp2=new Node;
		temp2=head;
		if(head->data==x)
			head=head->next;
		else//second to second last
			{
				while(temp2->next!=NULL&&temp2->data!=x)
				{
					if(temp2->next->data==x)
						temp2->next=temp2->next->next;
					temp2=temp2->next;
				}
			}//else
	}
};

int main()
{
	int ch=4;
	List obj;
	cout<<"\nEnter choice:\n1.Insertion\n2.Deletion\n3.Show\n4.End\n";
	cin>>ch;
	do{
	switch(ch)
	{
		case 1://Inserting
			cout<<"\nEnter a number to insert:";
			int in;
			cin>>in;
			obj.Insert(in);
			break;
		case 2://Deletion
			cout<<"\nEnter number to delete:";
			int de;
			cin>>de;
			obj.Delete(de);
			break;
		case 3://Display
			obj.Display();
			break;
		case 4://Exit
			break;
	};
	cout<<"Enter choice:\n1.Insertion\n2.Deletion\n3.Show\n4.End\n";
	cin>>ch;
	}while(ch!=4);
	return 0;
}
