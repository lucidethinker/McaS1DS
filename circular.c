#include<stdio.h> 
#include<stdlib.h> 
# define max 5 
int queue[max]; 
int front=-1; 
int rear=-1; 
void enqueue() 
{ 
int element; 
if((rear+1)%max==front) 
{ 
printf("Queue is overflow:"); 
} 
else if(front==-1&&rear==-1) 
{ 
printf("Enter element to be inserted"); 
scanf("%d",&element); 
front=0; 
rear=0; 
queue[rear]=element; 
} 
else 
{ 
printf("Enter element to be inserted"); 
scanf("%d",&element); 
rear=(rear+1)%max; 
queue[rear]=element; 
} 
} 
int dequeue() 
{ 
if((front==-1)&&(rear==-1)) 
{ 
printf("\n The queue is underflow"); 
} 
else if(front==rear) 
{ 
printf("\n The dequeued element is %d",queue[front]); 
front=-1; 
rear=-1; 
} 
else 
{ 
printf("\n The dequed element is %d",queue[front]); 
front=(front+1)%max; 
} 
} 
void display() 
{ 
int i; 
if(front==-1&&rear==-1) 
{ 
printf("\n Queue is empty"); 
} 
else 
{ 
printf("\n Element in queue are:"); 
for(i=front;i!=rear;i=(i+1)%max) 
{ 
printf("%d",queue[i]); 
} 
printf("%d",queue[i]); 
} 
} 
int main() 
{ 
int choice=1; 
do 
{ 
printf("\npress1:Insert an element"); 
printf("\npress 2:DElete an element"); 
printf("\npress3:Display the element"); 
printf("\npress 4:Exit\n"); 
printf("\nenter your choice"); 
scanf("%d",&choice); 
switch(choice) 
{ 
case 1: 
enqueue(); 
break; 
case 2: 
dequeue(); 
break; 
case 3: 
display(); 
break; 
case 4: 
exit(0); 
break; 
default: 
printf("invalid"); 
} 
} 
while(choice!=4); 
return 0; 
} 
 

