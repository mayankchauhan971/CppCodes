#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */
void linkdelete(struct node  *head, int M, int N);
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}
void insert(int n1)
{
    int n,value;
    n=n1;
    struct node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start=(struct node *) malloc( sizeof(struct node) );
            start->data=value;
            start->next=NULL;
            temp=start;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        linkdelete(start,m,n);
        printList(start);
    }
    
    return 0;
}


// void linkdelete(struct node  *head, int M, int N)
// {
//      if(M == 1){
//         head = NULL;
//     }
//     if(temp==NULL||temp->next==NULL)
//             return;
//     int count = -1;
//     node* temp = head;
//     while(temp && temp->next){
//         count++;
//         if(count == M-1){
//             int t = N;
//             while(t>0){
//                 if(temp->next->next == NULL){
//                     delete temp->next;
//                 }
//                 t--;
//                 temp->next = temp->next->next;
//             }
//             count = -1;
//         }
//         temp = temp->next;
//     }  
// }




void linkdelete(struct node *head, int m, int n)
{
    struct node *temp=head,*p,*r;
    while(temp!=NULL)
    {
        int c=1,c1=1;
        while(c<m&&temp!=NULL) {
            temp=temp->next;
            c++;
        }
        if(temp==NULL||temp->next==NULL)
            return;
        p=temp;
        temp=temp->next;
        while(c1<=n&&temp!=NULL)
        {
            r=temp;
            temp=temp->next;
            free(r);
            c1++;
        }
        p->next=temp;
    }
}