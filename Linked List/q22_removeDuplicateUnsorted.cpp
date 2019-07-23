#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};
void print(Node *root)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
		struct Node *temp = head;

		for(int i=0;i<K;i++){
			int data;
			cin>>data;
			if(head==NULL)
				head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		

		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to remove duplicates from the linked list
// root: root of the linked list


// Node *removeDuplicates(Node *root)
// {
// 	Node* temp = sorttList(root);
// 	while(temp!=NULL && temp->next!=NULL)
// 	{
// 		if(temp->data == (temp->next)->data){
//              //delete the node
// 			temp->next = (temp->next)->next;
// 		}
// 		else{
// 			temp = temp->next;
// 		}
// 	}
// 	return root;
// }


Node *removeDuplicates(Node *root)
{
	//use for loop instead
	Node* p;
	for(Node* i = root; i != NULL; i = i->next){
		for(Node* j = i->next; j != NULL;j = j->next){
			if(i->data == j->data){
				//delete node normally and not by no head approach
				p=i;
				while(p->next != j){
					p=p->next;
				}
				p->next = p->next->next; 
			}
		}
	}
    return root;
}