#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct Queue{
	int data[MAX];
	int front;
	int rear;

};
void enqueue(struct Queue *q);
void dequeue(struct Queue *q);
void display(struct Queue *q);
int main(){
struct Queue q1;
q1.front=0;
q1.rear=-1;
int choice;
	while(1){
	 printf("\nChoose:\n1.enqueue\n2.dequeue\n3.Display\n4.Exit\nEnter a choice: ");
	 scanf("%d",&choice);

	 switch(choice){
	 	case 1:
	 		enqueue(&q1);
	 		break;
		case 2:
			dequeue(&q1);
			break;
	 	case 3:
	 		display(&q1);
	 		break;
	 	case 4:
	 		exit(-1);
	 		break;
	 	default:
	 		printf("Enter the correct choice 1,2,3 or 4\n");
	 }
	}
	 return 0;


}

void enqueue(struct Queue *q){
int elt;

	if(q->rear==MAX-1){
		printf("Queue is full\n");

	}else{
		printf("\nEnter an element: ");
		scanf("%d",&elt);
		q->rear++;
		q->data[q->rear]=elt;


	}
}

void dequeue(struct Queue *q){
if(q->rear < q->front){
		printf("Queue is empty\n");
	}else{
		printf("The dequeue element is %d\n",q->data[q->front]);
		q->front++;

	}
}

void display(struct Queue *q){
if(q->rear < q->front){
    printf("Queue is empty\n");

}
else{
    for(int i=q->front;i<=q->rear;i++){
        printf("The element in queue is %d",q->data[i]);
    }
}
}
