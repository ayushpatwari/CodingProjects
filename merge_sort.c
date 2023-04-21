#include <stdio.h>

void break_down();

int main(void)
{
    //creates the arrary
    int data[6];
    int data_size = sizeof(data)/sizeof(data[0]);
    //divides the array into smaller arrays that contain only two different elements
    for (int i = 0; i < data_size; i++)
    {
        break_down(data[6]);
    }
    //merges the array until an array that is the size of the original array is created

    //prints the array
}

void break_down(int data[])
{
    int size = sizeof(data)/sizeof(data[0]);
    
}