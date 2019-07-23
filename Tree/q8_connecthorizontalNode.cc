#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
	struct Node* nextRight;
	Node(int x){
		data = x;
		left = right = NULL;
		nextRight = NULL;
	}
};
void connect(struct Node *p);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
void printSpecial(Node *root)
{
	if (root == NULL)
		return;
	Node *node = root;
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->nextRight;
	}
	if (root->left)
		printSpecial(root->left);
	else
		printSpecial(root->right);
}
void inorder(Node *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
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
		connect(root);
		printSpecial(root);
		printf("\n");
		inorder(root);
		printf("\n");
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes
void connect(Node *p)
{
	if(!p) return;
	// I will push the elements one by one to the queue
	// will connect cur ->next to q.front()
	// if(q.front() == marker) then cur->next = NULL

	queue <Node*> q;
	Node* marker = NULL;
	Node* cur;
	q.push(p);
	q.push(marker);


	while(!q.empty()){
		cur = q.front();
		q.pop();

		if(cur == marker){
			if(!q.empty()){
				q.push(marker);
			}
			continue;
		}
		else{
			if(cur->left != NULL){
	          q.push(cur->left);
	        }
	        if(cur->right != NULL){
	          q.push(cur->right);
	        }
		}

		if(q.front() == marker){
			// end of one line
			cur->nextRight = NULL;
		}
		cur->nextRight = q.front();
	}
}
