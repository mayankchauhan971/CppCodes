#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
	struct Node* new_node = new Node(new_data);

	if (*head_ref == NULL)
		*head_ref = new_node;
	else
		(*tail_ref)->next = new_node;
	*tail_ref = new_node;
}
bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
	int T,i,n,l;
	cin>>T;
	while(T--){
		struct Node *head = NULL,  *tail = NULL;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>l;
			append(&head, &tail, l);
		}
		cout<<isPalindrome(head)<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */

int findNumberOfNode(Node* head){
	Node* temp = head;
	int n = 0;
	while(temp){
		temp = temp->next;
		n++;
	}
	delete temp;
	return n;
}

int nthNode(Node* head, int n){
	int i = 1;
	Node* begin = head;
	while(begin){
		if(i == n ){
			return begin->data;
		}
		begin = begin -> next;
		i++;
	}
}

int endNode(Node* head, int n, int count){
	int i = 0;
	Node* end = head;
	while(end){
		if(i == count-n){
			return end->data;
		}
		end = end -> next;
		i++;
	}
}

bool isPalindrome(Node *head)
{
	//find number of nodes
	// find the nth node
	// find the nth node from the end
	// compare the node
	// if equal increase n else return 0;
	// if n = n/2+1 return 1;
	int count = findNumberOfNode(head);
	int n = 0;
	while(1){
		int begin = nthNode(head, n);
		int end = endNode(head, n,count);
		if(n == 1 + count/2){
			break;
		}
		if(begin == end){
			n++;
		}
		else{
			return 0;
		}
	}
	return 1;
}
