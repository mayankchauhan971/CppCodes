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
bool isBalanced(struct Node *root);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
/* Driver program to test size function*/
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		map<int, Node*> m;
		int n;
		scanf("%d",&n);
		struct Node *root = NULL;
		struct Node *child;
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
		cout << isBalanced(root) << endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node structure
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
// This function should return tree if passed  tree 
// is balanced, else false. 

int findHt(Node* root){
	if (root == NULL) return 0;

    int leftHt = findHt(root->left);
    int rightHt = findHt(root->right);
    int curHt = max(leftHt, rightHt) + 1;
    return curHt;
}

bool isBalanced(Node *root)
{
	int lfHt, rtHt;
	if(root == NULL) return 1;
	

	lfHt = findHt(root->left);
	// cout << "left height -> " << lfHt << endl;
	rtHt = findHt(root->right);
	// cout << "right height -> " << rtHt << endl;
	// because the condition for balanced subtree is that left and right subtree should be balanced as well
	if(abs(rtHt - lfHt) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
		return 1;
	}
	return 0;
}
