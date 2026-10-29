#include<stdio.h>
#define MAX 3

int stack[MAX],top=-1;
void push();
void pop();
void peek();
void update();
void display();

void main()
{
    int op;
    do
    {

        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.peek");
        printf("\n 4.display");
        printf("\n 5.exit");
        printf("\n 6.update");
        printf("\n Enter your choice:");
        scanf("%",&op);

        switch(op)
        {
            case1:
                push();
                break;
            case2:
                pop();
                break;
            case3:
                peek();
                break;
            case4:
                update();
                break;
            case5:
                display();
                break;
        }

        }while(op!=6);
}
void push()
{
        int value;
        printf("\n Enter Value to be inserted:");
        scanf("%d",&value);

        if(top==MAX-1)
        {
            printf("\n stack is overflow..");

        }
        else
        {
            top++;
            stack[top]=value;
        }
}
void pop()
{
        int val;
        if(top==-1)
        {
            printf("Stack is Underflow..");
        }
        else
        {

            top--;
            val = stack[top];
            printf("\n Value Deleted is : %d", val);

        }
}
void peek()
{
            if(top==-1)
        {
            printf("\n Stack is Empty..");
        }
        else
        {
        printf("\n Topmost value is: %d",stack[top]);
        }
}
void update()
{
        int i,x;
        printf("Enter index to be updated :");
        scanf("%d",&i);
        printf("Enter value to be updated:");
        scanf("%d",&x);

        if(top-i+1<=-1)
        {
        printf("\n invalid index");
        }
        else
        {
            stack[top-i+1]=x;
        }
}
void display()
{
       int i;
       if(top==-1)
       {
           printf("\n Stack is Empty..");
       }
       else
       {
        for(i=top;i>=0;i--)
        {
        printf("\n %d", stack[i]);
        }
    }
}

