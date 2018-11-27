#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void printlist(struct node *temp)
{
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

int mearge(struct node *head1,struct node *head2)
{
	//int a[10],i=0;
	struct node *temp,*temp1;
	temp=head1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head2;
	printlist(head1);
	
}
int main()
{
	int i,n;
	struct node *head1=NULL,*head2=NULL,*temp=NULL,*temp1=NULL;
	printf("\nnodes:");
	scanf("%d",&n);
	printf("\nele:");
	head1=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&head1->data);
	head1->next=NULL;
	temp=head1;
	for(i=1;i<n;i++)
	{
		temp->next=(struct node *)malloc(sizeof(struct node));
		temp=temp->next;
		temp->next=NULL;
		scanf("%d",&temp->data);
	}

	printlist(head1);

	printf("\nnodes:");
	scanf("%d",&n);
	printf("\nele:");
	head2=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&head2->data);
	head2->next=NULL;
	temp1=head2;
	for(i=1;i<n;i++)
	{
		temp1->next=(struct node *)malloc(sizeof(struct node));
		temp1=temp1->next;
		temp1->next=NULL;
		scanf("%d",&temp1->data);
	}
	printlist(head2);
	mearge(head1,head2);
	return 0;
}
