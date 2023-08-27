#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int stck[100];
int top=-1,i;
void main()
{
    int choice;
    printf("\n--------------STACK PROGRAM---------------\n");
    do
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\nENter Your Choice::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:
            printf("\nEnter a valid choice!!");
        }
    } 
    while(choice!=4);  
}
void push()
{
    if(top==99)
    {
        printf("\nStack is Full!!");
    }
    else{
        int item;
        printf("Enter a value::");
        scanf("%d",&item);
        top=top+1;
        stck[top]=item;
        
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty!!");
    }
    else
    {
        int item=stck[top];
        top=top-1;
        printf("Popped Item is::%d",item);
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack Is Empty!!");
    }
    printf("Stack::\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stck[i]);
    }    
getch();    
}