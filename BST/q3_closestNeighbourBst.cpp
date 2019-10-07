#include <bits/stdc++.h>
using namespace std;
struct Node {
	int key;
	Node* left, *right;
};
// To create new BST Node
Node* newNode(int item)
{
	Node* temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->key = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->key)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->key)
    {
        insert(&(*tree)->right, val);
    }
}
int mini=INT_MAX;
int findMaxForN(Node* root, int N,int size);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node* root=NULL;
        int n, k;
        cin>>n;
        mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            insert(&root, k);
        }
        int s;
        cin>>s;
     
       cout<<findMaxForN(root,s,n)<<endl;
         
    }
    return 0;
}

// void printInOrder(Node* root, vector<int> &v){
//   if(!root)
//     return;
//   printInOrder(root->left,v);
//   v.push_back(root->key);
//   printInOrder(root->right,v);
// }

// int findMaxForN(Node* root, int N, int size)
// {
//     // write the inorder and find the previous element
//     std::vector<int> v;
//     printInOrder(root, v);
//     for (int i = 0; i < size; ++i)
//     {
//         cout << v[i] << "  ";
//     }
//     if(v[0] > N){
//         return -1;
//     }
//     else if(N > v[size-1]){
//         return v[size-1];
//     }
//     for (int i = 0; i < size-1; ++i)
//     {
//         if(v[i] <= N && N <= v[i+1]){
//             return v[i];
//         }
//     }
// }



int findMaxForN(Node* root, int N, int size){
    int ans;
    while(root != NULL){
        if(root->key == N){
            ans = root->key;
        }
        else if(root->key > N){
            // its in the left subtree
            root = root->left;
            if(root->key < N){
                ans = root->key;
            }
        }
        else {
            // its in the left subtree
            root = root->right;
            if(root->key > N){
                ans = root->key;
            }
        }
    }
    return ans;
}