#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;

}NODE;

void create(NODE **head)
{
    int n;
    NODE *nn=NULL;
    printf("num:");
    scanf("%d",&n);
     printf("values:");
    if((*head)==NULL)
    {
     *head=(NODE *)malloc(sizeof(NODE));
     scanf("%d",&(*head)->data);
    (*head)->next=NULL;
    }
     NODE *temp;
     temp=*head;

    for(int i=1;i<n;i++)
    {
        nn=(NODE *)malloc(sizeof(NODE));
        scanf("%d",&nn->data);
        temp->next=nn;
        nn->next=NULL;
        temp=nn;
    }
    
}
NODE * reverse(NODE *head)
{
    NODE *temp=NULL;
    NODE *head1=NULL;
        head1=head;
    while(head->next!=NULL)
    {
        temp=(head)->next;
        (head)->next=temp->next;
        temp->next=(head1);
        head1=temp;
    }
    return head1;
}


void print(NODE *head)
{
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
    printf("\n");
}
void main()
{
	NODE *head=NULL;
	create(&head);
	print(head);
	head=reverse(head);
	print(head);
}
