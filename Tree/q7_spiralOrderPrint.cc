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
void printSpiral(struct Node *root);
/* Driver program to test above functions*/
int main()
{
   int t;
   scanf("%d", &t);
   while (t--)
   {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
     }
     else
       parent = m[n1];
   Node *child = new Node(n2);
   if (lr == 'L')
    parent->left = child;
else
    parent->right = child;
m[n2]  = child;
}
printSpiral(root);
cout<<endl;
}
return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
void printSpiral(Node *root)
{
    if(!root) return;
    queue <Node*> q;
    Node* cur;
    int count= 1;
    Node* marker = NULL;
    q.push(root);
    q.push(marker);
    while(q.empty() == false){
        cur = q.front();
        q.pop();

        if(cur == marker){
            if(q.empty() == false){
                q.push(marker);
                count++;
            }
        }
        else{
            if(count%2 == 0){
                if(cur->right != NULL){
                  q.push(cur->right);
                } 
                if(cur->left != NULL){
                  q.push(cur->left);
                }
                cout << cur->data << " ";
            }
            else{
                cout << cur->data << " ";
               if(cur->left != NULL){
                  q.push(cur->left);
                }
                if(cur->right != NULL){
                  q.push(cur->right);
                } 
            }
        }
            
    }
}
