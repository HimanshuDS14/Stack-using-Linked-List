#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node*next;
};

struct node*n;

void push()
{
    struct node*temp;
    temp = (struct node*)malloc(sizeof(struct node));
    int item;
    printf("Enter a data : ");
    scanf("%d" , &item);
    temp->data =item;
    temp->next = NULL;

    if(n==NULL)
    {
        n = temp;
    }
    else
    {
        temp->next = n;
        n = temp;

    }
}

void pop( )
{
    struct node*temp;
    if(n==NULL)
    {

        return;
    }
    else
    {
        temp = n;
        n = n->next;
        printf("Popped  item is  : %d\n" , temp->data);
        free(temp);
    }
}

void display( )
{
    struct node*temp;

    if(n==NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
         temp = n;

        printf("Stack is : ");
        while(temp!=NULL)
        {
            printf("%d " , temp->data);
            temp = temp->next;
        }
    }
}

int main()
{


    int ch;
    while(1)
    {
        printf("1 Push\n");
        printf("2 Pop\n");
        printf("3 Exit\n\n");

        printf("Enter your Choice : ");
        scanf("%d" , &ch);

        switch(ch)
        {
        case 1:
            push();
            display();
            printf("\n");
            break;
        case 2:
            pop();
            display();
            printf("\n");
            break;

        case 3:
            exit(0);
        }
    }
}




