#include<stdio.h>
#include<conio.h>
#define MAX 10
 //Define Structure of stack
 struct Stack{
 int item[MAX];
 int top;
 };
//Main function
int main(){
struct Stack s;
s.top=-1;
//menu 
int ch;
    char wish;
    printf("\nChoose your option below from below menu\n1. PUSH\n2. POP\n3. Display\n4. Exit\n");
    do{
        printf("\nYour Choice: ");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            push(&s);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\nPlease choose any number within the menu, TRY AGAIN!!!!");
        }
        fflush(stdin);
        printf("\nIf you want to use the option more press Y or else press any key: ");
        scanf("%c",&wish);
    }while(wish=='Y'||wish=='y');

//add others
return 0;
}
//push
void push(struct Stack *s){
int elt;
printf("\nEnter a element to push:");
scanf("%d", &elt);
if(s->top==MAX-1){
        printf("\nStack overflow");
}else{
    s->top++;
    s->item[s->top]=elt;
}
}
//pop
void pop(struct Stack *s){
int elt;
if(s->top==-1){
    printf("\nStack underflow");
}else{
elt=s->item[s->top];
s->top--;
printf("\nThe element in pop is = %d", elt);
}
}
//display
void display(struct Stack *s){
    int elt;
if(s->top==-1){
    printf("\nstack empty");
}else{
s->item[s->top]= elt;
}
}
