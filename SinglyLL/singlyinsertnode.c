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

void insert(struct Node *head,int val,int pos)
{
int i;
struct Node *new,*temp;
new=(struct Node*)malloc(sizeof(struct Node));

new->data=val;
if(pos==0)
{
new->next=head;
head=new;
}
else 
{
for((i=1)&&(temp=head);i<=pos;(i++)&&(temp=temp->next))
{
	if(pos==i)
		{
			new->next=temp->next;
			temp->next=new;
		}
}
}
printlist(head);
}
int main()
{
int n=0,i=0,val=0,pos=0;
struct Node *head=NULL;
struct Node *temp=NULL;
printf("\nElements:");
scanf("%d",&n);
printf("\n numbers:");
head=(struct Node*)malloc(sizeof(struct Node));
scanf("%d",&(head->data));
head->next=NULL;
temp=head;

for(i=1;i<n;i++)
{
temp->next=(struct Node*)malloc(sizeof(struct Node));
temp=temp->next;
temp->next=NULL;
scanf("%d",&(temp->data));
}
printlist(head);
printf("\nposition and value to be inserted:");
scanf("%d%d",&pos,&val);
insert(head,val,pos);
return 0;
}


