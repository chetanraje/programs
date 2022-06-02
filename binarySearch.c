#include <stdio.h>
#include <math.h>
int main()
{
    //initialisation
    int size, i, j, item, temp,left,mid,right,valid;


    // taking user input for size of array
    printf("Enter The Size of Array- ");
    scanf("%d", &size);

    //declaring array of size provided by user
    int data[size];

    // user input for elements of array
    printf("Enter items one by one...\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }
    
    //here elements entered by user could be in any order so in order to use binary search let's sort them in ascending or descending order. i'm using ascending order


    printf("Sorting the array in ascending order\n\n\n");

    for (i = 0; i < size; i++)
    {

        for (j = i + 1; j < size; j++)
        {

            if (data[i] > data[j])
            {
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }

    // printing the sorted array
    printf("Sorted array is ...\n");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", data[i]);
    }

    printf("\n\nEnter The Element to be Found- ");
    scanf("%d", &item);
    
    left = 0, right = size - 1;
    mid = floor((left + right) / 2);
    valid=1;

    while (left<=right)
    {
        if (item < data[mid])
        {
            right = mid - 1;
            mid = floor((left + right) / 2);
        }
        else if (item > data[mid])
        {
            left = mid + 1;
            mid = floor((left + right) / 2);
        }

        else {
            valid=0;
            break;
        }
    }
    if (valid==1)
    {
        printf("Item not found");
    }else
    {
        printf("Element Found & is Located at position '%d' as per sorted array.", mid+1);
    }
    return 0;
    
}

//Coded By Chetan Sapkal
