#include <stdio.h>
#include <stdlib.h>

#define size 10


typedef struct Stack
{
   int stack[size];
   int top;
} stack;
static void push(stack *st, int v);

stack* new_stack()
{
   stack *s = malloc(sizeof(stack));

   s->top = -1;
   return s;
}


static void push(stack *s, int value)
{
   ++(s->top);
   s->stack[s->top] = value;
}


void print(stack *s)
{
   for (int i = 0; i < s->top + 1; ++i)
   {
      int value = s->stack[i];
      printf("%i", value);
   }
}


static void pop(stack *s)
{
   --(s->top);
}


int main()
{
   stack *s = new_stack();

   push(s, 5);
   push(s, 7);
   push(s, 4);
   push(s, 1);
   print(s);
   printf(" ");
   pop(s);
   print(s);
   return 0;
}
