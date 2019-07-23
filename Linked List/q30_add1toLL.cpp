#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node* addOne(Node *head);
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
Node *ZZZZZZZZZZ(Node *head)
{
    Node * prev   = NULL;
    Node * current = head;
    Node * next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
void print(struct Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
// This function mainly uses addOneUtil().
int main() {
	// your code goes here
	int T;
	cin>>T;
	int no;
	while(T--)
	{
		struct Node *head = NULL;
        struct Node *temp = head;
        
		cin>>no;
		while(no!=0)
			{
			if(head==NULL)
			head=temp=newNode(no%10);
			else
			{
				temp->next = newNode(no%10);
				temp=temp->next;
			}
			no/=10;
		}
		head = ZZZZZZZZZZ(head);
		
		head=addOne(head);
		print(head);
		cout<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* Node structure
struct Node
{
    int data;
    Node* next;
}; */
// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *addOne(Node *head)
{
    Node* temp = head;
   while(temp){
       cout << temp->data<<endl;
       temp = temp->next;
   }
   return head;
}