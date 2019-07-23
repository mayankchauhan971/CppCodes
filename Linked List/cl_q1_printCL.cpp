#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node **head_ref, int data)
{
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;
    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; 
    *head_ref = ptr1;
}
void printList(struct Node*);
int main()
{
    int i,n,t,val;
    scanf("%d",&t);
    while(t--)
    {
       struct Node *head = NULL;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
        scanf("%d",&val);
        push(&head,val);
    }
    printList(head);
    printf("\n");
}
return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */
/* Function to print nodes in a given Circular linked list */

void printAfterN(Node* temp, int n){
    Node* printVar = temp;
    while(n--){
        printVar = printVar->next;
    }
    printf("%d ", printVar->data);
}

void printList(struct Node *head)
{
    // find n
    // write a function to n-1 places ahead
    // send my head->next to that function and print it
    // printf("%d \n", head->data );
    // int n = 0;
    Node* temp = head;
    while(temp->next != head){
        // n++;
        printf("%d ", temp->data );
        temp = temp->next;
    }
    printf("%d ", temp->data );
    // n++;
    // temp = head->next;
    // while(temp->next != head->next){
    //     printAfterN(temp,n);
    //     temp = temp->next;
    // }
    // printf("%d pintu", head->data );
}
