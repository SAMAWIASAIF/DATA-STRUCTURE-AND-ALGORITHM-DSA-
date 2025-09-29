#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
};
Node *head=NULL;
void insert(int n){
	Node *newNode=new Node();
	newNode->data=n;
	newNode->next=head;
	newNode->prev=NULL;
	if (head!=NULL){
		head->prev=newNode;
	}
	head=newNode;
}
void insertAtEnd(int n){
    Node *newNode = new Node();
    newNode->data = n;
    newNode->next = NULL;

    if (head == NULL){
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void print(){
	cout<<"Data element in linked List:";
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insertAtEnd(1);
	print();
	
}
