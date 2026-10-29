#include<stdio.h>

void main()
{

int a[20],n,i,search,f=0;
printf("\n Enter Limit:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
 printf("\n Enter Number %d :", i+1);
    scanf("%d",&a[i]);
}

    printf("\n Enter value to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {

        if(a[i]==search)
        {
            f=1;
        printf("\n %d not found: %d",search,i+1);
        break;
        }
    }
    if(f==0)
    {
        printf("\n value is not found..");
    }
}
