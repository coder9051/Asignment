#include <stdio.h>

int queue[100], i, n;
int front = -1;
int rear = -1;

void enqueue()
{
    if (rear >= n-1)
    {
        printf("\nQueue Overflow!");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear += 1;
        printf("\nEnter number: ");
        scanf("%d", &queue[rear]);  
    }
}

void dequeue()
{
    if ((front == -1) || (front > rear))
    {
        printf("\nQueue Underflow");
    }
    else
    {
        printf("Element popped: %d",queue[front]);
        front++;
        n++;
    }
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    int operation;
    printf("Enter number of elements in Queue: ");
    scanf("%d",&n);
    
    printf("\nOperation to be performed on Queue");
    printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
    
    do
    {   
        printf("\nSelect Operation(1/2/3/4): ");
        scanf("%d",&operation);
        switch (operation)
        {
            case 1:
            {
                enqueue();
                break;
            }
            
            case 2:
            {
                dequeue();
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
                printf("Invalid Input");
            }
        }
    }
    while (operation != 4);
    
    return 0;
    
    
}