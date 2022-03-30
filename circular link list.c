/* Create a circular linked list having 3 nodes*/

#include<stdio.h>
#include<stdlib.h>

#define NODES 3

typedef struct node
{
    int data;
    struct node *link;
}clist;

clist *head = NULL;

void insert(int data)
{
    clist *temp;
    clist *new=(clist *)malloc(sizeof(clist));
    if(new==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        new->data=data;
        new->link=NULL;
    if(head==NULL)
    {
        head=new;
        temp=new;
    }
    else
    {
       temp->link = new;
       temp = new;
    }
    temp->link = head;
  }
}

void display()
{
    clist *temp=head;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List contains:\n");
        while(temp->link != head)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
        printf("%d ",temp->data);
        printf("\n");
    }
}


int main()
{
    int data,i=0;
    while(i++<NODES)
    {
    printf("Enter the data:");
    scanf("%d",&data);
    insert(data);
    }
    display();
    
    return 0;
}