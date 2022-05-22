#include <stdio.h>

int stack[100], i, n;
int top = -1;

void push(void)
{
    if (top >= n-1)
    {
        printf("\nStack Overflow!");
    }
    else
    {
        top++;
        printf("\nEnter number: ");
        scanf("%d", &stack[top]);
    }
}

void pop(void)
{
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("Element popped: %d",stack[top]);
        top--;
    }
}

void display(void)
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    int operation;
    printf("Enter number of elements in stack: ");
    scanf("%d",&n);
    
    printf("\nOperation to be performed on Stack");
    printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
    
    do
    {   
        printf("\nSelect Operation(1/2/3/4): ");
        scanf("%d",&operation);
        switch (operation)
        {
            case 1:
            {
                push();
                break;
            }
            
            case 2:
            {
                pop();
                break;
            }
            
            case 3:
            {
                display();
                break;
            }
            
            case 4:
            {
                break;
            }
            
            default:
            {
                printf("Enter Invalid Input");
            }
        }
    }
    while (operation != 4);
    
    return 0;
    
    
}
