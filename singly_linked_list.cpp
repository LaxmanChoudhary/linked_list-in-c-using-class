#include<iostream>
using namespace std;

//linked list with class

class Node
{
 public:
	int data;
	Node *next;
};

class linked_list
{
 private:
	Node *head;
  	
 public:
 	linked_list()
 	{
 		head = NULL;
 	}
 	
 	~linked_list() {};
 	void append_to(int);
 	void delete_to();
 	void display();
};

void linked_list :: append_to(int x)
{
	Node *cur = new Node;
	cur->data = x;
	cur->next = NULL;
	if(head == NULL)
	{
		head = cur;
		head->next = NULL;
	}
	else
	{
		Node *temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = cur;
	}
}

void linked_list :: display()
{
	if(head == NULL)
	{
		cout<<"No elements to display";
	}
	else
	{
		Node *temp = head;
		while(temp != NULL)
		{
			cout<<temp->data<<endl;
			temp = temp->next;
		}
	}
}

int main()
{
	linked_list root;
	root.append_to(6);
	root.append_to(9);
	root.append_to(10);
	root.display();
	return 0;	
}
