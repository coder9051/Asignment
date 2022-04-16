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
    
    int low, mid, high, flag, search;
    
    printf("\nEnter MIS to be searched: ");
    scanf("%d",&search);
    
    low = 0;
    high = count - 1;
    flag = 0;
    
    while (low <= high)
    {
        mid = (low + high)/2;

        if (mis[mid] == search)
        {
            flag = 1;
            break;
        }
        else
        {
            if (mis[mid] > search)
            {
                high = mid - 1;
            }
	           else
	           {
		              low = mid + 1;
	           }
	       }
    
    }
    
    if (flag == 1)
    {
        printf("\nMIS %d is present", search);
        printf("\nIndex: %d",mid + 1);
    }
    else
    {
        printf("MIS %d is Absent",search);
    }
  
    return 0;
}
