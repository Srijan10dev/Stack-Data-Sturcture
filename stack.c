// a program for implemeting stack data structure of the size 5 elements
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int pointer=0;
void Display_choice();
void push(int a);
void pop();
void display();
void sort();
void search(int a);
void reverse();
struct data
{
    int n;
}ele[5];
//A driver's code for running the data structure
void main()
{
    int x=0;
    int c=0;
    int e=0;
    int s=0;
    printf("Today's date: %s \n",__DATE__);
    printf("Today's time: %s \n",__TIME__);
    printf("File Running: %s \n",__FILE__);
    printf("Enter enter 1 to enter the Stack structure\n");
    scanf("%d",&x);
    if(x==1)
    {
        while(true)
        {
            Display_choice();
            scanf("%d",&c);
            switch (c)
            {
                case 1:
                printf("Enter the number to be inserted in the stack structure\n");
                scanf("%d",&e);
                push(e);
                break;
                case 2:
                pop();
                break;
                case 3:
                display();
                break;
                case 4:
                sort();
                break;
                case 5:
                printf("Enter a number to search\n");
                scanf("%d",&s);
                search(s);
                break;
                case 6:
                reverse();
                break;
                case 0:
                exit(0);
                default:
                printf("Invalid Choice. Try again\n");
                break;
            }
        }
    }
    else
    {
        printf("Good Bye. Thanks for using the system\n");
        exit(0);
    }
}
//displaying choices for operation
void Display_choice()
{
    printf("1.\t Push a element\n");
    printf("2.\t Pop a element\n");
    printf("3.\t Display elements\n");
    printf("4.\t Sort all elements\n");
    printf("5.\t Search any elements\n");
    printf("6.\t Reverse elements\n");
    printf("Enter 0 to exit the Stack memory\n");
    printf("Enter your choice\n");
}
//designing push function for inserting elements
void push(int a)
{
    if(pointer==5)
    {
        printf("Stack is Overflown");
    }
    else
    {
        ele[pointer++].n=a;
        printf("Inserted : %d \n",a);
    }
    return;
}
//designing pop function for deleting elements
void pop()
{
    int a=0;
    if(pointer==0)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        a=ele[--pointer].n;
        printf("Deleted : %d \n",a);
    }
    return;
}
//designing display function for displaying all elements
void display()
{
    if(pointer==0)
    {
        printf("No elements to be displayed in the stack memory\n");
    }
    else
    {
        for(int i=0;i<pointer;i++)
        {
            printf("%d \t",ele[i].n);
        }
        printf("\n");
    }
    return;
}
//designing sort function for sorting all elements
void sort()
{
    int temp=0;
    for(int i=0;i<pointer;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(ele[j].n > ele[i].n)
            {
                temp=ele[i].n;
                ele[i].n=ele[j].n;
                ele[j].n=temp;
            }
        }
    }
    return;
}
//desinging search function for search an element in the heap
void search(int a)
{
    if(pointer==0)
    {
        printf("Stack is empty. No elements to search.\n");
    }
    else
    {
        for(int i=0;i<pointer;i++)
        {
            if(a==ele[i].n)
            {
                printf("Element found at position : %d\n",i+1);
                return;
            }
        }
        printf("Element Not Found \n");
        return;
    }
}
//designing the reverse function to reverse all the elements in the stack heap
void reverse()
{
    int a[]={0,0,0,0,0};
    int k=0;
    if(pointer==0)
    {
        printf("No Elements to reversed.");
    }
    else
    {
        for(int i=pointer-1;i>=0;i--)
        {
            a[k++]=ele[i].n;
        }
        for(int i=0;i<pointer;i++)
        {
            ele[i].n=a[i];
        }
    }
}
