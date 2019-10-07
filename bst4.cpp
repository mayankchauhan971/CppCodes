Node *deleteNode(Node *root,  int x)
{
    if(root==NULL)
        return NULL;
    if(root->data==x)
    {
        if(root->left==NULL && root->right==NULL)
            return NULL;
        else if(root->left!=NULL)
        {
            Node *temp = root->left;
            while(temp->right!=NULL)
                temp=temp->right;
            root->data = temp->data;
            root->left = deleteNode(root->left, temp->data);
        }
        else
        {
            Node *temp = root->right;
            while(temp->left!=NULL)
                temp=temp->left;
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    else if(root->data>x)
        root->left = deleteNode(root->left,x);
    else
        root->right = deleteNode(root->right,x);
    return root;
}
