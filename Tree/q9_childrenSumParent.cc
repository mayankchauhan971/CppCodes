/*input
2
3
4 1 L 4 3 R 3 3 L
5
10 8 L 10 2 R 8 3 L 8 5 R 2 2 L
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void insert(Node *root,int a1,int a2,char lr){
	if(root==NULL){
		return;
	}
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=new Node(a2);
			break;
			case 'R':root->right=new Node(a2);
			break;
		}
	}
	else{
		insert(root->left,a1,a2,lr);
		insert(root->right,a1,a2,lr);
	}
}
void inorder(Node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int isSumProperty(Node *node);
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int m=n;
		Node *root1=NULL;
		while(n-->0){
			int a1,a2;
			cin>>a1>>a2;
			char lr;
			scanf(" %c",&lr);
			if(root1==NULL){
				root1=new Node(a1);
				switch(lr){
					case 'L':root1->left=new Node(a2);
					break;
					case 'R':root1->right=new Node(a2);
					break;
				}
			}
			else{
				insert(root1,a1,a2,lr);
			}
		}
			cout<<isSumProperty(root1)<<endl;
	}
}

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
int isSumProperty(Node *node)
{
    if(!node) return 0;
    //find sum of left subtree
    //find sum of right subtree

    queue <Node*> q;
    q.push(node);
    // i will use a queue to check is the sum of left and right child is same or not
    while(!q.empty()){
    	Node* cur = q.front();
    	q.pop();

    	if(cur->left && cur->right){
    		if(cur->data != cur->left->data + cur->right->data){
    			return 0;
    		}
    	}
    	else if(cur->left){
    		if(cur->data != cur->left->data ){
    			return 0;
    		}
    	}
    	else if(cur->right){
    		if(cur->data != cur->right->data){
    			return 0;
    		}
    	}
    	if(cur->left){
    		q.push(cur->left);
    	}
    	if(cur->right){
    		q.push(cur->right);
    	}
    }
    return 1;
}