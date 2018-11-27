#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE;

void create(NODE **head)
{
    int n;
    NODE *nn=NULL;
    *head=(NODE *)malloc(sizeof(NODE));
    printf("node:");
    scanf("%d",&n);
    printf("values:");

        scanf("%d",(&(*head)->data));
        (*head)->next=NULL;
        (*head)->prev=NULL;

    for(int i=1;i<n;i++)
    {
        nn=(NODE *)malloc(sizeof(NODE));
        scanf("%d",(&nn->data));
        nn->next=*head;
        nn->prev=NULL;
        (*head)->prev=nn;
        
        *head=nn;
    }
}


/*NODE* reverse(NODE **head)
{
    NODE *head1=NULL;
    while((*head)!=NULL)
    {
        NODE *nn=NULL;
          if(head1==NULL)
        {
            head1=(NODE *)malloc(sizeof(NODE));
            head1->data=(*head)->data;
            head1->next=NULL;
            head1->prev=NULL;
            (*head)=(*head)->next;
        }
        else
        {
             nn=(NODE *)malloc(sizeof(NODE));
             nn->data=(*head)->data;
            nn->next=head1;
            nn->prev=NULL;
            head1->prev=nn;
            head1=nn;
            (*head)=(*head)->next;
        }

    }
    
return head1;
}*/

void reverse(NODE **head)
{
    NODE *temp=NULL;
    NODE *current=*head;
    if(current==NULL)
    {
        return;
    }
    if(current->next==NULL)
    {
        printf("Their is no need to reverse\n");
        return;
    }
    while(current!=NULL)
    {
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=NULL)
        *head=temp->prev;
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
    reverse(&head);
    print(head);
}
