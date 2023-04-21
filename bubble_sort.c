#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//necessary functions
void printArray();
int checkLastTime();

// basic variables needed
int sorting_size; 
int second_truth_value;

// asks the user for the amount of numbers that they want to sort
int main (int argc, char*argv[])
{
    do
    {
        printf("How many numbers do you want to sort: ");
        scanf("%d", &sorting_size);
    }
    while(sorting_size <= 1);
    
    //creates an array 
    int data[sorting_size];

    int truth_value;
    
    for (int loopcount = 0; loopcount < sorting_size; loopcount++)
    {
        printf("Enter num:");
        scanf("%d", &data[loopcount]);
    }
    //variables used for different loops and conditions
    int loopval = 0;
    int i = 0;
    int x = 0;

    //variable that implements the checking system
    int current_val;

    //main sorting algorithim
    while(loopval == 0)
    {
        //continues looping while loopval = 0;
        for (i = 0; i < sorting_size; i++)
        {
            //makes it easy to identify the current value of data
            current_val = data[i];   
            
            //checks if current data value is smaller/equal to than the next data value; if true, it does nothing
            if (data[i] <= data[i+1])
            {
                if(truth_value == 0)
                {
                    truth_value = 0;
                }
                else
                {
                    truth_value = 1;
                }
                continue;
            }
            else
            {
                //does swap if the current value is smaller 
                if (i == (sorting_size - 1))
                {
                    if(truth_value == 0)
                    {
                        continue;
                    }
                    else
                    {
                        truth_value = 1;
                    }
                }
                else
                {
                    int place_holder = data[i];
                    data[i] = data[i+1];
                    data[i+1] = place_holder;
                    truth_value = 0;
                    current_val = data[i];
                }
            }
        }
        if (truth_value == 1)
        {
            if( checkLastTime(data) == 0)
            {
                loopval = 0;
            }
            else
            {
                loopval = 1;
            }
        } 
        i = 0;
        truth_value = 2;
    }

    if(truth_value == 0)
    {

    }
    printArray(data);
    printf("\n");
    return 0;
}
void printArray(int array[])
{
    for (int y = 0; y < sorting_size; y++)
    {
        printf ("%d ", array[y]);
    }
}

int checkLastTime(int data[])
{
        for (int i = 0; i < sorting_size; i++)
        {
            if (data[i] <= data[i+1])
            {
                second_truth_value = 1;
                continue;
            }
            else
            {
                if (i == (sorting_size - 1))
                {
                    if(second_truth_value == 0)
                    {
                        continue;
                    }
                    else
                    {
                        second_truth_value = 1;
                    }
                }
                else
                {
                    int place_holder = data[i];
                    data[i] = data[i+1];
                    data[i+1] = place_holder;
                    second_truth_value = 0;
                }
            }
        }
    return second_truth_value;
}