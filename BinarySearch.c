#include<stdio.h>

int main()
{
    int count, i;
    printf("Binary Search");
    printf("\nEnter number of student: ");
    scanf("%d", &count);
    
    int mis[count];
    
    for (i = 0; i < count; i++)
    {
        printf("\nEnter MIS: ");
        scanf("%d",&mis[i]);
    }
    
    int low, mid, high, index, search;
    
    printf("\nEnter MIS to be searched: ");
    scanf("%d",&search);
    
    low = 0;
    high = count - 1;
    printf("\n%d", high);
    mid = (low + high)/2;
    printf("\n%d",mid);
    
    while (low <= high)
    {
        if (mis[mid] == search)
        {
            index = mid;
            break;
        }    
    }
    
    printf("\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ",mi
