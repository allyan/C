#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "sortgen.h"


static void Swap(void* ptr1, void* ptr2, size_t _sizeof)
{
    void* temp = malloc(_sizeof);
    memcpy(temp,ptr2, _sizeof);
    memcpy(ptr2,ptr1, _sizeof);
    memcpy(ptr1,temp, _sizeof);
    free(temp);
}

static void BubbleUp(int _end, void* _arr[], size_t _sizeofitem, fp _IsLess)
{ 
    size_t j;
    for(j = 0; j < _end; ++j)
    {
        if(_IsLess((char*)_arr + j*_sizeofitem, (char*)_arr + (j+1)*_sizeofitem))
        {
            Swap((char*)_arr + j*_sizeofitem, (char*)_arr + (j+1)*_sizeofitem, _sizeofitem);
        }
    }
}

void SortGen(void* _arr, size_t _sizeofitem, size_t _numOfItems, fp _IsLess)
{
    int i;
    if(_arr == NULL)
    {
        return;
    }
    for(i = (int)_numOfItems -1; i >= 0; i--)
    {
        BubbleUp(i, _arr, _sizeofitem, _IsLess);
    }
}


