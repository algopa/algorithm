#include <stdio.h>

void bubble_sort(int* data, int number)
{
    for (int i = 0; i<number-1; i++)
    {
        for (int j=0; j<number-1-i; j++)
        {
            
            if (data[j] > data[j+1])
            {
                int temp = data[j+1];
                data[j+1] = data[j];
                data[j] = temp;
            }
        }
    }
}

void print_data(int* data, int size)
{
    for (int i = 0; i<size; i++)
    {
        printf("%d ", data[i]);
    }
}

int main()
{
    printf("Hello World\n");
    
    int data[8] = {1, 0, 2, 2, 5, 7, 1, 6};
    
    bubble_sort(data, 8);

    print_data(data, 8);
    
    return 0;
}