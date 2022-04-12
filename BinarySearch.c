#include<stdio.h>

void main()

{

    int count, i, mis[100], search, first, last, index, mid;

    printf("Binary Search");

    printf("\nEnter the number of students: ");

    scanf("%d",&count);

    

    printf("\nEnter the MIS: ");

    for(i = 0; i < count; i++)

    {

        scanf("%d",&mis[i]);

    }

    

    printf("\nEnter MIS to be searched: ");

    scanf("%d",&search);

    

    first = 0;

    last = count - 1;

    mid = (first + last)/2;

    index = -1;

    while (first <= last)

    {

        if (mis[mid] == search)

        {

            index = i;

            break;

        }

        else if (mis[mid] > search)

        {

            last = mid - 1;

        }

        else

        {

            first = mid + 1;

        }

    }

    printf("%d", index);

    

    if (index != -1)

    {

        printf("\nMIS %d was present",search);

        printf("\nIndex: %d",index);

    }

    else

    {

        printf("MIS %d was Absent",search);

    }

}   

    
