#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int info;
	Node *prev,*next;
};

struct Node *start=NULL;

void insert_node_beg(int n)
{
	Node *t=new Node;
	t->info=n;
	t->next=NULL;
	t->prev=NULL;
	if(start==NULL)
	{
		start=t;
	}
	else
	{
		start->prev=t;
		t->next=start;
		start=t;
	}
}

void display()
{
	Node *tmp=new Node;
	tmp=start;
	while(tmp->next!=NULL)
	{
		cout<<tmp->info<<"\n";
		tmp=tmp->next;
	}
	cout<<tmp->info<<"\n";
	
	//in reverse order
	while(tmp->prev!=NULL)
	{
		cout<<tmp->info<<"\n";
		tmp=tmp->prev;
	}
	cout<<tmp->info;
}

void delete_first_node()
{
Node *t=new Node;
t=start;
start=start->next;
start->prev=NULL;
free(t);	
}

main()
{
insert_node_beg(5);
insert_node_beg(4);
insert_node_beg(3);
insert_node_beg(2);
insert_node_beg(1);
//delete_first_node();
display();
}
