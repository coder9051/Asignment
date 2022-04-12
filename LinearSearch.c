#include<stdio.h>

void main()

{
    int count, i, mis[100], search;
    printf("Linear Search");
    printf("\nEnter the number of students: ");
    scanf("%d",&count);

    printf("\nEnter the MIS: ");
    for(i = 0; i < count; i++)
    {
        scanf("%d",&mis[i]);
    }

    printf("\nEnter MIS to be searched: ");
    scanf("%d",&search);

    int index = -1;
    for (i = 0; i < count; i++)
    {
        if (mis[i] == search)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);
    if (index != -1)
    {
        printf("\nMIS %d was present",mis[index]);
        printf("\nIndex: %d",index);
    }
    else
    {
        printf("MIS %d was Absent",search);
    }
}
