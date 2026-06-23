#include<stdio.h>
#define Max 10
int arr[Max];

int top=-1;
int a;

void push (int a){
    if (top==Max-1)
    {
        printf("Stack overflow");

    }
    
        arr[++top]=a;
   
}

void pop(){
    if (top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        printf("Pop elemnet is %d\t",arr[top--]);
    }
}
void peep(int x){
    if (top-x+1<0)
    {
        printf("Stack Underflow ");
    }
    else
    {
        printf("%d\t",arr[top-x+1]);
    }
}

void change(int pos,int a){
    if (top-pos+1<0)
    {
        printf("Invalid");
    }
    arr[top-pos+1]=a;
    printf("%d\t",arr[top-pos+1]);
}

void display(){
    if(top==-1){

        printf("Stack empty");

    }
    printf("Stack Elements\n");
    for (int i = top; i >=0; i--)
    {
        printf("%d\t",arr[i]);
    }
}



int main(){
    // int n;
    // printf("Enter the elements");
    // scanf("%d",&n);

    push(5);
    push(10);
    push(15);
    pop();
    peep(2);
    change(1,9);
    display();
}