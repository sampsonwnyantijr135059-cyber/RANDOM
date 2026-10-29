


//CICULARdoubly linked list
#include<stdio.h>
#include<malloc.h>
struct node
{
    struct  node *next;
    int data;
    struct node *prev;
};
struct  node *start=NULL
void create_ll();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();

void main()
{
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: Add a node at the beginning");
printf("\n 4: Add a node at the end");
printf("\n 5: Add a node before a given node");
printf("\n 6: Add a node after a given node");
printf("\n 7: Delete a node from the beginning");
printf("\n 8: Delete a node from the end");
printf("\n 9: Delete a specific node ");
printf("\n 10: EXIT");
printf("\n\n Enter your option : ");
scanf("%d", &option);
switch(option)
{

case 1:
create_ll();
printf("\n DOUBLY LINKED LIST CREATED");
break;
case 2:
display();
break;
case 3:
insert_beg();
break;
case 4:
insert_end();
break;
case 5:
                insert_before();
break;
case 6:
insert_after();
break;
case 7:
delete_beg();
break;
case 8:
delete_end();
break;
case 9:
delete_node();
break;

}
}while(option != 10);
return 0 ;

}
void create_ll()
{
struct node *new_node, *ptr;
int num;
printf("\n Enter -1 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num != -1)
{
if(start == NULL)
{
   new_node = (struct node*)malloc(sizeof(struct node));
new_node -> prev = new_node;
new_node -> data = num;
new_node -> next = new_node;
start = new_node;
        }
else
        {
         ptr=start;
new_node = (struct node*)malloc(sizeof(struct node));
new_node->data=num;
while(ptr->next!=start)
ptr = ptr->next;
            new_node->prev=ptr;
ptr->next = new_node;
new_node->next=start;
start->prev=new_node;
}
    printf("\n Enter the data:");
    scanf("%d",&num);
}
}
void display()
{
    struct node *ptr;
    if(start == Null)
    {
        printf("\n list id empty!");
        return;
    }
    ptr=start;
    while(ptr->next != start)
    {
        printf("\t %d",ptr->data);
        ptr =ptr->next;
    }
    printf("\t %d",ptr->data);
}
void insert_beg()
{
    struct node *new_node,*ptr;
int num;
if(start == NULL)
    {
        printf("\n list is empty!");
        return;
    }
    printf("\n enter the data:");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    new_node->prev=ptr;
    ptr->next=new_node;

    new_node->next=start;
    start->prev=new_node;

    start=new_node;
}
void insert_end()
{
struct node *ptr, *new_node;
int num;
if(start==NULL)
    {
        printf("\n list is empty!");
        return;
    }
    printf("\n enter the data:");
    scanf("%d",&num);

    new_node= (struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    while(ptr->next !=start)
        ptr=ptr->next;

    ptr->next=new_node;
    new_node->prev=ptr;

    new_node->next=start;
