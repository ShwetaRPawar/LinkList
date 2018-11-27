#include<stdio.h>
#include<stdlib.h>
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
		temp=temp->next;
	}
	printf("NULL\n");
}

void intcount(struct Node *head,int p)
{
	int cnt=0;
	struct Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==p)
		{
		cnt++;
		}
		temp=temp->next;
	
	}
printf("\n %d occure :%d times\n",p,cnt);
}
int main()
{
	int i,n,p=0;
	struct Node *head=NULL,*temp=NULL;
	printf("\nnodes:");
	scanf("%d",&n);
	printf("\nele:");
	head=(struct Node *)malloc(sizeof(struct Node));
	scanf("%d",&head->data);
	head->next=NULL;
	temp=head;
	for(i=1;i<n;i++)
	{
		temp->next=(struct Node *)malloc(sizeof(struct Node));
		temp=temp->next;
		temp->next=NULL;
		scanf("%d",&temp->data);
	}
	printf("\n int to be counted:");
	scanf("%d",&p);
	printlist(head);
	intcount(head,p);
	return 0;
}

