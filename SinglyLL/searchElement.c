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

void search(struct Node *head,int num)
{
int count=0;
struct Node *temp;
temp=head;
while(temp!=NULL)
{
	if((temp->data)==num)
	{
	printf("\nnum id found at %d position\n",count);
	return;
	}
	temp=temp->next;
	count++;
	
}
printf("NUm is not found\n");
}
int main()
{
int i,n,num=0;
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
printlist(head);
printf("\nnum to be search:");
scanf("%d",&num);
search(head,num);
return 0;
}

