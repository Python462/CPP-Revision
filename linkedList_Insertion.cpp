#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

class linked_list
{
	private:
		Node *head,*tail;
	public:
		linked_list()
		{
			head=NULL;
			tail=NULL;
		}	
		
	void Add_Node_last(int new_data)
	{
		Node *tmp=new Node;
		tmp->data=new_data;
		tmp->next=NULL;	
		
		if(head==NULL)
		{
			head=tmp;
			tail=tmp;
		}
		
		else
		{
			tail->next=tmp;
			tail=tail->next;
		}
	}	
	
	void Add_Node_start(int n)
	{
		Node *temp=new Node;
		temp->data=n;
		temp->next=head;
		head=temp;
	}
	
	void Add_Node_position(int n,int pos)
	{
		Node *temp=new Node;
		Node *newData=new Node;
		newData->data=n;
		temp=head;
		for(int i=0;i<pos;i++)
		{
			temp=temp->next;
		}
		newData->next=temp->next;
		temp->next=newData;
	}
	
	void delete_beg()
	{
	head=head->next;
	cout<<head->data<<"\n";
	}
	
	void delete_end()
	{
		Node *temp=head;
		//temp=head;
		while(temp->next->next!=NULL)
		{
		temp=temp->next;	
		}	
		temp->next=NULL;
	}
	
	void deletes_pos(int pos)
	{
		Node *temp=new Node;
		temp=head;
		for(int i=0;i<pos;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
	}
	
	void display()
	{
	   Node *temp = head;
       while(temp!=NULL)
       {
    	cout<<temp->data<<"\n";
    	temp=temp->next;
	   }
	   cout<<"NULL";
    }
	/*	Node *gethead()
		{
			return head;
		} 
		
	void display1(Node *head)
	{
        if(head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << endl;
            display(head->next);
        }
    }*/
    
};

main()
{
linked_list a;
a.Add_Node_last(2);
a.Add_Node_last(3);
a.Add_Node_last(4);
a.Add_Node_last(6);
a.Add_Node_start(1);
a.Add_Node_position(5,3);
//a.deletes_pos(3);
a.delete_beg();
//a.delete_end();
//a.display1(a.gethead());	
a.display();
}
