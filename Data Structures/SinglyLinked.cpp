#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
	node* next;
};

class linked_list{
	private :
		node*head,* tail;
	public :
		linked_list()
		{
			head=NULL;
			tail=NULL;
		}
	void add_node(int n)
	{
		node* tmp=new node;
		tmp->data=n;
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
	void print()
	{
		node* temp;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" address : "<<temp<<" address of next : "<<temp->next<<endl;
			temp=temp->next;
		}	
	}
	void insert_in_begin(int n)
	{
		node* a;
		a=head;
		node* temp=new node;
		temp->data=n;
		temp->next=head;
		head=temp;
	}
	void insert_at_end(int n)
	{
		node* a=tail;
		node* temp=new node;
		temp->data=n;
		temp->next=NULL;
		tail->next=temp;
		tail=temp;
	}
	void del(int pos)
	{
		node* temp=head;
		int c=1;
		node*prev;
		while(c<pos)
		{
			temp=temp->next;
			c++;
			if(c==(pos-1))
			{
				prev=temp;
			}
		}
		cout<<prev<<endl;
		prev->next=temp->next;
		delete(temp);
		cout<<prev->next<<endl;
	}
	void insert_at_pos(int pos, int val)
	{
		node* temp=head;
		int c=1;
		node*prev;
		node *a = new node;
		a->data=val;
		while(c<pos)
		{
			temp=temp->next;
			c++;
			if(c==(pos-1))
			{
				prev=temp;
			}
		}
		cout<<prev<<endl;
		a->next=prev->next;
		prev->next=a;
		cout<<prev->next<<endl;
	}
};

int main()
{
	linked_list a;
	a.add_node(6);
	a.add_node(8);
	a.add_node(9);
	a.add_node(10);
	a.insert_in_begin(4);
	a.insert_at_end(14);
	a.insert_at_pos(3,11);
	a.print();
	a.del(3);
	a.print();
	return 0;
}
