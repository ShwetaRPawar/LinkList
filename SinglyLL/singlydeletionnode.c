#include<stdio.h>
#include<malloc.h>

 struct Node
{
	int data;
	struct Node *next;
};
void printlist(struct Node *temp)
{
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");

}
void delt(struct Node *head,int pos,int n)
{
	int i;
	struct Node *temp;
	if(pos==0)
	{
		head=head->next;
		temp=head;
	}

	else if(pos==n)
	{
		printf("Link list is end\n");
	}
	else
	{
		for((i=1)&&(temp=head);i<=pos;(i++)&&(temp=temp->next))
		{
			printf("%d\n",temp->data);
			if(pos==i)
			{
				temp->next=(temp->next)->next;
			}
		}
	}
	printlist(head);
}

int main()
{
	int n=0,i=0,pos=0;
	struct Node *head=NULL,*temp=NULL;
	printf("\nnodes:");
	scanf("%d",&n);
	printf("\nele:");
	head=(struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&(head->data));
	head->next=NULL;
	temp=head;
	
	for(i=1;i<n;i++)
	{
		temp->next = (struct Node *)malloc(sizeof(struct Node));
		temp = temp->next;
		temp->next=NULL;
		scanf("%d",&(temp->data));
	}
	printlist(head);
	printf("deleted pos:");
	scanf("%d",&pos);
	delt(head,pos,n);
	return 0;
}

