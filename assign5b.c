#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int i, size, limit, flag;
    size = sizeof(array)/sizeof(array[0]);
    limit = size/2;
    flag = 0;
    
    for (i = 0; i < limit; i++)
    {
        if (array[i] =! array[size-1-i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Array is not same when read both side");
    }
    else
    {
        printf("Array is same when read both side");
    }
    return 0;
}