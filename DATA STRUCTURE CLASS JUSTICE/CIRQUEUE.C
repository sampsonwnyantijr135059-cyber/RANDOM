#include <stdio.h>
#define MAX 3
int queue[MAX];
int front=-1, rear=-1;
void insert ();
int delete_element();
void display();

int main()
{
    int option, val;
    do
    {

        printf("\n **** MIAN MENU ****");
        printf("\n 1. Insert an element");
        printf("\n 2.Delete an element");
        prinft("\n 3. Display the queue");
        printf("\n 4. EXIT");
        printf("\n Enter your option :")
        scaf("%d", &option);
        switch(option)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;1
            case 4:
                exit(0);
                break;

        }
}
