#include<stdio.h>
int main(){
    int size, i, item, valid=0;
    printf("Enter The Size of Array- ");
    scanf("%d",&size);
    int data[size];
    printf("Enter items one by one...\n");
    for (i=0;i<size;i++){
        scanf("%d",&data[i]);
    }
    printf("Enter The Element to be Found- ");
    scanf("%d",&item);
    for (i=0;i<size;i++){
        if (data[i]==item)
        {
            printf("Element Found & is Located at index '%d'",i);
            valid=1;
            break;
        }
    }
    if (valid==0)
    {
        printf("Element is not there.");
    }
    return 0;
            
}
