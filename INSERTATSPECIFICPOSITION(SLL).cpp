#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
  
  Node *head=NULL;
  void insert(int n){
  	  Node *newNode =new Node;
  	  newNode->data=n;
  	  newNode->next=head;
  	  head=newNode;
  }
  void insertAtSpecificPosition(int pos,int n){
  	Node *newNode=new Node;
  	newNode->data=n;
  	if(pos==1){
  		newNode->next=head;
  		head=newNode;
	  }else{
	  
	  Node *temp=head;
  for(int i=1;i<pos-1 && temp!=NULL;i++){
  	temp=temp->next;
  }

  if (temp==NULL){
  	cout<<"invalid position"<<endl;
  }else{
  
  newNode->next=temp->next;
  temp->next=newNode;
}
}
}
  void print(){
  	cout<<"data in single linked list are:";
  	    Node *temp=head;
  	    while(temp!=NULL){
  	    cout<<temp->data<<" "; 
  	      temp=temp->next;
		  }
  }
  int main(){
  	insert(1);
  	insert(2);
  	insert(3);
  	insert(4);
  	insertAtSpecificPosition(4,8);
  	print();
  	return 0;
  }
