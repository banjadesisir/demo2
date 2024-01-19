#include<stdio.h>
#include<stdlib.h>

#define size 5

struct Stack{
    int items[size];
    int top;
};

int main(){
    struct Stack s;
    s.top = -1;
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
    return 0;
}

void push(struct Stack *s){
    int val;
    printf("\nEnter the value you want to Push: ");
    scanf("%d",&val);

    if(s->top==size-1){
        printf("\nStack OverFlow");
    }else{
        s->top++;
        s->items[s->top] = val;
    }
}

void pop(struct Stack *s){
    if(s->top==-1){
        printf("\nStack UnderFlow");
    }else{
        printf("\nThe poped value is %d",s->items[s->top]);
        s->top--;
    }
}

void display(struct Stack *s){
    if(s->top == -1){
        printf("\nStack Empty");
    }else{
        for(int i=0;i<=s->top;i++){
            printf("%d\t",s->items[i]);
        }
    }
}
