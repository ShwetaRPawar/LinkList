#include<stdio.h>
#include<stdlib.h>
 struct Node
{
char data;
struct Node *next;
};

void printlist(struct Node *temp)
{
while(temp!=NULL)
{
printf("%c->",temp->data);
temp=temp->next;
}
printf("NULL\n");
}

void ispalindrom(struct Node *temp)
{
char a[10];
int i=1,j,k,s,l;
while(temp!=NULL)
	{
	a[i]=temp->data;
	temp=temp->next;
printf("%c and %d\n",a[i],i);
	i++;
	}
k=i-1;

printf("%d\n",k);
j=1;	
while(k>j)
{
	if(a[j++]!=a[k--])
	{
	printf("\n string is not palindrom\n");
	return;
	}
}
printf("\n string is palindrom\n");

}
int main()
{
int i,n,p=0;
struct Node *head=NULL,*temp=NULL;
printf("\nnodes:");
scanf("%d",&n);
printf("\nele:");
head=(struct Node *)malloc(sizeof(struct Node));
scanf("%s",&head->data);
head->next=NULL;
temp=head;
for(i=1;i<n;i++)
{
temp->next=(struct Node *)malloc(sizeof(struct Node));
temp=temp->next;
temp->next=NULL;
scanf("%s",&temp->data);
}
printlist(head);
ispalindrom(head);
return 0;
}

