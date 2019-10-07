// C++ program to find predecessor and successor in a BST
#include <iostream>

using namespace std;
// BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
int key=0;
// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key);
// A utility function to create a new BST node
Node *newNode(int item)
{
	Node *temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
void insert(struct Node *root,int n1,int n2,char lr)
{
	if(root==NULL)
		return;
	if(root->key==n1)
	{
		switch(lr)
		{
			case 'L': root->left=newNode(n2);
			break;
			case 'R': root->right=newNode(n2);
			break;
		}
	}
	else
	{
		insert(root->left,n1,n2,lr);
		insert(root->right,n1,n2,lr);
	}
}
// Driver program to test above functions
int main()
{
    /* Let us construct the tree shown in above diagram */
	int t,k;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		struct Node *root=NULL;
		Node *pre=NULL;
		Node *suc=NULL;
		while(n--)
		{
			char lr;
			int n1,n2;
			cin>>n1>>n2;
			cin>>lr;
			if(root==NULL)
			{
				root=newNode(n1);
				switch(lr){
					case 'L': root->left=newNode(n2);
					break;
					case 'R': root->right=newNode(n2);
					break;
				}
			}
			else
			{
				insert(root,n1,n2,lr);
			}
		}
   // Inorder(root);
    //Node * target =ptr;
    //printkdistanceNode(root, target, k);
    //cout<<endl;
		cin>>key;
		findPreSuc(root, pre, suc, key);
		if (pre != NULL)
			cout << pre->key;
		else
			cout << "-1";
		if (suc != NULL)
			cout <<" "<<suc->key<<endl;
		else
			cout << " "<<"-1"<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/
// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
#include<queue>
queue<Node*> q;

prinntInOrder(Node* root, int n){
	if(!root)
		return;
	prinntInOrder(root->left,n);
	q.push(root);
	prinntInOrder(root->right,n);
}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    // left root right
	prinntInOrder(root,n);
	if(q.front()->key > key){
    	// what we want is not present in the tree
		suc = q.front();
		return;
	}
	Node* aP = q.front();
	int a = aP->key;
	q.pop();
	while(!q.empty()){
		Node* bP = q.front();
		int b =  bP->key;
		q.pop();
		if(q.empty() == true && b < key){
			return b;
		}
		if(key > a && key < b){
			return a;
		}
		else if(key == b){
			return a;
		}
		a = b;
		aP = bP;
	}   
}