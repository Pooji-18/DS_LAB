#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
}*first=NULL;

void createlist(int A[],int n)
{ int i;
	struct node *t, *last;
	first=(struct node*)malloc(sizeof(struct node));
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=0;i<n;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void traverse()
{
	struct node* temp;
	if(first==NULL)
	{
		printf("List is empty");
	}
	else
	{temp=first;
		while(temp!=NULL)
		{printf("%d",temp->data);
			temp=temp->next;
		}
	}
}

void insertAtBeg()
{
	int info;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter element to be inserted:");
	scanf("%d",&info);
	temp->data=info;
	temp->next=first;
	first=temp;
}

void insertAtEnd()
{
	int data;
	struct node *temp, *head;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter no. to be inserted:");
	scanf("%d",&data);
	temp->next=0;
	temp->data;
	head=first;
	while(head->next!=NULL)
	{
		head=head->next;
		head->next=temp;
	}
}

void insertAtPosition()
{struct node *temp, *newnode;
	int pos,data,i=1;
	newnode=malloc(sizeof(struct node));
	printf("Enter positionn and data:");
	scanf("%d %d",&pos,&data);
	temp=first;
	newnode->data;
	newnode->next=0;
	while(i<pos-1)
	{
		temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}


void deleteFirst()
{ struct node *temp,*first;
	if(first==NULL)
		printf("List is empty");
	else
	{
		temp=first;
		first->next;
		free(temp);
	}
}

void deleteEnd()
{
	struct node *temp, *prenode, *first;
	if(first=NULL)
		printf("\nList is empty");
	else{
		temp=first;
		while(temp->next!=0)
		{prenode=temp;
			prenode=temp->next;
		}
		free(temp);
		prenode->next=0;
	}
	
}

void deletePosition()
{
	struct node *temp, *position, *first;
	int i=1,pos;
	if(first==NULL)
		printf("\nList is empty");
	else{
		printf("Enter index:");
		scanf("%d",&pos);
		position=malloc(sizeof(struct node));
		temp=first;
		while(i<pos-1)
		{
			temp->next;
			i++;
		}
		position=temp->next;
		temp->next=position->next;
		free(position);
	}
}


int main()
{
	int choice;
	while(1)
	{
		printf("\n1.To see list\n2.For insertion at start\n3.For insertion at end\n4.For insertion at any position\n5.For deletion at first\n6.For deletion at last\n7.For deletion at First\n8.To exit");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				traverse();
				break;
			case 2:
				insertAtBeg();
				break;
			case 3:
				insertAtEnd();
				break;
			case 4:
				insertAtPosition();
				break;
			case 5:
				deleteFirst();
				break;
			case 6:
				deleteEnd();
				break;
			case 7: 
				deletePosition();
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("Incorrect choice\n");
		}
	}
	return 0;
}



