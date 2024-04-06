#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5

void push();
void pop();
void display();

struct stack
{
    int stk[MAXSIZE];
    int top;
} s;


void main(){
    int ch;
    s.top=-1;

    while (1)
    {
        printf("\n choose operation: \n");
        printf("        1. push \n");
        printf("        2. pop  \n");
        printf("        3. display  \n");
        printf("        4. exit  \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        
        default:
            printf("Invalid operation.\n");
        }
    }
    

}

//push element
void push(){
    int num;

    if (s.top == (MAXSIZE - 1)){
        printf("Stack is full.\n");
    }
    else
    {
        printf("Enetr the Element: ");
        scanf("%d",&num);
        s.top = s.top+1;
        s.stk[s.top] = num;
    }
    
}

void pop(){
    if (s.top == -1){
        printf("stack is empty.\n");
    }
    else
    {
        printf("poped element is = %d",s.stk[s.top--]);
    }

}


void display(){
    if (s.top == -1){
        printf("stack is empty.\n");
    }
    else
    {
        for (int i = s.top; i>=0; i--){

            printf("%d ",s.stk[i]);
        }
    }
    
}