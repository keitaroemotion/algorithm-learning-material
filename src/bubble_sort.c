#include <stdio.h>

static const int STACK_SIZE = 9;

void sort(int* prev_array)
{
   for (int i = 0; i < STACK_SIZE; i++)
   {
       if( 
           i < STACK_SIZE - 1 &&
           prev_array[i] > prev_array[i + 1]
       )
       {
           int swap          = prev_array[i];
           prev_array[i]     = prev_array[i + 1];
           prev_array[i + 1] = swap;
       }
   }

   for (int i = 0; i < STACK_SIZE; i++)
   {
       if( 
           i < STACK_SIZE - 1 &&
           prev_array[i] > prev_array[i + 1]
       )
       {
           sort(prev_array);
       }
   }
}

void bubble_sort(){
    int prev_array[STACK_SIZE] = {5, 66, 1, 0, 4, 3, 2, 8, 99};

    sort(prev_array); 

    for (int i = 0; i < STACK_SIZE; i++)
    {
        printf("%d\n", prev_array[i]);
    }
}
