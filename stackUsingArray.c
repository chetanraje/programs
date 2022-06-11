#include <stdio.h>

void display(int* a, int i, int size){
    if (i<size){
        printf("%d\n",a[i]);
        i++;
        display(a,i,size);
    }
}
void push (int* a,int top, int size) {
    int n;
    if (top==size-1){
        printf("Stack might overflow....\n\n\n");
} else{
    top++;
    scanf("%d", &n);
    a[top]=n;
    push(a, top, size);
}
}
int main(){
    int size;
    printf("Enter the size of 'Stack' - ");
    scanf("%d", &size); 
    int a[size], top=-1;
    printf("\n\nEnter Elements one by one - \n");
    push(a, top, size);
    printf("The stack is - \n");
    display(a,0,size);
}
