#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5

void push ();
void pop ();
void display();

struct stack
{
      int stk[MAXSIZE];
      int top;
} s;


void main ()
{
      int ch;
      s.top = -1;

      while(1)
      {
            printf("\nChoose operation : \n");
            printf("      1. PUSH\n");
            printf("      2. POP\n");
            printf("      3. DISPLAY\n");
            printf("      4. EXIT\n");
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
                        printf("Invalid operation \n");
            }
      }
}



/*Function to add an element to stack */
void push ()
{
      int num;
      if (s.top == (MAXSIZE - 1))
      {
            printf ("Stack is Full\n");

      }
      else
      {
            printf ("\nEnter element to be pushed : ");
            scanf ("%d", &num);
            s.top = s.top + 1;
            s.stk[s.top] = num;
      }

}


/*Function to delete an element from stack */
void pop ()
{

      if (s.top == - 1)
      {
            printf ("Stack is Empty\n");
      }
      else
      {
            printf ("Popped element is = %d\n", s.stk[s.top--]);
            //s.top = s.top - 1;
      }

}


/*Function to display the status of stack */
void display ()
{
      int i;
      if (s.top == -1)
      {
            printf ("Stack is empty\n");

      }
      else
      {
            printf ("\nStatus of elements in stack : \n");
            for (i = s.top; i >= 0; i--)
            {
                  printf ("%d\n", s.stk[i]);
            }
      }
}
