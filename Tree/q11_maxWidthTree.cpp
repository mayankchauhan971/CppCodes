#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
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
/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root);
/* Driver program to test size function*/
int main()
{
	int t;
	struct Node *child;
	scanf("%d", &t);
	while (t--)
	{
		map<int, Node*> m;
		int n;
		scanf("%d",&n);
		struct Node *root = NULL;
		while (n--)
		{
			Node *parent;
			char lr;
			int n1, n2;
			scanf("%d %d %c", &n1, &n2, &lr);
			if (m.find(n1) == m.end())
			{
				parent = new Node(n1);
				m[n1] = parent;
				if (root == NULL)
					root = parent;
			}
			else
				parent = m[n1];
			child = new Node(n2);
			if (lr == 'L')
				parent->left = child;
			else
				parent->right = child;
			m[n2]  = child;
		}
		cout << getMaxWidth(root) << endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*  Structure of a Binary Tree 
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
/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
	if(!root) return 0;
	Node* marker;
	queue < Node*> q;
	int curRowElements = 0; //for the first row
	int maxEleTillNow = 0;
	q.push(root);
	q.push(marker);
	while(!q.empty()){
		Node* cur = q.front();
		q.pop();
		curRowElements++;

		if(cur == marker){
			if(maxEleTillNow <= curRowElements){
				maxEleTillNow = curRowElements;
				// cout << maxEleTillNow
			}
			curRowElements = 0;
			if(!q.empty()){
				q.push(marker);
			}
			continue;
		}
		if(cur->left){
			q.push(cur->left);
		}
		if(cur->right){
			q.push(cur->right);
		}
	}
	// here -1 because i was counting the marker as well
	maxEleTillNow = maxEleTillNow-1;
	return maxEleTillNow;
}