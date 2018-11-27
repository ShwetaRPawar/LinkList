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

void swapnode(struct Node *head,int x,int y)
{
struct Node *temp=NULL,*temp1=NULL,*s1=NULL,*s2=NULL;
temp=temp1=head;
while(temp->next!=NULL)
	{
	if((temp->next->data)==x)
	break;
	temp=temp->next;
	}
while(temp1->next!=NULL)
{
	if((temp1->next->data)==y)
	break;
	temp1=temp1->next;
}
s1=temp->next;
temp->next=temp->next->next;
s2=temp1->next;
temp1->next=temp1->next->next;
s1->next=temp1->next;
temp1->next=s1;
s2->next=temp->next;
temp->next=s2;
printlist(head);
}
int main()
{
int i,n,x,y;
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
printf("\nswap x and y");
scanf("%d%d",&x,&y);
swapnode(head,x,y);
return 0;
}

