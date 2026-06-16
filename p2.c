#include<stdio.h>
#define Max 20

int arr[Max];
int front =-1;
int rear=-1;
void enqueue(int x){
    if (rear==Max-1)
    {
        printf("queue Overflow");
    }
    else
    {
        if (front==-1)
        {
            front=0;
        }
        arr[++rear]=x; 
    }
}
void dequeue(){
    if (front==-1||front>rear)
    {
        printf("Queue underflow");
    }
    else{
        printf("Elemenet dequeue is %d ",arr[front++]);
    }    
}
void display(){
if (front==-1||front>rear)
{
    printf("queue is empty");
}
for (int i = front; i < rear; i++)
{
    printf(" %d \t",arr[i]);
}

}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    

    display();
    
    
    
}