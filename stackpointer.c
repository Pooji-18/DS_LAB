
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int size;

struct stack {
   int arr[MAX];
   int top;
};

void init_stk(struct stack *st) {
   st->top = -1;
}

void push(struct stack *st, int num) {
   if (st->top == size - 1) {
      printf("\nStack overflow");
      return;
   }
   else
   {printf("Enter a value to be pushed:");
   }
    scanf("%d",&num);
   st->top++;
   st->arr[st->top] = num;
}

int pop(struct stack *st) {
   int num;
   if (st->top == -1) {
      printf("\nStack underflow");
   }
   else
   {printf("\nPopped element is:%d",st->top);
   }
   num = st->arr[st->top];
   st->top--;
   return num;
}

void display(struct stack *st) {
   int i;
   {if (st->top>-1)
	   {printf("The element of stack are:\n");
	   }
	   else
	   {printf("Stack is empty");
	   }
   for (i = st->top; i >= 0; i--)
      printf("\n%d", st->arr[i]);
}
}

int main() {
   int element, opt, val;
   struct stack ptr;
   init_stk(&ptr);
   printf("\nEnter Stack Size :");
   scanf("%d", &size);
   while (1) {
      printf("\n\ntSTACK PRIMITIVE OPERATIONS");
      printf("\n1.PUSH");
      printf("\n2.POP");
      printf("\n3.DISPLAY");
      printf("\n4.QUIT");
      printf("\n");
      printf("\nEnter your option : ");
      scanf("%d", &opt);
      switch (opt) {
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
         printf("\nEnter correct option!Try again.");
      }
   }
   return 0;
}


