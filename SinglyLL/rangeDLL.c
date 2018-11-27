#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE create(NODE **head)
{
	NODE *temp=NULL,*nn=NULL;
	int n,i;
	printf("how many node:");
	scanf("%d",&n);
	printf("\n enter the ele:");
	*head=(NODE *)malloc(sizeof(NODE));
	scanf("%d",(&(*head)->data));
	temp=*head;
	temp->next=NULL;
	for(i=1;i<n;i++)
	{
		nn=(NODE *)malloc(sizeof(NODE));
		scanf("%d",(&nn->data));
		nn->next=NULL;
		temp->next=nn;
		temp=nn;
	}

}

NODE* delete(NODE *head,int x,int y)
{
	//printf("%d%d",x,y);

	if(y<x)
	{
		return head;
	}

	NODE *temp=NULL,*temp1=NULL;
	temp=head;
	if((head)->next==NULL)
	{
		printf("\n Their is no range");
		exit(0);
	}

	if(head==NULL)
	{
		return NULL;
	}
	if(x==0)
	{
		head=head->next;
		free(temp);
	}
	else
	{
	for(int i=1;i<x;i++)
	{
		temp=temp->next;
	}
	if(temp->next==NULL)
	{
		printf("index bound");
		exit(0);
	}
	temp1=temp->next;

	temp->next=temp1->next;
	free(temp1);

}

	delete(head,x,y-1);


}

void print(NODE *head)
{
	NODE *temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}

}

void main()
{
	int x,y;
	NODE *head=NULL;
	create(&head);
	print(head);
	printf("\n enter the range:");
	scanf("%d %d",&x,&y);
	//printf("%d%d",x,y);
	head = delete(head,x,y);
	print(head);
}
