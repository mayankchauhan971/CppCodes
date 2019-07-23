#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* Node = (struct Node*)
                        malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}
void reversePrint(Node *root);
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
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
   reversePrint(root);
   cout<<endl;
  }
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void reversePrint(Node *root)
{
  //first make a list and initialize it with atleast the head
  //then going to print only the immediate left and right of the head
  //and push the next set of child
  //if my list is empty means end of function
  stack <int> s;
  if(!root) return;
  //means root exists
  queue <Node*> q;
  q.push(root);
  Node* marker = NULL;
  q.push(marker);
  Node* cur;
      
  //queue is all set
  while(q.empty() == false ){
      //as long as my queue is not empty
      cur = q.front();
      q.pop();
      if(cur == marker){
        //cur is a marker
        s.push(-1);
        if(q.empty() == false){
            //because after every marker is catched our one line
            //is completely printed
            q.push(marker);
        }
      }
      else{
        s.push(cur->data);
        if(cur->right != NULL){
          q.push(cur->right);
        }
        if(cur->left != NULL){
          q.push(cur->left);
        }
      }
  }
  while(s.empty() == false){
    if(s.top() == -1){
      // cout << "$ ";
    }
    else{
      cout << s.top() << " ";
    }
    s.pop();
  }
}