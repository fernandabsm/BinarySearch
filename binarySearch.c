#include <stdio.h>
#include <stdlib.h>

/* binary search in a ordered vector */

int binarySearch(int* v, int size, int element)
{
    int first = 0, last = size - 1, mid;
    while(first <= last)
    {
        mid = (first + last)/2;
        if (element > v[mid])
        {
            first = mid - 1;
        }
        else
        {
            if (element < v[mid])
            {
                last = mid + 1;
            }
            else
            {
                return mid;
            }
            
        }
        
        
    }
}