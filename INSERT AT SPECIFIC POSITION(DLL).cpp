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
void insertAtPosition(int n, int pos) {
    Node* newNode = new Node();
    newNode->data = n;

    
    if (pos == 1) {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
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
	insertAtPosition(6,5);
	print();
	
}
