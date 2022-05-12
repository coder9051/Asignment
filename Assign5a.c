#include <stdio.h>

int main()
{
    int array[20];
    int i, p, n, o, e, size;
    p = 0;
    n = 0;
    o = 0;
    e = 0;
    size = sizeof(array)/sizeof(array[0]);
    
    for (i = 0; i < size; i++)
    {
        printf("\nEnter number: ");
        scanf("%d",&array[i]);
    }
    
    for (i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            p++;
        }
        
        else
        {
            n++;
        }
        
        if (array[i]%2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    
    printf("\nNumber of Positive numbers in array = %d", p);
    printf("\nNumber of Negative numbers in array = %d", n);
    printf("\nNumber of Even numbers in array = %d", e);
    printf("\nNumber of Odd numbers in array = %d", o);
    return 0;
}