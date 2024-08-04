#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top= -1;
void main()
{
int choice;
do
{
    printf("\n---------stack----------");
    printf("\n1.push\n2.pop\n3.display\n4.Exit");
    printf("\n---------------------------------");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
    }
    
}while(choice != 4);
getch();
}
push()
{
    int n;
    if(top == MAXSIZE-1)
    printf("\nstack is over flow ");
    else
    {
        printf("\nEnter an element : ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}
pop()
{
    int n;
    if(top== -1)
    printf("stack is empty");
    else
    {
        n=stack[top];
        top--;
        printf("poped element is : %d",n);
    }
}
display()
{
    if(top== -1)
    printf("stack is empty");
    else
    {
        printf("\nElemet of stack ");
        for(int i =top;i>=0;i--)
        printf("%5d",stack[i]);
    }
}